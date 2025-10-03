#include <iostream>  
using namespace std;
struct stMarks{
    float mark1;
    float mark2;
    float mark3;
};
enum enStatus {pass=1 , fail=2};
stMarks ReadMarks (){
    stMarks marks;
    cout<<"Enter your first mark \n";
    cin>>marks.mark1;
    cout<<"Enter your second mark \n";
    cin>>marks.mark2;
    cout<<"Enter your third mark \n";
    cin>>marks.mark3;
    return marks;
}
float CalcSum (stMarks marks){
    float sum;
    sum=marks.mark1+marks.mark2+marks.mark3;
    return sum;
}
float CalcAverage (stMarks marks){
    return CalcSum(marks)/3;
}
enStatus IsPassed (stMarks marks){
    if(CalcAverage(marks)>=50)
    return enStatus::pass;
    else
    return enStatus::fail;
}
void PrintStatus (enStatus status){
    if(status==enStatus::pass)
    cout<<"Passed \n";
    else 
    cout<<"Failed \n";
}
int main()
{
    PrintStatus(IsPassed(ReadMarks()));
    return 0;  
}