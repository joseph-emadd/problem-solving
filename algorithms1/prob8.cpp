#include <iostream>  
using namespace std;
enum enMark{pass=1, fail=2};
float ReadMark(){
    float mark;
    cout<<"Enter your mark \n";
    cin>>mark;
    return mark;
}
enMark CheckPassed (float mark){
    if(mark>=50)
    return enMark::pass;
    else
    return enMark::fail;
}
void PrintStatus (float mark){
    if(CheckPassed(mark)==enMark::pass)
    cout<<"passed";
    else
    cout<<"failed";
}
int main()
{
    PrintStatus(ReadMark());
    
    return 0;  
}