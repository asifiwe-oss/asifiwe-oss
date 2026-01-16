#include <iostream>
using namespace std;

int main(){
   cout << "Hello I am learning C++ programming!" <<endl;
   cout <<"Hello I want to learn Competitive Programming" <<endl;
   cout << "Hello I have 16 years of age" <<endl;
   cout << 10 <<endl;
   cout << 6*9+4 << endl;

   // Variables in C++

   int age = 16;
   cout << "I am " << age << " years old" <<endl;

   int a = 709;
   int b = 78;
   int Product = a * b;
   int Sum = a + b;
   int Difference = a - b;
   int Quotient = a / b;

   cout << "The sum of a and b is " << Sum << endl;
   cout << "The product of a and b is " << Product << endl;
   cout << "The difference of a and b is " << Difference << endl;
   cout << "The quotient of a and b is " << Quotient << endl;
   cout << "The sum of a and b is " << a + b << endl;

   // Reading input

   int marks;
   cout << "Enter your marks: ";
   cin >> marks;
   cout << "You have " << marks << " marks" <<endl;

   //Reading multiple numbers

   int x,y;
   cout << "Enter two numbers: "<<endl;
   cin >> x >> y;
   cout << "The sum of x and y is "<< x + y << endl;

   int n,m,o;
   cout<<"Enter three numbers: " <<endl;
   cin >> n >> m >> o;
   int sumu = n + m + o;
   int average = sumu/3;
   cout << "The sum of three numbers if "<< sumu
    << "and the average is " << average<<endl;
   return 0;
}