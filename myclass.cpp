#include <iostream>
using namespace std;

class MyClass {
    public:
    void mycal(){
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
    
        cout<<"You have exited from calculator & Enter in myvowel function: \n";
        
    }
    void myvowel(){
          char ch;
          char exist1;
          do{

          
   int isLowercaseVowel, isUppercaseVowel;
   cout << "Enter an alphabet: ";
   cin >> ch;   
   isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');


   isUppercaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

   if (isLowercaseVowel || isUppercaseVowel)
      cout << ch << " is a vowel.\n";
   else
      cout << ch << " is a consonant.\n";
     cout<<"Press E for exit or press any button for continue:";
    cin>> exist1;
      
    }
    while (exist1 != 'E' && exist1 != 'e');
    
        cout<<"You have exited: \n";
    }
    
};
int main(){
    MyClass myObj;
    myObj.mycal();
    MyClass myObj1;
    myObj1.myvowel();
    return 0;
}