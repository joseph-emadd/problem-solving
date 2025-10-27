#include<iostream>
#include<stdlib.h>
using namespace std;

enum enCharType {CapitalLetter=1, SmallLetter=2 , Digit=3 , SpecialCharacter=4};

int ReadPositiveNumber (string message){
    int number;
    do
    {
        cout<<message<<endl;
        cin>>number;
    }while(number<=0);
    return number;
}

int RnadomBetween (int low, int high){
    int RandomNumber=rand()%(high-low+1)+low;
    return RandomNumber;
}

char GetRandomCharacter (enCharType CharType){
    switch (CharType)
    {
        case enCharType::CapitalLetter:
        return char(RnadomBetween(65,90));
        break;
        case enCharType::SmallLetter:
        return char(RnadomBetween(97,122));
        break;
        case enCharType::Digit:
        return char(RnadomBetween(48,57));
        break;
        case enCharType::SpecialCharacter:
        return char(RnadomBetween(33,47));
        break;
    }
    return '0';
}

string GenerateWord (enCharType CharType, short length){
    string word="";
    for(int i=0; i<length ; i++)
    {
        word+= GetRandomCharacter(CharType);
    }
    return word;
}

string GenerateKey (){
    string key="";
    key+= GenerateWord(enCharType::CapitalLetter, 4)+"-";
    key+= GenerateWord(enCharType::CapitalLetter, 4)+"-";
    key+= GenerateWord(enCharType::CapitalLetter, 4)+"-";
    key+= GenerateWord(enCharType::CapitalLetter, 4);
    return key;
}

void GenerateKeys (int NumberOfKeys){
    for(int i=1 ; i<=NumberOfKeys ; i++)
    {
        cout<<"Key["<<i<<"]= ";
        cout<<GenerateKey()<<endl;
    }
}

int main(){

    srand((unsigned)time(NULL));
   GenerateKeys(ReadPositiveNumber("Please Enter How Many Keys Do you Want To Generate? "));

    return 0;
}