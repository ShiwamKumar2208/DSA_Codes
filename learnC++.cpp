// 4.
#include<bits/stdc++.h> // this is a header file that includes all the standard library headers in C++. It is a convenient way to include all the necessary headers in one line. However, it is not recommended to use this header file in production code as it can increase the compilation time and may include unnecessary headers.
// #include<iostream>
// 2.
using namespace std;

// 9.
// void printName(string name) {
//     cout << "Hey " << name << "!!";
// }
unsigned short int add(int x, int y) {
    return x + y;
    // return is important if no return statement is there then the function will return garbage value and it may cause undefined behavior in the program. so it is always recommended to use return statement in a function that has a return type other than void.
}

unsigned short int addOriginal(int &x, int &y) {
    x = x + y;
    return x;
    // return is important if no return statement is there then the function will return garbage value and it may cause undefined behavior in the program. so it is always recommended to use return statement in a function that has a return type other than void.
}

int main() {
    // 1.
    // std::cout << "Hello, World!" << std::endl;;
    // //  coountless number of string or couts in one single line is possible in C++
    // std::cout << "Hello, World!" << std::endl << "Hello, World!@" << std::endl;
    // std::cout << "Hello, World!";

    // 2.
    // cout << "Hello, World!" << endl;
    // now the progrom will always use std to run the functions and we can write less code and it will be more readable
    // after using namespace std; we can write cout instead of std::cout and endl instead of std::endl

    // 3.
    // int x, y;
    // cin >> x >> y; // this is how we take input from the user in C++
    // cout << "You entered: " << x << " And " << y << " WoW!" << endl; // this is how we print the output in C++

    // 4.
    // Data Types in C++  :--
    // int a = 10; // 4 bytes -2147483648 to 2147483647
    // short: 2 bytes -32768 to 32767
    // unsigned int: 4 bytes 0 to 4294967295
    // // types of long: 
    // // unsigned short: 2 bytes 0 to 65535
    // // long int: 4 bytes -2147483648 to 2147483647
    // // unsigned long int: 4 bytes 0 to 4294967295
    // // long long: 8 bytes -9223372036854775808 to 9223372036854775807
    // float b = 3.14; // 4 bytes 1.2E-38 to 3.4E+38
    // double c = 3.141592653589793; // 8 bytes 2.3E-308 to 1.7E+308
    // long double d = 3.1415926535897932384626433832795; // 16 bytes 3.4E-4932 to 1.1E+4932
    // char d = 'A'; // ''
    // bool e = true; // boolean data type
    // string f = "Hello, World!"; // string data type
    // implementation of string:
    // a
    // string s1, s2; // ""
    // cin >> s1 >> s2;
    // cout<< s1 << " - " << s2 << endl;
    // b
    // string str;
    // getline(cin, str); // this is how we take input of a string with spaces in C++
    // cout << "You entered: " << str << endl;

    // 5. 
    // if else
    // a
    // unsigned short int age;
    // cin >> age;
    // if (age < 18) {
    //     cout << "You are a minor." << endl;
    // } else if (age >= 18 && age < 60) {
    //     cout << "You are an adult." << endl;
    // } else {
    //     cout << "You are a senior citizen." << endl;
    // }
    // b
    // unsigned short int marks;
    // cin >> marks;
    // if (marks <= 29) {
    //     cout << "F";
    // } else if (marks <= 49) {
    //     cout << "D";
    // } else if (marks < 59) {
    //     cout << "C";
    // } else if (marks < 79) {
    //     cout << "B";
    // } else if (marks <= 100) {
    //     cout << "A";
    // } 
    // else {
    //     cout << "Invalid marks entered. "<< marks << endl;
    // }

    // 6.
    // int day;
    // cin >> day;
    // switch (day) {
    //     case 1:
    //         cout << "Monday" << endl;
    //         // if break is not there then it will execute all the cases after the case 1 and it will print all the days of the week after Monday
    //         // break is used to exit any conditional statement or loop and it is used to prevent the execution of the next cases in a switch statement
    //         break;
    //     case 2:
    //         cout << "Tuesday" << endl;
    //         break;
    //     case 3:
    //         cout << "Wednesday" << endl;
    //         break;
    //     case 4:
    //         cout << "Thursday" << endl;
    //         break;
    //     case 5:
    //         cout << "Friday" << endl;
    //         break;
    //     case 6:
    //         cout << "Saturday" << endl;
    //         break;
    //     case 7:
    //         cout << "Sunday" << endl;
    //         break;
    //     default:
    //         cout << "Invalid day entered. " << day << endl;
    //     cout << "Please enter a number between 1 and 7." << endl;
    // }

    // 7.
    // 1d array
    // unsigned short int arr[5]; // this is how we declare an array in C++
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; // this is how we take input of an array in C++
    // cout << "You entered: " << arr[2] << " for index 2" << endl; // this is how we print the output of an array in C++  
    // // the 0th index is stored in a very random place of cpu but the 1st or the succeeded indexes are stored ri8 next to it, like the 2nd index is stored next to the 1st index and so on. so if we want to access the 3rd index then we have to go to the 0th index and then move 3 times to the right to access the 3rd index.
    // one more thing is  
    // char s[5];
    // s[0] = 'H';
    // s[1] = 'e';
    // s[2] = 'l';
    // s[3] = 'l';
    // s[4] = 'o';

    // string str = "Hello";
    // // here both are two ways to make a string in C++. the first one is a character array and the second one is a string object. the string object is more convenient to use as it has many built-in functions that we can use to manipulate the string. the character array is a low-level way to represent a string and it is not recommended to use it in modern C++ programming.
    // 
    // 2d array
    // unsigned short int arr[2][3]; // this is how we declare a

    // 8.
    // for loop
    // for (int i = 0; i < 5; i++) {
    //     cout << i << " ";
    // }
    // // cout << i <<endl; // in was declared inside the for loop so it is not accessible outside the for loop and it will give an error if we try to access it outside the for loop. this is called scope of a variable. the scope of a variable is the region of the program where the variable is accessible. in this case, the scope of the variable i is limited to the for loop and it cannot be accessed outside the for loop.
    // int i = 0;
    // for (i; i <= 5; i++) {
    //     cout << i << endl;
    // }
    // cout << i; // here the variable i is declared outside the for loop so it is accessible outside the for loop and it will print 6 after the for loop as the value of i will be 6 after the for loop as it will be incremented one more time after the last iteration of the for loop.
    // while loop
    // int i = 1;
    // while (i <= 5) {
    //     cout << i << endl;
    //     i++;
    // }
    // cout << i;
    // do while loop
    // int i = 2;
    // do {
    //     cout << i << endl;
    //     i++;
    // } while (i <= 1);
    // cout << i;

    // 9.
    // a
    // string name;
    // cin >> name;
    // printName(name);
    // unsigned short int x, y;
    // cin >> x >> y;
    // cout << add(x, y);
    // b (pass by value)
    // int i = 10;
    // cout << i << endl;
    // cout << add(i, 20) << endl; 
    // cout << i << endl; // here the value of i will still be 10 as we are not storing the return value of the add function in any variable and it will not have any
    // c (pass by reference)
    // int i = 10;
    // int j = 20;
    // cout << i << endl;
    // cout << addOriginal(i, j) << endl;
    // cout << i << endl;
    // // IMP: arrays are always passed by reference in C++ as they are stored in contiguous memory locations and we can access them using pointers. so if we pass an array to a function then we are actually passing the address of the first element of the array and we can access the elements of the array using pointer arithmetic. so if we want to modify the elements of the array inside the function then we can do that by using pointers.
    return 0; 
}