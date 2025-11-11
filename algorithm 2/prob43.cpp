#include<iostream>
#include<stdlib.h>
using namespace std;
enum enEvenOrOdd {Even=1, Odd=2};
int ReadPositiveNumber (string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}

int RandomBetween (int low, int high){
    int RandomNumber = rand()%(high-low+1)+low;
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr[100] , int arrLength){
    for(int i=0;i<arrLength;i++){
        arr[i]= RandomBetween(1,100);
    }
}

void PrintArray (int arr[100] , int arrLength){
    for(int i=0;i<arrLength;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

enEvenOrOdd CheckEvenOrOdd (int number){
    if(number%2==0)
    return enEvenOrOdd::Even;
    else
    return enEvenOrOdd::Odd;
}

int CountEvenNumbersInArray (int arr[100] , int arrLength){
    int counter=0;
    for(int i=0 ; i<arrLength; i++){
        if(CheckEvenOrOdd(arr[i])==enEvenOrOdd::Even){
            counter++;
        }
    }
    return counter;
}

int main(){
    srand((unsigned)time(NULL));
    int arr[100] , arrLength=0;
    arrLength = ReadPositiveNumber("Enter the number of elements: ");

    FillArrayWithRandomNumbers(arr,arrLength);
    cout<<"\nArray Elements: \n";
    PrintArray(arr,arrLength);
    cout<<"\nEven Numbers Count is: "<<CountEvenNumbersInArray(arr,arrLength)<<"\n\n";
    
    return 0;
}