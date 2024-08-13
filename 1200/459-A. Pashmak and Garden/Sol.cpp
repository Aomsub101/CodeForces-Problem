//459-A. Pashmak and Garden
//headerfile
#include<iostream>
#include <math.h>
//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    //check if the point are at the diagonal or not
    if(abs(x1 - x2) == abs(y1-y2))
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1;
    else if(x2 == x1){ //if x-axis cordinate is the same then we add up the x-axis remain the y-axis
            if((y1 > 0 && y2 < 0) || (y1 < 0 && y2 > 0)){//check if y-axis is in a different quadrant  or not
                int dt = abs(y2)+abs(y1);
                cout << x1+dt << ' ' << y1 << ' '  << x2+dt << ' ' << y2;
            }
            else{
                int dt = abs(abs(y2)-abs(y1));
                cout << x1+dt << ' ' << y1 << ' '  << x2+dt << ' ' << y2;
            }
    }
    else if(y2 == y1){ //if y-axis cordinate is the same then we add up the y-axis remain the x-axis
            if((x1 > 0 && x2 < 0) || (x1 < 0 && x2 > 0)){//check if x-axis is in a different quadrant  or not
                int dt = abs(x2)+abs(x1);
                cout << x1 << ' ' << y1+dt << ' ' << x2 << ' ' << y2+dt;
            }
            else{
                int dt = abs(abs(x2)-abs(x1));
                cout << x1 << ' ' << y1+dt << ' ' << x2 << ' ' << y2+dt;
            }
    }
    else
        cout << "-1";
    return 0;
}