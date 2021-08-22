#include <iostream>
#include <memory>
using namespace std;

class Test{
    int x;
public:
    explicit Test(int a = 0): x(a){
        cout << "Constructor\n";
    }
    ~Test(){
        cout << "Destructor\n";
    }
    void fun(){
        cout << x << "\n";
    }
};

int main() {
    cout << "Main begins\n";
    {
        //unique_ptr<Test> ptr = make_unique<Test>(10);
        unique_ptr<Test> ptr(new Test(10));
        ptr->fun();
        unique_ptr<Test> ptr2 = move(ptr);
    }
    {
        shared_ptr<Test> ptr1(new Test(10));
        shared_ptr<Test> ptr2 = ptr1;
        cout << ptr1.use_count() << "\n";
        shared_ptr<Test> ptr3 = ptr1;
        cout << ptr2.use_count() << "\n";
    }
    cout << "Main ends\n";
    return 0;
}
