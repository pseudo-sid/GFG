#include<iostream>
#include<deque>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    deque<int> dq = {10,20,30};
    dq.push_front(5);
    dq.push_back(50);
    for(int x: dq)
        cout << x << " ";
    cout << "\n";
    cout << dq.front() << " " << dq.back() << "\n";
    return 0;
}
