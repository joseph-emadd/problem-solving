#include <iostream>
using namespace std;
//prob 30
int main(){
    int n,factorial=1;
    cout<<"Please enter the number to calculate the factorial \n";
    cin>>n;
    for(int i=n; i>=1 ; i--){
        factorial*=i;
    } 
    cout<<"The factorial = "<<factorial<<endl;
    return 0;
}