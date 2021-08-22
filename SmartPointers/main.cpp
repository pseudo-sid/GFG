#include <iostream>
using namespace std;

void fun(){
    int *ptr = new int[10];
}
class SP{
    int* ptr;
public:
    SP(int* p = nullptr){
        cout << "Constructor called\n";
        ptr = p;
    }
    ~SP(){
        delete ptr;
        cout << "\nDestructor called\n";
    }
    //&
    int &operator *(){
        return *ptr;
    }
    int *operator->(){
        return ptr;
    }
};


int main() {
//    while(true)
//        fun(); //memory leak problem
    cout << "Main begins\n";
    {
        SP sp(new int());
        *sp = 20;
        cout << *sp;
    }
    cout << "Main ends\n";
    return 0;
}
