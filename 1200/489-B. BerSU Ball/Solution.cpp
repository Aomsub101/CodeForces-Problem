//489-B. BerSU Ball
//headerfile
#include<iostream>
#include<algorithm> //using sort()
#include<math.h> //using abs(int* a)

//namespace
using namespace std;

//functions
int main(){
    //write your code here
    int b;
    cin >> b;
    int boys[b];
    for(int i = 0;i < b;i++){
        cin >> boys[i];
    }
    int g;
    cin >> g;
    int girls[g];
    for(int i = 0;i < g;i++){
        cin >> girls[i];
    }
    sort(boys, boys+b);// sort the array boys
    sort(girls, girls+g);// sort the array girls

    int pairs = 0;// contain amount of pairs that can be formed
    int p_boy = 0;// pointer_boy --> use as tracker in boy's array 
    int p_girl = 0;// pointer_girl --> use as tracker in girl's array 
    while(true){
        //if pair can be formed then we moved both array to next boys and girls
        if(abs(boys[p_boy] - girls[p_girl]) <= 1){
            pairs++;
            p_boy++;
            p_girl++;
        }
        //if a boy has more dancing skill than a girl(diff > 1) then move to next girl
        else if(boys[p_boy] - girls[p_girl] > 1)
            p_girl++;
        //if a girl has more dancing skill than a boy(diff > 1) then move to next boy
        else
            p_boy++;
        //if encounter the end of the boy/girl array we break the loop
        if(p_boy == b || p_girl == g)
            break;
    }
    cout << pairs;
    return 0;
}