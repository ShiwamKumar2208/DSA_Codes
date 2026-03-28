#include<bits/stdc++.h>
using namespace std;

void extractionODigitsF() {
    long long int n = 7752352357552352357;
    int i = 0;

    while (n > 0) {
        i++;
        n = n / 10;
    }
    cout << i << endl;

    // Striver's Solution:
    long long int y = 7752352357552352357;
    long long int cnt = (int)(log10(y)+1);
    cout << cnt << endl;

    // TC --> O(log10(N))
}

void reverseF() {
    int n = 98634;
    int rn = 0;
    while (n>0)
    {
        int ld = n%10;
        n = n/10;
        rn = (rn*10) + ld;
    }
    cout << rn << endl;
}

void palindromeF() {
    int n = 121;
    int rn = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n%10;
        rn = (rn*10) + ld;
        n = n/10;
    }
    if (dup == rn) cout << "palindrome";
    else cout << "not palindrome";
}

void armstrongF() {
    int num = 371;
    int originalNum, remainder, sum = 0, digits = 0;
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }

    originalNum = num; // Reset originalNum to the input value

    while (originalNum != 0) {
        remainder = originalNum % 10;
        sum += pow(remainder, digits);
        originalNum /= 10;
    }

    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
}

void noODF() {
    int n = 36;
    vector<int> divisors;
    // Iterate from 1 up to the square root of n
    for (int i = 1; i * i <= n; ++i) { //
        if (n % i == 0) {
            divisors.push_back(i);
            // If i is not the square root, then n/i is a different divisor
            if (i * i != n) {
                divisors.push_back(n / i);
            }
        }
    }
    // Sort the divisors to print them in increasing order
    sort(divisors.begin(), divisors.end());

    // Print all divisors
    cout << "The divisors of " << n << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;
}

void primeF() {
    int n = 13;
    int cnt = 0;

    for (int i = 1; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            cnt++;
            if ((n/i) != i) cnt++;
        }
    }
    if (cnt == 2) cout << "true" << endl;
    else cout << "false" << endl;
}

void gcdF() {
    int n1 = 90;
    int n2 = 4;

    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1% i == 0 && n2 % i == 0)
        {
            cout << i<< endl;
            break;
        }
        
    }
    
}

// Euclidean algorithm
// gcd(a,b) = gcd(a-b, b)       where a > b
// then, gcd(20, 15) = gcd(5, 15)
//   so, gcd(5, 15) = gcd(5, 10) = gcd(5, 5) = gcd (0, 5)
// therefore gcd = 5;

void gcdEucF() {
    int a = 1200;
    int b = 30;

    while (a>0 && b > 0)
    {
        if (a>b) a=a%b;
        else b=b%a;
    }
    if (a==0) cout << b;
    else cout<<a;
}

int main() {
    // If N = 9897  (int)
    // then N % 10 will give me 7
    // N / 10 = 989 = N1
    // N % 100 will give 97
    // N1 % 10 will give 9 

    // continues and can be used to extract every digit

    // long long int n = 77895652335;

    // while (n > 0) {
    //     int ld;
    //     ld = n % 10;
    //     n = n / 10;
    //     cout << ld << endl;
    // }
    
    extractionODigitsF();
    reverseF();
    palindromeF();
    armstrongF();
    noODF();
    primeF();
    gcdF();
    gcdEucF();
    return 0;
}