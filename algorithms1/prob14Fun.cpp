#include<iostream>
using namespace std;

void swap(int &num1,int &num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

int main(){
    int num1, num2;
    cout<<"Enter the first number \n";
    cin>>num1;
    cout<<"Enter the second number \n";
    cin>>num2;
    swap(num1,num2);
    cout<<"the first number is "<<num1<<endl;
    cout<<"the first number is "<<num2<<endl;
    return 0;
}