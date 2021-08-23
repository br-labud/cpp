// Histogram of dice
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::string histogram(std::vector<int> results)
{
    std::string  result;

    int maxElement = *std::max_element(results.begin(), results.end());
    
    for (int currentLevel = maxElement; currentLevel >= 0; --currentLevel)
    {
       std::string  line;
       
       for (int i = 0; i < 6; ++i)
       {
         std::string  lineChunk;
       
         if ((currentLevel != 0) && (results[i] == currentLevel))
           lineChunk += std::to_string(currentLevel);
         else if (currentLevel < results[i])
           lineChunk += '#';
         else
           lineChunk += ' ';
         
         if (lineChunk.size() < 2)
           lineChunk += ' ';
           
          line += lineChunk;
       }
       
       line.erase(line.find_last_not_of(' ') + 1);
       if (!line.empty())
         result += line + '\n';
    }

    result += "-----------\n";
    result += "1 2 3 4 5 6\n";

    return result;
}

int main() {
    std::vector<int> dice = {7,3,10,1,0,5};
    std::cout<<histogram(dice);

    return 0;
}