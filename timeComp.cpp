#include<bits/stdc++.h>
using namespace std;

int main () {
    // What is time complexity? 
    // Rate at which the time taken increases with respect to the input size
    // in other words, how the time taken changes as the input size increases
    // how to write time complexity of an algorithm?
    // Big O notation: O(f(n)) where f(n) is a function of n, n is the input size
    // O(1) - constant time complexity
    // O(log n) - logarithmic time complexity
    // O(n) - linear time complexity
    // O(n log n) - linearithmic time complexity
    // O(n^2) - quadratic time complexity
    // O(2^n) - exponential time complexity
    // always consider the worst case time complexity of an algorithm
    // avoid constants and lower order terms when writing time complexity

    // Best case, average case and worst case time complexity
    // Best case: the minimum time taken by an algorithm for any input of size n
    // Average case: the expected time taken by an algorithm for a random input of size n
    // Worst case: the maximum time taken by an algorithm for any input of size n


    // int i;
    // cin >> i;
    // if (i == 1) {
    //     cout << "Best case time complexity: O(1)" << endl;
    // } else if (i == 2) {
    //     cout << "Average case time complexity: O(2)" << endl;
    // } else if (i == 3) {
    //     cout << "Almost Worst case time complexity: O(3)" << endl;
    // } else {
    //     cout << "Invalid input, worst case time complexity: O(4)" << endl;
    // }

    // here if we input 1, it will print "Best case time complexity: O(1)"
    // and if we input 2, it will print "Average case time complexity: O(2)"
    // and if we input 3, it will print "Almost Worst case time complexity: O(3)"
    // and if we input any other number, it will print "Invalid input, worst case time complexity: O(4)"

    // avoid constants value in the f(n) when writing time complexity
    // avoid lower order terms in the f(n) when writing time complexity
    // bcs of no significant effect on the growth rate of the function



    // for (int i = 0; i < N; i++) {
    //     for(int j = 0; j < N; j++) {
    //         cout << i << " " << j << endl;    
    //     }
    // }
    // O(N^2) - quadratic time complexity

    int i, j, N=5;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << i << " " << j << endl;
        }
        
    }
    
    return 0;
}