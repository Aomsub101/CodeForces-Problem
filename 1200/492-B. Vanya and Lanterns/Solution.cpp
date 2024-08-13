//492-B. Vanya and Lanterns
//headerfile
#include<iostream>
#include<algorithm>

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int poles, lenght; cin >> poles >> lenght;
    int pos[poles] = {0};
    for(int i = 0;i < poles;i++){
        cin >> pos[i];
    }
    sort(pos, pos+poles);
    int max_distance = pos[0];
    for(int i = 1;i < poles; i++){
        max_distance = max(max_distance, pos[i]-pos[i-1]);
    }

    float internal_rad = float(max_distance) / 2.;
    int rim = max(pos[0], lenght - pos[poles-1]);

    if(internal_rad > rim)
        printf("%.10f", max_distance/2.);
    else
        cout << rim;
    return 0;
}