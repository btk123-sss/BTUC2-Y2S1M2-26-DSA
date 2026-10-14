
#include <iostream>
#include <string>
using std::cout, std::endl, std::string;


string Test_expression(const string& Expr){

    return  "Valid";
}

int main() {

    string Expression = "(A + C) / [D]";
    string Expression2 = "(A + C) / [D + {F }]";
    string Expression3 = "(A + {3*4} - C) / [D - F]";
    string Expression4 = ") A  + C (  - { [ D + F }  ]";


    cout << "Expression : " << Expression << " is "
    << Test_expression(Expression) << endl;

    cout << "Expression : " << Expression2 << " is "
         << Test_expression(Expression2) << endl;

    cout << "Expression : " << Expression3 << " is "
         << Test_expression(Expression3) << endl;

    cout << "Expression : " << Expression4 << " is "
         << Test_expression(Expression4) << endl;
}

// X = Person();
// Person X = 
// X: Person 

// int 
// string
// float 
// let x = 5;
// x = "Hello";

// let x: number = 5;

// int 1 
// string x11 

// stack   -> STL : standard template library 
// stack<char> s;
// s.push('A');

// stack<int>
// stack<Person> student; 
// student.Add() 

