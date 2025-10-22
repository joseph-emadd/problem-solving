#include<iostream>
using namespace std;
int ReadPositiveNumber(string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}
int ReverseNumber (int number){
    int remainder=0 , reverse=0;
    while(number>0){
        remainder=number%10;
        number=number/10;
        reverse=reverse*10+remainder;
    }
    return reverse;
}
bool IsPalindromeNumber (int number){
    return number==ReverseNumber(number);
}
int main(){
   int number=ReadPositiveNumber("Enter a positive number to check palindrome number or not");
   if(IsPalindromeNumber(number))
   cout<<number<<" is a palindrome number\n";
   else
   cout<<number<<" is not a palindrome number\n";
   return 0;
}