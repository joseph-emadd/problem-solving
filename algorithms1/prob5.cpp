#include<iostream>
using namespace std;
struct stInfo{
    int age;
    bool HasDriverLicense;
    bool HasRecommendation;
};
stInfo ReadInfo (){
    stInfo info;
    cout<<"Enter your age \n";
    cin>>info.age;
    cout<<"Do you have driver license if yes enter 1 if not enter 0 \n";
    cin>>info.HasDriverLicense;
    cout<<"Do you have a recommendation \n";
    cin>>info.HasRecommendation;
    return info;
}
bool IsAccepted (stInfo info){
    return ((info.age>21 && info.HasDriverLicense)||(info.HasRecommendation));
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