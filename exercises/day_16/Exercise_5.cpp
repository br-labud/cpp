// Decode the Morse Code 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string decoded;
int cp, ce, te;

const char morse[][10] =
{
  ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--",
  "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
  ".---", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----",
  ".-.-.-", "--..--", "..--..", "-.-.--", ".----.", ".-..-.", "-.--.", "-.--.-", ".-...", "---...",
  "-.-.-.", "-..-.", "..--.-", "-...-", ".-.-.", "-....-", "...-..-", ".--.-.", "...---..."
};
const char ascii[][4] =
{
  "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
  "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z",
  "1", "2", "3", "4", "5", "6", "7", "8", "9", "0",
  ".", ",", "?", "!", "\"", "\"", "(", ")", "&", ":", ";", "/", "_",
  "=", "+", "-", "$", "@", "SOS"
};

string decodeMorse(const std::string & morseCode)
{
  string decode = "";
  string letter = "";
  stringstream ss;
  ss << morseCode;
  int i = 0;
  while (!ss.eof() && ss.good()) {    
    ss >> letter;
    i = 0;
    while (ascii[i]) {
      if (letter == morse[i]) {
        decode += ascii[i];
        break;
      }
      ++i;
    }
    i = 0;
    while (ss.peek() == ' ') {
      ss.get();
      ++i;
    }
    if (i == 1) continue;
    else if (i == 3)
      decode += ' ';
  }
  return decode;
}

int main() {
    string str = ".... . -.--   .--- ..- -.. .";
    cout << decodeMorse(str) << endl;
    return 0;
}