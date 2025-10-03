#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float r, area;
    const float pi=3.14;
    cout<<"please enter r to calculate the circle area \n";
    cin>>r;
    area=pi*pow(r,2);
    cout<<"The area of circle= "<<ceil(area)<<endl;
    return 0;
}