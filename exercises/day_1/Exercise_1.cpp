/* Implement the function likes which takes an array containing the names of people that like an item. */
#include <iostream>
#include <string> 
#include <vector> 

using namespace std;

string likes(const vector<string>& names) {
    if(names.empty()) return "no one likes this";

    int n = names.size()-2;

    for(int i=0; i < names.size(); i++) {
        if(names.size() < 4) {
            if(names.size()==1) return names[i]+ " likes this";
            else if(names.size()==2) {return names[i]+ " and " + names[i+1]+ " like this"; break;}
            else {return names[i]+ ", " + names[i+1]+ " and "+names[i+2]+ " like this"; break;}      
        }
        else {return names[i]+ ", " +names[i+1]+ " and "+ to_string(n) + " others like this"; break;}            
    }
}

int main() {
    const vector<string> names = {"Marko", "Aleksandar", "Petar", "Neda", "Matei", "Dragan"};
    cout << likes(names); 
    return 0;
}