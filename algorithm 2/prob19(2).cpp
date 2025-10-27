#include<iostream>
#include<stdlib.h>
using namespace std;
int RandBetween (int low, int high){
    float r0=rand();
    float r1=r0/(RAND_MAX+1);
    float r2=r1*(high-low);
    int r= (int)r2+low;
    return r;
}
int main(){
    for(int i=0 ;i<=2 ; i++){
        cout<<RandBetween(1,10)<<endl;
    }
    
    return 0;
}