// Aritmetics Program 
#include <iostream>
using namespace std;

int main() 
{
  int a, b;
  int sum;
  cout << "Enter a number: ";
  cin >> a;
  cout << "Enter another number:";
  cin >> b;
  int addition = a + b;
  int substraction = a - b;
  float multiplication = a * b; 
  float division = a / b; 
  float modulo = a % b;
  
  cout << "\nAddition is: " << addition << endl;
  cout << "Substractiion is: " << substraction << endl;
  cout << "Multiplication is: " << multiplication << endl;
  cout << "Division: " << division << endl;
  cout << "Modulo: " << modulo << endl;
  return 0;
}
