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
void PrintInvertedLetterPattern(int number){
    for(int i=number+64 ; i>=65 ; i--){
        for(int j=64 ; j<i; j++){
            cout<<char(i);
        }
        cout<<endl;
    }
}
int main(){
   PrintInvertedLetterPattern(ReadPositiveNumber("Enter a positive number"));
   return 0;
}