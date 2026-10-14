
#include <iostream>
#include <string>
using std::cout, std::endl, std::string;


bool Test_expression(const string& Expr){

    return true;
}

int main() {

    string Expression = "(A + C) / [D]";
    string Expression2 = "(A + C) / [D + {F }]";
    string Expression3 = "(A + {3*4} - C) / [D - F]";
    string Expression4 = ") A  + C (  - { [ D + F }  ]";

    string valid_or_not;
    if (Test_expression) valid_or_not = "Valid";
    else
        valid_or_not = "Not valid";

    cout << "Expression : " << Expression << " is "
    << valid_or_not << endl;


}
