#include <iostream>
#include <math.h>
using namespace std;

bool inside_circ(double x, double y, double radius) {
    return hypot(x,y) <= radius;
}
double gridpi(unsigned npoints) {
    double count = 0;
    npoints = static_cast<double>(npoints);
    for(double i = 0; i < npoints; i++) {
        for(double j = 0; j < npoints; j++) {
            if(inside_circ(i,j,npoints)){
                count++;
            }
        }
    }
    return 4* count / (npoints * npoints);
}

int main() {
    for (int i:{10,100,1000,10000, 500}) {
        cout << "points: " << i << "\tresult: " <<gridpi(i) <<"\n";
    }
}
