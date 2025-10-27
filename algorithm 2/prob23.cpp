#include<iostream>
#include<stdlib.h>
using namespace std;
int ReadPositiveNumber (string message){
    int number;
    do
    {
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}

int RandomBetween (int low , int high){
    int RandomNumber = rand()%(high -low+1)+low;
    return RandomNumber;
}

void FillArrayWithRandomNumber (int arr[100], int &length){
    length=ReadPositiveNumber("Enter the number of elements of array?");
    for(int i=0 ; i<length ; i++){
        arr[i]=RandomBetween(1,100);
    }

}

void PrintArray (int arr[100], int length){
    cout<<"Array Elements: ";
    for(int i=0 ; i<length;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100], length;
    srand((unsigned)time(NULL));
    FillArrayWithRandomNumber(arr,length);
    PrintArray(arr,length);

    return 0;
}