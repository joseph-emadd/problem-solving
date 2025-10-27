#include<iostream>
#include<cstdlib>
using namespace std;
enum enCharacterType {SmallLetter=1 , CapitalLettter=2 , Digit=3 , SpecialCharacter=4};
int RandomBetween (int low, int high){
    int RandomNumber= rand()%(high-low+1)+low;
    return RandomNumber;
}
char GetRandomCharcater (enCharacterType CharacterType){
    switch(CharacterType){
        case enCharacterType::CapitalLettter:
        return char(RandomBetween(65,90));
        break;
        case enCharacterType::SmallLetter:
        return char(RandomBetween(97,122));
        break;
        case enCharacterType::SpecialCharacter  :
        return char(RandomBetween(33,47));
        break;
        case enCharacterType::Digit:
        return char(RandomBetween(48,57));
        break;
    }
    return '0';
}
int main(){
    srand((unsigned)time(NULL));
    cout<<GetRandomCharcater(enCharacterType::SmallLetter)<<endl;
    cout<<GetRandomCharcater(enCharacterType::CapitalLettter)<<endl;
    cout<<GetRandomCharcater(enCharacterType::SpecialCharacter)<<endl;
    cout<<GetRandomCharcater(enCharacterType::Digit)<<endl;
    return 0;
}