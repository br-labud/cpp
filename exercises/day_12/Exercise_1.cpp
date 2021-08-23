// Encryption #1 - Alternating Split
#include <iostream>
#include <string>

using namespace std;

string encrypt(string text, int n) {
    if (text.empty() || n <= 0) return text;
    string result;
    
    while(n>0) { 
        result.clear();
        for(int i = 1; i < text.length();) {
            result+=text.at(i);
            i+=2;
        }
        for(int i = 0; i < text.length();) {
            result+=text.at(i);
            i+=2;
        }
        --n;
        text = result;
    }
    return result;
}


string decrypt(string encryptedText, int n) {
    if (encryptedText.empty() || n <= 0) return encryptedText;
    string result1;
    
    while(n>0) { 
        result1.clear();
        int len = encryptedText.length()/2;
        int time = 1;
        
        for(int i = len; i < encryptedText.length();) {
            
            result1+=encryptedText.at(i);
            
            if(time % 2 == 1 && i < encryptedText.length()-1) i -= len;
            else i += len + 1;
            ++time;
        }        
        --n;
        if(encryptedText.length() % 2 == 0) result1+= encryptedText.at(len-1);
        encryptedText = result1;
    }
    return result1;
}

int main() {
    int n = 1;
    string str = "This is a test!";
    string str2 = "hskt svr neetn!Ti aai eyitrsig";
    cout << encrypt(str, n) <<endl;
    cout << decrypt(str2, n) <<endl;
    return 0;
}