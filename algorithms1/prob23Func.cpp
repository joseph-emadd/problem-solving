#include<iostream>
#include<cmath>
using namespace std;
float calcAreaOfCircle (float a, float b, float c)
{
    float p= (a+b+c)/2;
    const float pi=3.14;
    float area=(a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));
    return pi*pow(area,2);

}
int main(){
   float a,b,c;
   cout<<"Enter a and b and c to calculate circle area \n";
   cin>>a>>b>>c;
   cout<<"The circle area = "<<calcAreaOfCircle(a,b,c);
    return 0;
}