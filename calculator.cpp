/**
 * \file       calculator.cpp
 * \author     Jennifer Reynaga
 * \brief      Implementation for a calculator using OOP
 */

#include <iostream>
using namespace std;


class MyCalculator {   /* The class*/
 /* Atributes*/
 private:
    /* Private attribute */ 
    int num1;        
    int num2;
 public: /*Access specifier */ 
    /* Constructor with parameters */
    MyCalculator(int myNum1,int myNum2)
    {
        num1 = myNum1;
        num2 = myNum2;
    }

    /* Methods */
    void mySum();   // Method/function declaration
    void myRest();   // Method/function declaration
    void myMultiply();   // Method/function declaration
    void myDivide();   // Method/function declaration
};

// Method/function definition outside the class

void MyCalculator::mySum()
{
    cout << "Sum: " << num1 + num2 << endl;
}

void MyCalculator::myRest()
{
    cout << "Subtraction: " << num1 - num2 << endl;
}

void MyCalculator::myMultiply()
{
    cout << "Multiplication: " << num1 * num2 << endl;
}

void MyCalculator:: myDivide()
{
    if (num2 != 0)
        cout << "Division: " << num1 / num2 << endl;
    else
        cout << "Error: Cannot divide by zero." << endl;
}


int main() {
    cout << "Welcome to the OOP Calculator!" << endl;

    MyCalculator calc(10, 5); // You can change the values here

    calc.mySum();
    calc.myRest();
    calc.myMultiply();
    calc.myDivide();
  return 0;
}