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
void PrintInvertedPattern (int number){
    for(int i=number; i>=1 ; i--){
        for(int j=i ; j>=1; j--){
            cout<<i;
        }
        cout<<endl;
    }
}
int main(){
   PrintInvertedPattern(ReadPositiveNumber("Enter a positive number"));
   return 0;
}