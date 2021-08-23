// Read the time
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solve(string time){
  vector<string> words = {"midnight", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen",
              "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three",
              "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};

  int h = stoi(time.substr(0, 2)), m = stoi(time.substr(3, 2));
  string pst = "past";

  if (m > 30){
    pst = "to";
    m = 60 - m;
    h++;
  }
  h = h <= 12 ? h : h % 12;

  if (!m) 
    return words[h] + (h ? " o'clock" : "");

  if (m % 15)
    pst = ((m - 1) ? "minutes " : "minute ") + pst;

  return words[m] + " " + pst + " " + words[h];
}

int main() {
    string str = "13:58";
    cout << solve(str);
    return 0;
}