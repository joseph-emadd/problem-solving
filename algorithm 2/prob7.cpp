#include<iostream>
using namespace std;
int ReadPositiveNumber (string message){
    int num;
    do{
        cout<<message<<endl;
        cin>>num;
    }while(num<=0);
    return num;
}
int ReverseNumber (int number){
    int remainder=0;
    int reverse=0;
    while(number>0){
        remainder=number%10;  
        number=number/10;  
        reverse=reverse*10+remainder;
    }
    return reverse;
}
int main(){
    int number=ReadPositiveNumber("Enter a positive number");
    cout<<"The reverse number is :\n"<<ReverseNumber(number);
    
    return 0;
}