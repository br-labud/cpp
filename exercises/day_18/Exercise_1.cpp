// Shortest Word
#include <iostream>
#include <sstream>

using namespace std;

int find_short(string str)
{
  stringstream ss(str);
  string temp;
  ss >> temp;
  size_t len = temp.length();
  while (ss >> temp)
      if (temp.length() < len) 
        len = temp.length();
  return len;
}

int main() {
    string text = "Let's travel abroad shall we";
    cout << find_short(text) << endl;
    return 0;
}