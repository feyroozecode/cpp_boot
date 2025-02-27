#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    cout << "Assalam Aleykoum Welcome to my good Calculator";
    
    int a, b;
    int main_loop = true; 
    double result = 0;

    while (main_loop)
    {
        
        // show the program
        cout << "Enter your option for start : \n1: Add: \n2: Substraction: \n3:Multiply: \n4: Divide: \n:";
        int choice;
        cin>> choice;

        cout << "Enter number 1: ";
        cin >> a;

        cout << "Enter number 2: ";
        cin >> b;
        
        switch (choice) {   
            case 1 :
                result = a+b;
                cout << "The result of  " << a << " + " << b << " = " << result;
                break;
            case 2: 
                result = a-b;
                cout << "The result of minus " << a << " - " << b << " = " << result;
            break;
                result = a*b;
                cout << "The result of  " << a << " * " << b << " = " << result;
                break;
            case 3: 
                try
                {
                result = a/b;
                cout << "The result of  " << a << " / " << b << " = " << result ;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                    return 1;
                }
                break;
        default:
                cout << "Error , please choose good operation betwen 1 to 4" ;
            break;
        }

     cout << "You when to continue (Y/N)";
     char u_response ;
     cin>> u_response;
     if(u_response == 'N'){
        main_loop = false;
        cout << "See you later, Salam Aleykoyum";
     } 
    
    }
    
    return 0;
}