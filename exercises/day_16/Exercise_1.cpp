// Complementary DNA 
#include <iostream>
#include <string> 

using namespace std;

string DNAStrand(const string &dna) {
    string side = "";
    for(char x : dna) {
        switch(x) {
            case 'A': side += 'T'; break;
            case 'T': side += 'A'; break;
            case 'C': side += 'G'; break;
            case 'G': side += 'C'; break;
        }        
    }
    return side;
}

int main() {
    const string one = "ATTGC";
    cout << DNAStrand(one);
    return 0;
}