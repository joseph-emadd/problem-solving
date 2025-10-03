#include<iostream>
using namespace std;
struct stInfo{
    int age;
    bool HasDriverLicense;
};
stInfo ReadInfo (){
    stInfo info;
    cout<<"Enter your age \n";
    cin>>info.age;
    cout<<"Do you have driver license if yes enter 1 if not enter 0 \n";
    cin>>info.HasDriverLicense;
    return info;
}
bool IsAccepted (stInfo info){
    return (info.age>21 && info.HasDriverLicense);
}
void PrintStatus (stInfo info){
    if(IsAccepted(info)){
        cout<<"Accepted \n";
    }
    else{
        cout<<"Rejected \n";
    }
}

int main(){
    PrintStatus(ReadInfo());
    return 0;
}