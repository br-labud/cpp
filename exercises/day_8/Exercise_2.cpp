// ******* ROT13
#include <iostream>
#include <string>

using namespace std;

bool symb_or_numb(char c) {
    string chrc = "0123456789,<.>/?|~!@#$%^&*()_-=+[]{} ";
    for(auto x : chrc) {
        if(c==x) return true;
    }
    return false;
}

string rot13(string msg) {
    string alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string rotstr = "";
    
    for(int i = 0; i < msg.length(); i++){
        char chr = msg.at(i);
        int found = alph.find(chr);
        
        if(symb_or_numb(chr) == false) {
            if(found < 13 || (found >= 26 && found < 39)) rotstr += alph.at(found+13);
            else if(found >= 13 && found < 26) {found%=13; rotstr += alph.at(found);}
            else if(found >= 39 && found < alph.length()) {found%=13; rotstr += alph.at(found+26);}
        }
        else rotstr += chr;
    }
    return rotstr;
}

int main() {
    string str = "AbCd. !";
    cout << rot13(str);
    return 0;
}