#include <iostream>  
using namespace std;
enum enStatus {pass=1 , fail=2};
struct stMarks {
    float mark1;
    float mark2;
    float mark3;
};
stMarks ReadMarks(){
    stMarks marks;
    cout<<"Enter the first mark \n";
    cin>>marks.mark1;
    cout<<"Enter the second mark \n";
    cin>>marks.mark2;
    cout<<"Enter the second mark \n";
    cin>>marks.mark3;
    return marks;
}
float CalcSum (stMarks marks){
    return marks.mark1+marks.mark2+marks.mark3;
}
float CalcAverage(stMarks marks){
    return CalcSum(marks)/3;
}
bool HasPassed (float average){
    return average>=50;
}
void PrintResult (float average){
    if(HasPassed(average))
    cout<<"Passed";
    else
    cout<<"Failed";
}
int main()
{
    PrintResult(CalcAverage(ReadMarks()));
    
    return 0;  
}