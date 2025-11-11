#include<iostream>
#include<stdlib.h>
using namespace std;
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
        arr[i]= RandomBetween(-100,100);
    }
}

void PrintArray (int arr[100] , int arrLength){
    for(int i=0;i<arrLength;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int NegativeCount (int arr[100] , int arrLength){
    int counter=0;
    for(int i=0 ; i<arrLength;i++){
        if(arr[i]<0)
        counter++;
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
    cout<<"\nNegative Numbers Count is : "<<NegativeCount(arr,arrLength)<<"\n\n";    
    return 0;
}