#include <iostream>
/* `using namespace std;` is a directive that tells the compiler to use the `std` namespace. The `std`
namespace contains all the standard C++ library functions and objects. By using this directive, you
can directly access the functions and objects in the `std` namespace without having to prefix them
with `std::`. This helps in writing cleaner and more concise code. */
using namespace std;
// int printHello(){ //we have to write function before main function

//     cout<<"Hello Function!\n";
//     return 3;
// }

// int factorial(int n){
//    int fact=1;
//     for(int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }

// bool isPrime(int num){
//     if(num<=1){
//         return false;
//     }
//     for(int i=2; i*i<=num;i++){
//         if(num%i==0){
//             return false;
//         }
//         }
//             return true;
        
//     }

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

    // Ternary Statements(Ternary means three)

    // int n= 17;

    // cout<< (n>=0? "Positive" : "Negative")<<endl;

    // Loops*****
    //  int i=1;
    //  int n=5;
    //  int sum=0;

    // While Loop

    // while(i<=n){
    //     cout<<i;
    //     sum+=i;
    //     i++;
    // }

    // For Loop

    // for(i;i<=n;i++){
    //     cout<<i<<", ";
    //     sum+=i;
    // }

    // Do-While Loop

    // do{
    //     cout<<i;
    //     sum+=i;
    //     i++;
    // }while(i<=n);
    // cout<<"\n"<<sum<<endl;

    // Prime Number Check
    //  bool isPrime;
    //  int n=8;
    //  for(int i=2; i<=n-1; i++){
    //      if(n%i==0){
    //           isPrime=false;
    //          break;
    //      }else{
    //             isPrime=true;
    //      }
    //  }
    //  cout<<(isPrime?"Number is prime":"Number is not prime")<<endl;

    // Nested Loop

 /* The code snippet you provided is using nested loops to create a pattern of asterisks (`*`). Here's
 a breakdown of what the code does: */
    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // { // This loop will generate Line or Enter

    //     for (int ii = 1; ii <= i; ii++) //This loop will generate *
    //     {
    //         cout << "*";
    //     }
    //     cout << endl; // This will move to next line after each line of * is printed
    // }

    // int n=4;
    // int num=1;
    // for(int i=0; i<n; i++){
    //     for(int ii=0; ii<n;ii++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }

    
    // char ch='A';
    // for(int i=0; i<n; i++){
    //     for(int ii=0; ii<n;ii++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

// int n=5;
// char ch='A';

// for(int i=1; i<=n;i++){
        
//     for(int ii=0; ii<i; ii++){
//         cout<<ch;
        
//     }
//     ch++;
//     cout<<endl;
// }



    // int rows;

    // cout << "Enter the number of rows for the pyramid: ";
    // cin >> rows;

    // for (int i = 1; i <= rows; i++) {
    //     // Print spaces for alignment
    //     for (int j = 1; j <= rows - i; j++) {
    //         cout << " ";
    //     }
    //     // Print stars
    //     for (int k = 1; k <= (2 * i - 1); k++) {
    //         cout << "*";
    //     }
    //     // Move to the next line
    //     cout << endl;
    // }

    //Pyramid Pattern

    // int n=5;

    // for(int i = 0; i <n; i++){ //line
    //     for(int ii=0; ii<n-i; ii++){//for spaces
    //         cout<<" ";
    //     }
    //     for(int iii=1 ; iii<=i+1; iii++ ){ //num1
    //         cout<<iii;
    //     }
    //     for(int iv=i ; iv>=1; iv--){ //num2
    //         cout<<iv;
    //     }
    // cout<<endl;
    // }

    //Butterfly Pattern
    // int n=3;

    // for(int i=0; i<n; i++){ //for line
    
    //     for(int j=0;j<=i; j++ ){//first triangle
    //         cout<<"*";
    //     }
    //     for(int k=1; k<(n-i);k++){
    //         cout<<"  "; //double space 
    //     }
    //      for(int j=0;j<=i; j++ ){ //second tiangle part, same as the first one but looks somehat reverse just beacuse of the spaces
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<n; i++){ //for line

    //     for(int j=n;j>i; j-- ){//first triangle
    //         cout<<"*";
    //     }
    //     for(int k=n; k<(n+i);k++){
    //         cout<<"  "; //double space 
    //     }
    //      for(int j=n;j>i; j-- ){ //second tiangle part, same as the first one but looks somehat reverse just beacuse of the spaces
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Functions
    // printHello(); //function call 
    // cout<<printHello()<<"\n";//print the value of function it'll return
//Factorial
//Binominal=nCr
    // int n;
    // cin>>n;
    // int r;
    // cin>>r;
    // int nFact= factorial(8);
    // int rFact= factorial(2);
    // int sub=n-r;
    // int subFact= factorial(sub);
    // cout<<"Binominal is: "<<(nFact/(rFact*subFact))<<endl;

// int n=4;
// if(n>5){
//     cout<<"Number is greater";
//     return 0; //this will terminate the program
// }else{
//     cout<<"Not";
// }
// cout<<"After return 0";

//Digit Print of a number

// int num=145;
// int digitSum=0;
// while(num>0){
//     int digit= num%10;  //this will give digit
//     digitSum+=digit;
//     num/=10;   //this will remove that digit 
// }
// cout<<"Sum of the digit are: "<<digitSum <<endl;
  
    //Print all the prime number
  
//  int n;
//     cout << "Enter a number to print all the prime numbers within its range: ";
//     cin >> n;

//     cout << "Prime numbers are: ";
//     for (int i = 0; i <= n; i++) {
//         if (isPrime(i)) {  // Directly check if the number is prime
//             cout << i << " ";
//         }
//     }
//     cout << endl;
  
  
  
  
  
  
    return 0;

}


