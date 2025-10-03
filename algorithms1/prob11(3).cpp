#include <iostream>  
using namespace std;
enum enSatus {pass=1, fail=2};
void ReadMarks (int &mark1 , int &mark2 , int &mark3){
    cout<<"Enter the first mark \n";
    cin>>mark1;
    cout<<"Enter the second number \n";
    cin>>mark2;
    cout<<"Enter the third mark \n";
    cin>>mark3;
}
int CalcSum (int mark1, int mark2, int mark3){
    return mark1+mark2+mark3;
}
float CalcAverage (int mark1, int mark2, int mark3){
    return (float) CalcSum(mark1,mark2,mark3)/3;
}
enSatus HasPassed (float average){
    if(average>=50)
    return enSatus::pass;
    else
    return enSatus::fail;
}
void PrintResult (float average){
    if(HasPassed(average)==enSatus::pass)
    cout<<"Passed";
    else
    cout<<"Fail";
}
int main(){
    int mark1,mark2,mark3;
    ReadMarks(mark1,mark2,mark3);
    PrintResult(CalcAverage(mark1,mark2,mark3));
    return 0;  
}

