//  Given an array (arr) as an argument complete the function countSmileys that should return the total number of smiling faces. 
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countSmileys(vector<string> arr){
    int count=0;
    if(arr.empty()) return 0;

    for(int i=0; i < arr.size(); i++){
        if(arr[i]==":D" || arr[i]==":~D" || arr[i]==":-D") count++;
        else if(arr[i]==";D" || arr[i]==";~D" || arr[i]==";-D") count++;
        else if(arr[i]==":)" || arr[i]==":~)" || arr[i]==":-)") count++;
        else if(arr[i]==";)" || arr[i]==";~)" || arr[i]==";-)") count++;
    }
    return count;
}

int main() {
    vector<string> arr = {";]", ":[", ";*", ":$", ";-D",":D", ":~)", ";~)", ":)"};
    cout << countSmileys(arr);
    return 0;
}