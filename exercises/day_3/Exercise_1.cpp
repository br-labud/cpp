// Prime factor decomposition of n
#include <iostream>
#include <algorithm>

using namespace std;

string factors(int lst) {
    string result, time;
    int i=0;
    if(lst%2==0) {
        while(lst%2==0) {
            lst/=2;
            i++;
        }
        time+=to_string(i);
        if(i>1) result+="(2**"+time+")";
        else result+="(2)";
        i=0;
        time="";
    }

    for(int j = 3; j<=lst; j+=2){
        if(lst%j==0){
            while(lst%j==0) {
                lst/=j;
                i++;
            }
            time+=to_string(i);
            if(i>1) result+="("+to_string(j)+"**"+time+")";
            else result+="("+to_string(j)+")";
            i=0;
            time="";
        }
    }

    return result;
}

int main() {
    int lst;
    cout << "Give an integer ";
    cin >> lst;
    cout << factors(lst);
    return 0;
}