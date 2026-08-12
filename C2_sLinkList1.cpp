#include <iostream>
using namespace std;


class StringNode
{               // A node in a list of strings
private:
    string elem;                   // element value
    StringNode *next;              // next item in the list
    friend class StringLinkedList; // provide StringLinkedList access
};

class StringLinkedList
{               // A linked list of strings
public:
    StringLinkedList();             // empty list constructor
    ~StringLinkedList();             // destructor
    bool empty() const;             // is list empty?
    const string &front() const;    // get front element
    void addFront(const string &e); // add to front of list
    void removeFront();             // remove front item list
    void print() const;             // print all list elements
private:
    StringNode *head; // pointer to the head of list
};


// constructor
StringLinkedList::StringLinkedList() 
    : head(NULL) {}

// destructor
StringLinkedList::~StringLinkedList() 
    { while (!empty()) removeFront(); }

// is list empty?
bool StringLinkedList::empty() const 
    { return head == NULL; }

// get front element
const string &StringLinkedList::front() const 
    { return head->elem; }

// add to front of list
void StringLinkedList::addFront(const string &e){
    StringNode *v = new StringNode;   // create new node
    v->elem = e;                     // store data
    v->next = head;                  // head now follows v
    head = v;                         // v is now the head
}

// remove front item
void StringLinkedList::removeFront(){    
    StringNode *old = head; // save current head
    head = old->next;     // skip over old head
    delete old;             // delete the old head
}

int main(){
    StringLinkedList My_travel;

    My_travel.addFront("Texas");
    My_travel.addFront("New york");
    My_travel.addFront("Singapor");
    My_travel.addFront("HCMC");

    My_travel.print();
    cout << endl;
    
    My_travel.removeFront();

    My_travel.print();

    return 0;
}





void StringLinkedList::print() const {
    StringNode *curr = head;
    while (curr != NULL) {
        cout << curr->elem << " --> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}


// //=======================================================================
// // Generic type singly linked list 

// template <typename E>
// class SNode { // singly linked list node
// private:
//     E elem;                      // linked list element value
//     SNode<E> *next;              // next item in the list
//     friend class SLinkedList<E>; // provide SLinkedList access
// };

// template <typename E>
// class SLinkedList { // a singly linked list
// public:
//     SLinkedList();             // empty list constructor
//     ~SLinkedList();            // destructor
//     bool empty() const;        // is list empty?
//     const E &front() const;    // return front element
//     void addFront(const E &e); // add to front of list
//     void removeFront();        // remove front item list
// private:
//     SNode<E> *head; // head of the list
// };

// template <typename E>
// SLinkedList<E>::SLinkedList() // constructor
//     : head(NULL){}

// template <typename E>
// bool SLinkedList<E>::empty() const // is list empty?
//     { return head == NULL; }

// template <typename E>
// const E &SLinkedList<E>::front() const // return front element
//     { return head->elem;}

// template <typename E>
// SLinkedList<E>::SLinkedList() // destructor
//     { while (!empty()) removeFront(); }

// template <typename E>
// void SLinkedList<E>::addFront(const E &e) { // add to front of list                              
//     SNode<E> *v = new SNode<E>; // create new node
//     v->elem = e;                // store data
//     v->next = head;            // head now follows v
//     head = v;                   // v is now the head
// }

// template <typename E>
// void SLinkedList<E>::removeFront(){ // remove front item                         
//     SNode<E> *old = head; // save current head
//     head = old->next;    // skip over old head
//     delete old;           // delete the old head
// }
