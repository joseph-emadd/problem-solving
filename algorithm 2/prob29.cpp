#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;

enum enPrimeOrNot {prime=1, NotPrime=2};

enPrimeOrNot CheckPrime (int number){
    int m= round(number/2);
    for(int i=2; i<=m ; i++){
        if(number%i==0){
        return enPrimeOrNot::NotPrime;}
    }
    return enPrimeOrNot::prime;
}

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

void FillArrayWithRandomNumbers (int arr1[100], int &length){
    length= ReadPositiveNumber("Enter the length of the array");
    for(int i=0; i<length; i++){
        arr1[i]= RandomBetween(1,100);
    }
}

void PrintArray (int arr1[100], int length){
    
    for(int i=0; i<length; i++){
        cout<<arr1[i]<<" ";
    }
}

void CopyPrimeNumbersOfArray (int arrSource[100], int arrDestination[100], int arr1length, int &arr2length ){
     int counter=0;
    for(int i=0; i<arr1length; i++){
        if(CheckPrime(arrSource[i])==enPrimeOrNot::prime){
        arrDestination[counter]=arrSource[i];
        counter++;
    }
    }
    arr2length= counter;
}

int main(){
    srand((unsigned)time(NULL));
    int arr1[100], arr1length;
    FillArrayWithRandomNumbers(arr1,arr1length);

    int arr2[100] , arr2length ;
    CopyPrimeNumbersOfArray(arr1,arr2,arr1length,arr2length);

    cout<<"Array 1 elements: \n";
    PrintArray(arr1,arr1length);
    cout<<endl;
    
    cout<<"Prime Numbers in Array 2 : "<<endl;
    PrintArray(arr2,arr2length);

    return 0;
}