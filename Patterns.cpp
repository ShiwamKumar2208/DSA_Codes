#include <bits/stdc++.h>
using namespace std;

void pattern1() {
    cout << "1." << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2() {
    cout << "2." << endl;
    for (int i = 1; i <= 5; i++ ) {
        for (int j = 0; j<5; j++) {
            if (j < i) {
                cout << "*";
            }
        }
        cout << endl;
    }

    // Striver's solution:
    // for (int i = 1; i <= 5; i++ ) {
    //     for (int j = 0; j<i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}

void pattern3() {
    cout<<"3."<<endl;
    for (int i = 1; i <= 5; i++ ) {
        for (int j = 1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4() {
    cout << "4." << endl;
    for (int i = 1; i <= 5; i++ ) {
        for (int j = 1; j<=i; j++) {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5() {
    cout<<"5."<<endl;
    for (int i = 1; i <= 5; i++ ) {
        for (int j = 5; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    // Striver's Solution:
    // for (int i = 1; i <= 5; i++ ) {
    //     for (int j = 0; j < 5-i+1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
}

void pattern6() {
    cout << "6."<<endl;
    for (int i = 0; i < 5; i++ ) {
        for (int j = 1; j <= 5-i; j++) {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7() {
    cout << "7." << endl;
    for (int i = 0; i<5; i++ ) {
        for (int j = 4; j > i; j--) {
            cout << " ";
        }
        int n = i*2 + 1;
        for (int l = 0; l < n; l++) {
            cout << "*";
        }
        for (int j = 4; j > i; j--) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8() {
    cout << "8." << endl;
    for (int i = 0; i<5; i++ ) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        int n = i*2 + 1;
        for (int l = 9; l >= n; l--) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    // Striver's Solution:
    // for (int i = 0; i < 5; i++) {
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }
    //     int n = i*2 + 1;
    //     for (int j = 0; j < 10 - (2*i + 1); j++) {
    //         cout << "*";
    //     }
    //     for (int j = 0; j < i; j++) {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    
}

void pattern9() {
    cout << "9." << endl;
    // pattern7();
    for (int i = 0; i<5; i++ ) {
        for (int j = 4; j > i; j--) {
            cout << " ";
        }
        int n = i*2 + 1;
        for (int l = 0; l < n; l++) {
            cout << "*";
        }
        for (int j = 4; j > i; j--) {
            cout << " ";
        }
        cout << endl;
    }

    // pattern8();
    for (int i = 0; i<5; i++ ) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        int n = i*2 + 1;
        for (int l = 9; l >= n; l--) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10() {
    cout << "10." <<endl;
    for (int i = 1; i < 6; i++ ) {
        for (int j = 0; j<i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 5; j>i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    // Striver's Solution:
    // for (int i = 1; i <= 9; i++) {
    //     int stars = i;
    //     if (i > 5) stars = 10 - i;
    //     for (int j = 1; j <= stars; j++) {
    //         cout<<"*";
    //     }
    //     cout << endl;
    // }
}

void pattern11() {
    cout<<"11."<<endl;
    int n = 1;
    for (int i = 0; i < 5; i++ ) {
        if (i % 2 == 0) n = 1;
        else n = 0;
        for (int j = 0; j<=i; j++) {
            cout << n;
            n = 1 - n;
        }
        cout << endl;
    }
}

void pattern12() {
    cout << "12." << endl;
    int ws = 6;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = 1; j <= ws; j++) {
            cout << " ";
        }
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl;
        ws -= 2;
    } 
}

void pattern13() {
    cout<<"13."<<endl;
    int n = 0;
    for (int i = 0; i < 5; i++ ) {
        for (int j = 0; j<=i; j++) {
            n++;
            cout << n << " ";
        }
        cout << endl;
    }
}

void pattern14() {
    cout<<"14."<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (char j = 'A'; j <= 'A' + i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

void pattern15() {
    cout<<"15."<<endl;
    for (int i = 5; i >= 0; i--)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}

void pattern16() {
    cout<<"16."<<endl;
    char a = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a << " ";
        }
        a++;
        cout << endl;
    }
    
}

void pattern17() {
    cout << "17." << endl;
    for (int i = 0; i<5; i++ ) {
        for (int j = 4; j > i; j--) {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2*i + 1) / 2;
        for (int j = 1; j <= 2*i+1; j++) {
            cout << ch;
            if (j <= breakpoint) ch++;
            else ch--;
        }
        for (int j = 4; j > i; j--) {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern18() {
    cout << "18." << endl;
    for (int i = 0; i < 5; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern19() {
    cout << "19." << endl;
    int ws = 0;
    for (int i = 0; i<5; i++ ) {
        for (int j = 1; j <= 5-i; j++) {
            cout << "*";
        }
        for (int j = 0; j < ws; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 5-i; j++) {
            cout << "*";
        }
        ws += 2;
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        int n = i*2 + 1;
        for (int l = 9; l > n; l--) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}

void pattern20() {
    cout << "20." << endl;
    int ws = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        int n = i*2 + 1;
        for (int l = 9; l > n; l--) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i<4; i++ ) {
        for (int j = 1; j <= 4-i; j++) {
            cout << "*";
        }
        for (int j = 0; j <= ws+1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 4-i; j++) {
            cout << "*";
        }
        ws += 2;
        cout << endl;
    }
    
    // Striver's Solution:
    // int spaces = 8;
    // for (int i = 1; i <= 9; i++)
    // {
    //     int stars = i;
    //     if (i>5) stars = 10 - i;
    //     for (int j = 1; j <= stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     for (int j = 1; j <= spaces; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= stars; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    //     if (i < 5) spaces -= 2;
    //     else spaces += 2;
    // }
    
}

void pattern21() {
    cout << "21. " << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || j == 0 || i == 3 || j == 3) cout<<"*";
            else cout << " ";
        }
        cout << endl;
        
    }
    
}

void pattern22(){
    cout << "22. " << endl;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 0 || j == 0 || i == 6 || j == 6) cout<<"4 ";
            else if (i == 1 || j == 1 || i == 5 || j == 5) cout<<"3 ";
            else if (i == 2 || j == 2 || i == 4 || j == 4) cout<<"2 ";
            else if (i == j) cout << "1 ";
            else cout << " ";
        }
        cout<<endl;
    }
    
    // Striver's Solution:
    int n = 4;
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n - 1; j++)
        {
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n -2) - i;

            cout << (n - min(min(top, down), min(left, right))) << " ";
        }
        cout << endl;
        
    }
    
}


int main() {
    pattern1();
    cout << endl << endl;
    pattern2();
    cout << endl << endl;
    pattern3();
    cout << endl << endl;
    pattern4(); 
    cout << endl << endl;
    pattern5();
    cout << endl << endl;
    pattern6();
    cout << endl << endl;
    pattern7();
    cout << endl << endl;
    pattern8();
    cout << endl << endl;
    pattern9();
    cout << endl << endl;
    pattern10();
    cout << endl << endl;
    pattern11();
    cout << endl << endl;
    pattern12();
    cout << endl << endl;
    pattern13();
    cout << endl << endl;
    pattern14();
    cout << endl << endl;
    pattern15();
    cout << endl << endl;
    pattern16();
    cout << endl << endl;
    pattern17();
    cout << endl << endl;
    pattern18();
    cout << endl << endl;
    pattern19();
    cout << endl << endl;
    pattern20();
    cout << endl << endl;
    pattern21();
    cout << endl << endl;
    pattern22();

    return 0;
}