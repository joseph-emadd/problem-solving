#include <iostream>  
#include<stdlib.h>
using namespace std;
double RnadBetween (int low , int high){
    double r0=rand();            //0 to randmax
    double r1= r0/(RAND_MAX +1); //0 to 1
    double r2= r1*(high-low);    // 0 to high-low
    double r= r2+low;            // l to h
    return r;
}
int RnadIntBetween (int low , int high){
    double r0=rand();            //0 to randmax
    double r1= r0/(RAND_MAX +1); //0 to 1
    double r2= r1*(high-low);    // 0 to high-low
    double r= (int)r2+low;            // l to h
    return r;
}
int main(){
    int h , t =0;
    double num=0;
    for(int i=0 ; i<100 ; i++){
        if(RnadBetween(0,1)<=0.5){
            h++;
        }
        else{
            t++;
        }
    }
    double p_h=h/100;
    double p_t=t/100;
    cout<<"p of h "<<p_h<<endl<<"p of t "<<p_t;
    
    return 0;  
}