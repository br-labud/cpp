// Speed Control
#include <iostream>
#include <vector>

using namespace std;

int gps(int s, vector<double> &x) {
    vector<double> arr;

    if(x.size() < 1) return 0; 

    for(auto i = 0; i < x.size() - 1; i++) {
        double diff = x[i+1] - x[i];
        arr.push_back(3600.0 * (diff / (double)s));  
    }
    int max = 0;
    for(auto i = 0; i < arr.size(); i++) {
        if(max < arr[i]) max = (int)arr[i];
    }
    return max;
}

int main() {
    vector<double> speed = {0.0, 0.11, 0.22, 0.33, 0.44, 0.65, 1.08, 1.26, 1.68, 1.89, 2.1, 2.31, 2.52, 3.25};
    int time = 12;
    cout << gps(time, speed);
    return 0;
}