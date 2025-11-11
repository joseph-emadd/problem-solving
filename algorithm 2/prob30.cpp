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
    int RandomNumber= rand()%(high-low+1)+low;
    return RandomNumber;
}

void FillArrayWithRandomNumbers (int arr[100], int length){
    for(int i=0; i<length ; i++){
        arr[i]= RandomBetween(1,100);
    }
}

void PrintArray (int arr[100], int length){
    for(int i=0 ; i<length ; i++){
        cout<<arr[i]<<" ";
    }
}

void SumOf2Array (int arr1[100], int arr2[100], int arrsum[100], int length){

    for(int i=0; i<length ; i++){
        arrsum[i] = arr1[i] + arr2[i];
    }
    
}

int main(){
    srand((unsigned)time(NULL));
    int arr1[100] ,arr2[100] ,arrsum[100], length;
    length= ReadPositiveNumber("Enter the number of elments do you want");

    FillArrayWithRandomNumbers(arr1,length);
    FillArrayWithRandomNumbers(arr2,length);
    SumOf2Array(arr1,arr2,arrsum,length);

    cout<<"\nArray 1 Elements: \n";
    PrintArray(arr1, length);

    cout<<"\nArray 2 Elements: \n";
    PrintArray(arr2, length);
    
    cout<<"\nSum of Array1 and Array2 elements: \n";
    PrintArray(arrsum,length);
    return 0;
}