#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// fibonacci function return the nth number in the fibonacci series
// n: the number of terms in the fibonacci series
int fibonacci(int n ){
    if(n <=1 ){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin>> n;

    cout << "Fibonacci Series: ";
   if(n <= 0){
       cout << "Error: Number of terms must be positive" << endl;
       return 1;
   }
 
    if(n == 1){
        cout << "0" << endl;
        return 1;
    }
    if(n == 2){
        cout << "0 1" << endl;
        return 1;
    }

    int i = 0;
    do {
        cout << fibonacci(i) << " ";
        i++;
    } while (i <= n);    
    

    return 0;
    
}