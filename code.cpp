#include<iostream>
using namespace std;
int main ()
{
    char exit;
    do{ 
        // start loop

    double x,y,z;
    string op;
    cout<<"Welcome to the C++ calculator\n";
    cout<<"Enter the 1st value:";
    cin >> x;
    cout<<"Enter your operator:";
    cin >> op;
    cout<< "Enter the 2nd number:";
    cin >> y;
    if (op == "*"){
        z= x*y;
        cout<<"The result is:"<<z <<endl;
    }
     if (op == "/"){
        z= x/y;
        cout<<"The result is:"<<z <<endl;
    }
     if (op == "+"){
        z= x+y;
        cout<<"The result is:"<<z <<endl;
    }
     if (op == "-"){
        z= x-y;
        cout<<"The result is:"<<z <<endl;
    }
    cout<<"Press E for exit or press any button for continue: ";
    cin>> exit;
    
    }
    while (exit != 'E' && exit != 'e');
    
        cout<<"You have exited";
        return 0;
    
}