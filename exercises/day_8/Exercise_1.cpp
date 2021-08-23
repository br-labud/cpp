// Simple Pig Latin 
#include <iostream>
#include <string>

using namespace std;

string pig_it(string str) {
    string result;
    string str1;
    int pos = 0;
    int len = str.length()-1;
    
    for(int i = 1; i < str.length(); i++) {
        int n = i - pos - 1;
        
        if(str.at(i) == ' ') {
            str1+=str.at(n);
            str1+="ay";
            str1+=str.at(i);
            result+=str1;
            str1="";
            pos=0;
            if(i != len-1) i++;
            continue;
        }

        if(i == len && str.at(len) != '!') {
            str1+=str.at(i);
            str1+=str.at(n);
            str1+="ay";
            break;
        }

        if(str.at(i-1)!= ' ' && i == len && str.at(len) == '!') {
            str1+=str.at(n);
            str1+="ay";
            str1+=str.at(i);
            break;
        }

        if(i == len) {
            str1+=str.at(i);
            break;
        }
        
        str1+=str.at(i);
        ++pos;
    }
    result+=str1;
    return result;
}

int main() {
    string test = "Hello world !";
    cout << pig_it(test);
    return 0;
}