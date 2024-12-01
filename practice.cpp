#include <iostream>
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
    char grade = 'A';

    int Grade = grade; // implicit coversion(char to int), that done automatically by compiler
    cout << Grade;

    return 0;
}
