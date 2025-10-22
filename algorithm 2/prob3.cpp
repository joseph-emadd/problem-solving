#include<iostream>
using namespace std;
int ReadPositiveNumber (string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}
bool ISPerfect (int Number){
    int sum=0;
    for(int i=1 ; i<Number ; i++){
        if(Number%i==0){
            sum+=i;
        }
    }
    return Number==sum;
}
void PrintPerfectOrNot (int Number){
    if(ISPerfect(Number))
    cout<<Number<<" is a Perfect Number";
    else
    cout<<Number<<" is not a Perfect Number";
}
int main(){ 
    PrintPerfectOrNot(ReadPositiveNumber("Enter a positive number to check perfect or not "));
    return 0;
}