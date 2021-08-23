// Duplicate Encoder
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string stringLower(string text)
{
	for (auto i = 0; i < text.length(); i++) {if(text[i] >= 'A' && text[i] <= 'Z')	text[i] += 32;}
  	return text;
}

string duplicate_encoder(const string &word) {
    string inp = stringLower(word);
    string result = "";
    int dupl = 0;
    for(auto i = 0; i < inp.length(); i++) {
        dupl = count(inp.begin(), inp.end(), inp.at(i));
        if(dupl == 1) result+="(";
        else result+=")";
     }
     return result;
}

int main() {
    const string input = " ( ( )";
    cout << duplicate_encoder(input);
    return 0;
}