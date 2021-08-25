#include<iostream>
#include<forward_list>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    forward_list<int> l = {10,15,20};
    l.push_front(5);
    l.push_front(3);
    l.pop_front();
    for(int x : l)
        cout << x << " ";
    cout <<"\n";
    l.clear();
    l.assign({10,20,30,10});
    forward_list<int> l2;
    l2.assign(l2.begin(), l2.end());
    for(auto it = l.begin(); it != l.end(); it++)
        cout << (*it) <<" ";
    cout <<"\n";
    forward_list<int> l3;
    l3.assign(5, 10);
    for(auto it = l3.begin(); it != l.end(); it++)
        cout << (*it) <<" ";
    cout << "\n";
    forward_list<int> l4 = {15,20,30};
    auto it = l4.insert_after(l4.begin(), 10);
    it = l4.insert_after(it, {2,3,5});
    it = l4.erase_after(it);
    for(int x: l4)
        cout << x << " ";
    cout << "\n";
    return 0;
}
