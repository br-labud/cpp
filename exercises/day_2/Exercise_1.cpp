// Drawing the Cube
#include <iostream>
#include <sstream>

using namespace std;

string drawing(const int n) {
    stringstream ss;

    for (int i = 0; i < (n * 2) - 1; i++) {
        ss << ((i < (n - 1)) ? ' ' : '#');
    }
    ss << '\n';
  

    for (int i = (n - 2); i > 0; i--) {
        for (int j = 0; j < i; j++) { ss << ' '; }
        ss << '#';
        for (int j = 0; j < n - 2; j++) { ss << '*'; }
        ss << '#';
        for (int j = 0; j < n - i - 2; j++) { ss << '*'; }
        ss << "#\n";
    }
   

    for (int i = 0; i < (n * 2) - 2; i++) { 
        ss << ((i < n) ? '#' : '*'); 
    }
    ss << "#\n";
    

    for (int i = 0; i < n - 2; i++) {
        ss << '#';
        for (int j = 0; j < n - 2; j++) { ss << ' '; }
        ss << '#';
        for (int j = n - i - 3; j > 0; j--) { ss << '*';  }
        ss << "#\n";
    }
    

    for (int i = 0; i < n-1; ++i) { ss << '#'; }
    ss << "#\n";

    return ss.str();
}


string drawCube(const int n) {
    string result;
    switch (n) {
        case 0:
            result = "";
            break;
        case 1:
            result = "#\n";
            break;
        default:
            result = drawing(n);
            break;
    }
    return result;
}

int main() {
    cout << "Give an integer ";
    int n;
    cin >> n;
    cout << drawCube(n);
    return 0;
}