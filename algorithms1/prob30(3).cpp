#include <iostream>  
#include<cmath>
using namespace std;

int ReadAPositiveNumber (string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<0);
    return number;
}
int Factorial (int n){
    int factorial=1;
    for(int i=n ; i>1 ; i--){
        factorial*=i;
    }
    return factorial;
}
int main(){
    cout<<Factorial(ReadAPositiveNumber("Enter a positive number"));

    return 0;  
}