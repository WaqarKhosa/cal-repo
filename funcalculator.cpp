#include <iostream>
using namespace std;

float sum(float a, float b)
{
    cout<<"The final result is\n:";
    return a+b;
}

float sub(float a, float b)
{
    cout<<"The final result is:"<< a-b;
    return a-b;
}

float mul(float a, float b)
{
    cout<<"The final result is:";
    return a*b;
}
float DIV(float a, float b)
{
    cout<<"The final result is:";
    return a/b;
}

int main()
{
     char exit;
    do{
    float a,b;
    char ch;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter the operation you want to perform (+,-,*,/)"<<endl;
    cin>>ch;
    cout<<"Enter 2nd number:";
    cin >>b;
    switch(ch)
    {
        case '+':
            cout<<sum(a,b);
            break;
        case '-':
            cout<<sub(a,b);
            break;
        case '*':
         cout<< mul(a,b);
         break;
        case '/':
         cout<< DIV(a,b);
         break;
        default:
            cout<<"Invalid input";
    }
    cout<<"\nPress E for exit or press any button for continue:\n ";
    cin>> exit;
} while (exit != 'E' && exit != 'e');
    
        cout<<"You have exited";
        
}