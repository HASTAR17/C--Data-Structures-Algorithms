#include <iostream>
/* `using namespace std;` is a directive that tells the compiler to use the `std` namespace. The `std`
namespace contains all the standard C++ library functions and objects. By using this directive, you
can directly access the functions and objects in the `std` namespace without having to prefix them
with `std::`. This helps in writing cleaner and more concise code. */
using namespace std; 
int main()
{
    // int age = 23;
    // cout << "Hello World!\nAbdullah\n";
    // cout << "Age is: " << sizeof(age);

    // // primitive - data type
    // int a = 4;       // 4 byte
    // char b = 'a';    // 1byte
    // float c = 4.0f;  // 4 byte
    // double d = 8.00; // 8 byte
    // bool e = true;  // 1 byte

    // cout<<"int a = "<<a<<"\nchar b = "<<b<<"\nfloat c = "<<c<<"\ndouble d = "<<d<<"\nbool e = "<<e<<endl;

    // Type Casting
    //      char grade = 'A';

    //     int Grade = grade; // implicit coversion(char to int), that done automatically by compiler
    //     cout << Grade<<endl;

    //     double mark=100.00;
    //     int finalMark = (int)mark;//Explicit type casting that we need to do
    //     cout<<finalMark<<endl;

    // Input in C++

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "Your age is: " << age << endl;

    // Operators

    // double a = 10;
    // int b = 3;

    // cout << "Addition: " << a + b << endl;
    // cout << "Subtraction: " << a - b << endl;
    // cout << "Multiplication: " << a * b << endl;
    // cout << "Division: " << a / b << endl;
    // cout << "Modulus: " << a % b << endl;

    // // Increment and Decrement Operators
    // int x = 10;
    // cout << "x++: " << x++ << endl; // post increment
    // cout << "x: " << x << endl;

    // x = 10;

    // boolean Operators
    //  cout << "++x: " << ++x << endl; // pre increment
    //  cout << (3<5)<<endl; //true->1
    //  cout << (3>5)<<endl; //false->0
    //  cout << (3<=3)<<endl; //true->1
    //  cout << (3!=5)<<endl; //true->1

    // Logical operators OR, AND,

    // Sum of two numbers

    // int a, b;

    // cout<< "Enter two numbers: ";
    // cin>>a>>b;
    // cout<<"Value is: "<<(a+b)<<"\n";

    // Unary operator

    // int x = 5;
    // cout << "x++: " << x++ << endl; // post increment
    // cout << "x: " << x << endl;

    // x = 5;
    // cout << "++x: " << ++x << endl; // pre increment
    // cout << "x: " << x << endl;

    // x = 5;
    // cout << "x--: " << x-- << endl; // post decrement

    // x = 5;
    // cout << "--x: " << --x << endl; // pre decrement
    // cout << "x: " << x << endl;

    // Conditional Statements

    // int age = 18;

    // if (age >= 18)
    // {
    //     cout << "You are eligible to vote.\n";
    // }
    // else
    // {
    //     cout << "You are not eligible to vote.\n";
    // }

    // int num;
    // cout << "Enter a number to check if it's even or odd: ";
    // cin >> num;
    // if (num % 2 == 0)
    // {
    //     cout << "The number " << num << " is even\n";
    // }
    // else
    // {
    //     cout << "The number " << num << " is odd\n";
    // }

// char in;
// cout<<"Enter a character: ";
// cin>>in;

/* The condition `if(in>='a' && in<='z')` is checking if the character inputted by the user is a
lowercase letter. It checks if the character `in` is greater than or equal to 'a' and less than or
equal to 'z'. If this condition is true, it means that the character is a lowercase letter, and the
program will output "Lowercase". Otherwise, it will output "Uppercase". */
// if(in>='a' && in<='z'){
//     cout<<"Lowercase\n";

// }else{
//     cout<<"Uppercase";
// }



    return 0;
}
