#include <iostream>
using namespace std;
struct StFullName {
    string FirstName;
    string LastName;
};
StFullName ReadInfo (){
    StFullName FullName;
    cout<<"Please enter your first name \n";
    cin>>FullName.FirstName;
    cout<<"Please enter your last name \n";
    cin>>FullName.LastName;
    return FullName;
}
string ConcatName (StFullName FullName){
    return (FullName.FirstName+" "+FullName.LastName);
}
void PrintFullName (StFullName FullName){
    cout<<ConcatName(FullName);
}
int main(){
    PrintFullName(ReadInfo());
    return 0;
}