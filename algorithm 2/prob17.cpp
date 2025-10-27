#include<iostream>
using namespace std;
string ReadString (string message){
    string letter;
    cout<<message<<endl;
    cin>>letter;
    return letter;
}
bool GuessPasswordLetter (string Password){
    string word="";
    int counter=0;
    for(int i=65 ; i<=90 ; i++){
        for(int j=65 ; j<=90 ; j++){
            for(int k=65 ;k<=90 ; k++ ){
                counter++;
                word+=char(i);
                word+=char(j);
                word+=char(k);
                cout<<"\nTrial["<<counter<<"]:: "<<word;
                if(Password==word){
                cout<<"\n\nPassword is "<<letter<<endl;
                cout<<"Found After "<<counter<<" Trial "<<endl;
                return true;
                }
                word="";
            }
        }
    }
    return false;
}

int main(){
    string password=ReadString("Enter a 3-letter password (all capiatal) ");
    GuessPasswordLetter(password);
    return 0;
}