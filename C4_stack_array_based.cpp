#include <iostream>
using namespace std;

template <typename E>
class ArrayStack {
    enum { DEF_CAPACITY = 100 }; // default stack capacity
public:
    ArrayStack(int cap = DEF_CAPACITY); // constructor from capacity
    int size() const;                   // number of items in the stack
    bool empty() const;                 // is the stack empty?
    const E &top() const;               // get the top element
    void push(const E &e);              // push element onto stack
    void pop();                         // pop the stack
private:          // member data
    E *S;         // array of stack elements
    int capacity; // stack capacity
    int t;        // index of the top of the stack
};


template <typename E>
ArrayStack<E>::ArrayStack(int cap)
    : S(new E[cap]), capacity(cap), t(-1) {} 

template <typename E>
int ArrayStack<E>::size() const
{ return (t + 1); }

template <typename E>
bool ArrayStack<E>::empty() const
{ return (t < 0); }

// return top of stack
template <typename E> 
const E &ArrayStack<E>::top() const {
    if (empty())
        throw string("Top of empty stack");
    return S[t];
}

template <typename E>
void ArrayStack<E>::push(const E &e) {
    if (size() == capacity)
        throw string("Push to full stack");
    S[++t] = e;
}

template <typename E>
void ArrayStack<E>::pop() {
    if (empty())
        throw string("Pop from empty stack");
    --t;
}

int main(){

    ArrayStack<string> TaskList(10);
    cout << TaskList.empty() << endl;

    TaskList.push("Wake up!");
    TaskList.push("Take shower");
    TaskList.push("Cook breakfast");
    TaskList.push("Do house work!");
    cout << TaskList.size() << endl;
    // try{
    //     TaskList.push("Wake up!");
    //     TaskList.push("Take shower");
    //     TaskList.push("Cook breakfast");
    //     TaskList.push("Do house work!");
    //     TaskList.push("Wake up!");
    //     TaskList.push("Take shower");
    //     TaskList.push("Cook breakfast");
    //     TaskList.push("Do house work!");
    // }
    // catch (const string& s){
    //     cout << s << endl;
    // }

    cout << TaskList.top() << endl;

    while(!TaskList.empty())
    {
        cout << TaskList.top() << endl;
        TaskList.pop();
    }    
}
