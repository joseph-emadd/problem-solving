#include<iostream>
using namespace std;
string ReadString (string message){
    string word;
    cout<<message<<endl;
    getline(cin,word);
    return word;
}
string EncryptText (string Text , short EncryptionKey){
    for(int i=0 ; i<Text.length() ; i++){
        Text[i]=char((int)Text[i]+EncryptionKey);
    }
    return Text;
}
string DecryptText (string Text , short EncryptionKey){
    for(int i=0 ; i<Text.length() ; i++){
        Text[i]=char((int)Text[i]-EncryptionKey);
    }
    return Text;
}
int main(){
    short EncryptionKey=5;
    string Text=ReadString("Please Enter Text");
    string TextAfterEncryption = EncryptText(Text,EncryptionKey);
    string TextAfterDecryption= DecryptText(TextAfterEncryption,EncryptionKey);
    cout<<"Text Before Encryption= "<<Text<<endl;
    cout<<"Text After Encryption= "<<TextAfterEncryption<<endl;
    cout<<"Text After Decryption= "<<TextAfterDecryption<<endl;
    return 0;
}