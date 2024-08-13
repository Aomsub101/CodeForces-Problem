//headerfile
#include<iostream>
#include<math.h>
#include<iomanip>
//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int t;
    cin >> t;
    while(t--){
        float x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        cout <<fixed << setprecision(6)<< sqrt(pow(x2-x1,2.0)+ pow(y2-(-y1),2.0)) << endl;
    }
    return 0;
}