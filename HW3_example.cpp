
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
