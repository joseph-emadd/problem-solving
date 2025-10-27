#include<iostream>
#include<stdlib.h>
using namespace std;
int RandBetween (int low, int high){
    int RandNumber= rand()%(high-low+1)+low;
    return RandNumber;
}
int main(){
    srand((unsigned)time(NULL));
    for(int i=0 ;i<=2 ; i++){
        cout<<RandBetween(1,10)<<endl;
    }
    return 0;
}