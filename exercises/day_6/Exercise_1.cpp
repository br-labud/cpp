//******* Aphabet war - airstrike - letters massacre
//******* Write a function that accepts fight string consists of only small letters and * which means a bomb drop place.
//******* Return who wins the fight after bombs are exploded. 

#include <iostream>
#include <string>

using namespace std;

string cleanStr(string str) {
    string chr = "___";
    for(unsigned int i = 0; i < str.length(); ++i) {
        if(i==0 && str[i]=='*' && str[i+1]!='*') str.replace(i,2, chr,1,2);
        else if(i > 0 && str[i]=='*' && str[i+1]!='*') str.replace(i-1,3,chr); 
        else if(i > 0 && str[i]=='*' && str[i+1]=='*') str.replace(i-1,2,chr,1,2); 
        else if(i==str.length()-1 && str[i]=='*')  str.replace(i-1,2, chr,1,2); 
    }
    return str;    
}

string alphabetWar(string figth) {    
    figth = cleanStr(figth);    
    int right = 0, left = 0; 
    for(unsigned int i = 0; i < figth.length(); ++i){
         switch(figth[i]) {
            case 'w': {left+=4; break;}
            case 'p': {left+=3; break;}
            case 'b': {left+=2; break;}
            case 's': {left+=1; break;}
            case 'm': {right+=4; break;}
            case 'q': {right+=3; break;}
            case 'd': {right+=2; break;}
            case 'z': {right+=1; break;}
        }
    }
    if(right > left) return "Right side wins!";
    else if(right < left) return "Left side wins!";
    else return "Let's fight again!";
}

int main() {
    string str1 = "*ww*ww*w*wz";   
    cout <<alphabetWar(str1);
    return 0;
}