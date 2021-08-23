/*Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.*/
#include <iostream>
#include <string>

using namespace std;

string reverse_words(string str)
{
  string revStr;
  string result;
  for (int i = 0; i < str.length(); i++){
    if (str[i] == ' '){
      result += revStr;
      result += ' ';
      revStr = "";
    }
    else {
      revStr = str[i] + revStr;
    }
  }
  result += revStr;
  return result;
}

int main() {
	string str = "abc de";
	cout << reverse_words(str);
	return 0;
}