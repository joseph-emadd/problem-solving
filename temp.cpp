#include<iostream>
#include<stdlib.h>
using namespace std;
int RandomBetween (int low , int high){
    double r0= rand();  // 0 to RandMax
    double r1= r0/(RAND_MAX+1);  // 0 to 1
    double r2= r1*(high-low)  ;   // 0 to h-l
    int r= (int) r2+low;
    return r;
}
int main(){
   srand((unsigned)time(NULL)); // to rand different numbers every run
   int c1=0, c2=0,c3=0,c4=0,c5=0,c6=0 , Dic=0;
   for(int i=0; i<150 ; i++){
    Dic=RandomBetween(1,6);
    switch(Dic){
        case 1:
        c1++;
        break;
        case 2:
        c2++;
        break;
        case 3:
        c3++;
        break;
        case 4:
        c4++;
        break;
        case 5:
        c5++;
        break;
        case 6:
        c6++;
        break;
    }
   }
   cout<<"P(1)= "<<(double)c1/100<<endl;
   cout<<"P(2)= "<<(double)c2/100<<endl;
   cout<<"P(3)= "<<(double)c3/100<<endl;
   cout<<"P(4)= "<<(double)c4/100<<endl;
   cout<<"P(5)= "<<(double)c5/100<<endl;
   cout<<"P(6)= "<<(double)c6/100<<endl;
    return 0;
}