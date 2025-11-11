#include<iostream>
#include<stdlib.h>
using namespace std;
void FillArray (int arr[100] , int &arrlength){
    arrlength=10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}

void PrintArray (int arr[100] , int arrlength){
    for(int i=0 ; i<arrlength ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

short NumberPositionInArray (int number , int arr[100] , int arrlength){
    for(int i=0 ; i<arrlength ; i++){
        if(arr[i]==number)
        return i;
    }
    return -1;
}

bool IsNumberInArray (int number, int arr[100] , int arrlength){
    return NumberPositionInArray(number,arr,arrlength)!=-1;
}

void AddArrayElement (int number, int arr[100] , int &arrlength){
    arrlength++;
    arr[arrlength-1] = number;
}

void CopyDistinctNumbersToArray(int arrSource[100],int arrDestination[100],int SourceLength,int &DestinationLength){
    for(int i=0 ; i<SourceLength;i++){
        if(!IsNumberInArray(arrSource[i], arrDestination,DestinationLength)){
            AddArrayElement(arrSource[i],arrDestination,DestinationLength);
        }
    }
}

int main(){
    int arrSource[100] , SourceLength=0;
    FillArray(arrSource,SourceLength);
    int arrDestination[100] , DestinationLength=0;
    CopyDistinctNumbersToArray(arrSource,arrDestination,SourceLength,DestinationLength);
    cout<<"Array 1 Elements: \n";
    PrintArray(arrSource,SourceLength);
    cout<<"Array 2 Distinct Element: \n";
    PrintArray(arrDestination,DestinationLength);
    
    return 0;
}