#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {10,20,30,40,50};
    vector<int>::iterator i = v.begin();
    // cout << *(i++) << " ";
    // cout << *(i++) << " ";
    // i = v.end();
    // cout << *(--i) << " ";
//next function
    // i = next(i);
    // cout << (*i) <<" ";
    // i = next(i, 2);
    // cout << (*i) << " ";
    // i = prev(i);
    // cout << (*i) << " ";
//advance function
    advance(i, 3);
    cout << (*i) << " ";
    return 0;
}
