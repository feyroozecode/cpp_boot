#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <iomanip>// for setprecision

using namespace std;

// Recursive Fibonacci (SLOW)
int fibonacci_recursive(int n){
    if(n <= 1){
        return n;
    }
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

// fibnacci withMemoization (FASTER)
int fibonacci_memoization(int n, vector<int>& memo){
    if(n <= 1){
        return n;
    }
    if(memo[n] != -1){
        return memo[n];
    }
    memo[n] = fibonacci_memoization(n-1, memo) + fibonacci_memoization(n-2, memo);
    return memo[n];
}

// Iterative Fibonacci (FASTEST)
int fibonacci_iterative(int n){
    if(n <= 1){
        return n;
    }
    int first = 0;
    int second = 1;
    int next;
    for(int i = 2; i <= n; ++i){
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}

int main (){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

   cout << fixed << setprecision(10);
   
    // Recursive Fibonacci
    auto start = chrono::steady_clock::now();
    cout << "Fibonacci Series (Recursive): ";
    for(int i = 0; i < n; ++i){
        cout << fibonacci_recursive(i) << " ";
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << "\nElapsed time (Recursive): " << chrono::duration <double> (diff).count() << " s" << endl;

    // Fibonacci with Memoization
    start = chrono::steady_clock::now();
    cout << "Fibonacci Series (Memoization): ";
    vector<int> memo(n+1, -1);
    for(int i = 0; i < n; ++i){
        cout << fibonacci_memoization(i, memo) << " ";
    }
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << "\nElapsed time (Memoization): " << chrono::duration <double> (diff).count() << " s" << endl;

    // Iterative Fibonacci
    start = chrono::steady_clock::now();
    cout << "Fibonacci Series (Iterative): ";
    for(int i = 0; i < n; ++i){
        cout << fibonacci_iterative(i) << " ";
    }
    end = chrono::steady_clock::now();
    diff = end - start;
    cout << "\nElapsed time (Iterative): " << chrono::duration <double> (diff).count() << " s" << endl;

    return 0;
}