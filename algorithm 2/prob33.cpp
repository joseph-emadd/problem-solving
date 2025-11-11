#include<iostream>
#include<stdlib.h>
using namespace std;
enum enCharType {SmallLetter=1 , CapitalLetter=2, SpecialCharacter=3 , Digit=4};

int ReadPositiveNumber (string message){
    int number;
    do{
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}

int RandomBetween (int low, int high){
    int RandomNumber = rand()% (high-low+1)+ low;
    return RandomNumber;
}

char CharacterType (enCharType CharType){
    switch(CharType){
        case enCharType::CapitalLetter:
        return char(RandomBetween(65,90));
        case enCharType::SmallLetter :
        return char(RandomBetween(97,122));
        case enCharType::SpecialCharacter:
        return char(RandomBetween(33,47));
        case enCharType::Digit:
        return char(RandomBetween(48,57));
    }
    return '0';
}

string GetWord (enCharType CharType , short length){
    string word="";
    for(int i=0;i<length;i++){
        word+= CharacterType(CharType);
    }
    return word;
}

string GenerateKey (){
    string key="";
    key+= GetWord(enCharType::CapitalLetter,4)+"-";
    key+= GetWord(enCharType::CapitalLetter,4)+"-";
    key+= GetWord(enCharType::CapitalLetter,4)+"-";
    key+= GetWord(enCharType::CapitalLetter,4);
    return key;
}

void FillKeysInArray (string arr[100], int length){
    for(int i=0; i<length;i++){
        arr[i]= GenerateKey();
    }
}
void PrintArray (string arr[100] , int length){
    for(int i=0;i<length;i++){
        cout<<"Array["<<i<<"]: "<<arr[i]<<endl;
    }
}
int main(){
    srand((unsigned)time(NULL));
    string arr[100];
    int length= ReadPositiveNumber("How many array elements do you want?");
    
    FillKeysInArray(arr,length);
    cout<<"\nArray Elements:\n\n";
    PrintArray(arr,length);
    return 0; 
}