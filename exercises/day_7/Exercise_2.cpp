 /* You throw a ball vertically upwards with an initial speed v (in km per hour).
The height h of the ball at each time t is given by h = v*t - 0.5*g*t*t 
where g is Earth's gravity (g ~ 9.81 m/s**2). A device is recording at every tenth of second the height of the ball. 
Write a function max_ball with parameter v (in km per hour) that returns the time in tenth of second 
of the maximum height recorded by the device.*/

#include <iostream>

using namespace std;

int max_ball(int v0) {

    double h = 0.00, h1 = 0.00;
    double v1 = (double)(v0 / 3.6); // double v1 = static_cast<double>(v0/3.6);
    int count = 0;
    double i = 0.1;

    while(h>=h1) {
        h = v1 * i - 0.5 * 9.81 * i * i;
        if(h1 < h) {h1 = h; i+=0.1; ++count; continue;}
        else return count;
    }
}

int main() {
    int v = 37;
    cout << max_ball(v);
    return 0;
}