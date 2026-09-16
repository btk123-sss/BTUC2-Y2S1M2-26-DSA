#include <iostream>
#include <stack>

using std::stack, std::string, std::cout;

int main(){

    stack<int> NumStack;
    NumStack.push(11);
    NumStack.push(22);
    NumStack.push(33);
    NumStack.push(44);
    NumStack.pop();
    cout << NumStack.empty() << std::endl;
    cout << "Size: " << NumStack.size() << std::endl;

    while (!NumStack.empty()){
        cout << NumStack.top() << "\n";
        NumStack.pop();
    }

    stack<string> Registered_Name;
    Registered_Name.push("Jana");
    Registered_Name.push("Tan");
    Registered_Name.push("Kin");
    Registered_Name.push("Yin");
    while (!Registered_Name.empty())
    {
        cout << Registered_Name.top() << "\n";
        Registered_Name.pop();
    }
    cout << Registered_Name.empty() << std::endl;
}