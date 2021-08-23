// Prime Factors 
#include <iostream>
#include <vector>

using namespace std;

vector<int> prime_factors(long n) {
    vector<int> arr;
    int val = n;
    for(int i=2; i < n; i++) {
        while(val % i == 0) {
            val/=i;
            arr.push_back(i);
        }
    }    
    return arr;
}

void print_vector(vector<int> n) {
    for(int i=0; i<n.size();i++) {cout<<n[i]<<" ";}
}

int main(){
    long n;
    cout << "Give a number ";
    cin >> n;
    print_vector(prime_factors(n));
    return 0;
}