/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int choise; 
    double num1,num2;
    
    cout<<"=== simple calculator=== "<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.subtraction"<<endl;
    cout<<"3.Multipilication"<<endl;
    cout<<"4. Division "<<endl;
    cout<<"CHOOSE ONE OPERATION"<<endl;
    cin>>choise;
    
    cout<<"Enter first number ="<<endl;
    cin>>num1;
    cout<<"Enter second number ="<<endl;
    cin>>num2;
    
    
    switch(choise)
    {
        case 1 :
        cout<<"RESULT "<<num1+num2;
        break;
        
        case 2 :
        cout<<"RESULT"<<num1-num2;
        break;
        
        case 3 : 
        cout<<"Result "<<num1*num2;
        break;
        
        case 4 : 
        cout<<"result"<<num1/num2; 
        break;
        
        default :
        cout<<"invalid choise "<<endl;
        
        
    }
    
    
    return 0;
    
}