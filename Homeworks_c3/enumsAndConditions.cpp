#include <iostream>
using namespace std;
enum encolorchoice {red=1 , blue=1 , green=3 , yellow=4};

int main()
{
    cout << "****************************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";
    int x;
    encolorchoice color;
    cin>>x;
    color=(encolorchoice)x;

    if(color==encolorchoice::red){
        cout<<"it is red \n";
    }
    else if(color==encolorchoice::blue){
        cout<<"it is blue \n";
    }
    else if(color==encolorchoice::green){
        cout<<"it is green \n";
    }
    else if (color==encolorchoice::yellow){
        cout<<"it is yellow \n";
    }
    else{
        cout<<"it is other \n";
    }
    return 0;
}
