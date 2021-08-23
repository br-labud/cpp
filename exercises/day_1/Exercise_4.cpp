// The function "solution" returns true if the first string passed in ends with the second string  
#include <iostream>
#include <string>

using namespace std;

bool solution(string const &sta, string const &end){
    const int slen = sta.length();
    const int elen = end.length();

    if(slen < elen) 
        return false;

    for(int i = 1; i<=elen; i++) {
        if(sta[slen-i]!=end[elen-i]) 
            return false;
    }
    return true;
}

int main(){
    string str, ending;
    cout << "Write first string ";
    cin >> str;
    cout << "Write second string ";
    cin >> ending;
    cout<<endl;
    cout << "Do the first string ends with the secund?" << endl;    
    if(solution(str, ending)==true)
        cout << "Yes" << endl;
    else 
        cout << "No";
    return 0;
}