// The Vowel Code 
#include <iostream>
#include <string>

using namespace std;

string encode(const string &str) {
    string str1 = str;
    for(int i = 0; i < str1.length(); i++) {
        switch(str1[i]) {
            case 'a': str1.at(i)='1'; break;
            case 'e': str1.at(i)='2'; break;
            case 'i': str1.at(i)='3'; break;
            case 'o': str1.at(i)='4'; break;
            case 'u': str1.at(i)='5'; break;
        }
    }
    return str1;
}

string decode(const string &str) {
    string str2 = str;
    for(int i = 0; i < str2.length(); i++) {
        switch(str2[i]) {
            case '1': str2.at(i)='a'; break;
            case '2': str2.at(i)='e'; break;
            case '3': str2.at(i)='i'; break;
            case '4': str2.at(i)='o'; break;
            case '5': str2.at(i)='u'; break;
        }
    }
    return str2;
}

int main() {
    const string word = "hello";
    const string word2 = "h3 th2r2";
    cout << encode(word) << '\n';
    cout << decode(word2) << '\n';
    return 0;
}