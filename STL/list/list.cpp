#include<iostream>
#include<list>
using namespace std;

int main(int argc, char const *argv[])
{
    // /* code */
    // list<int> l;
    // l.push_back(10);
    // l.push_back(20);
    // l.push_front(5);
    // for(auto it = l.begin(); it != l.end(); it++){
    //     cout << (*it) << " ";
    // }
    // cout <<  "\n";
    // list<int> l1 = {10,2,5,20};
    // l1.pop_front();
    // l1.pop_back();
    // for(int x: l1)
    //     cout << x <<" ";
        //Example
    // list<int> l = {10,20,30};
    // auto it =l.begin();
    // it++;
    // it = l.insert(it,15);
    // l.insert(it, 2,7);
    // cout << l.front() << " " << l.back();
    // cout << " " << l.size();
        //Example
    list<int> l = {10,20,30,40,20,40};
    auto it = l.begin();

    it = l.erase(it);
    l.remove(40);
    for(int x: l)
        cout << x << " ";
        
    return 0;
}
