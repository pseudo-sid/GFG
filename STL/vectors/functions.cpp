#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> v{10,5,20,15};
        //iteration
    // v.pop_back();
    // for_each(v.begin(), v.end(), [](int x){
    //     cout << x << " ";
    // });
    // cout << "\n";
    // cout << v.front() << " ";
    // cout << v.back() << " ";
    auto it = v.insert(v.begin(), 100);
    for_each(v.begin(), v.end(), [](int x){
        cout << x << " ";
    });
    cout << "\n";
    v.insert(v.begin()+ 2, 200);
    for_each(v.begin(), v.end(), [](int x){
        cout << x << " ";
    });
    cout << "\n";
    v.insert(v.begin(), 2, 300);
    for_each(v.begin(), v.end(), [](int x){
        cout << x << " ";
    });
    cout << "\n";
    vector<int> v2;
    v2.insert(v2.begin(), v.begin(), v.begin() + 3);
    cout << "\n";
    for_each(v2.begin(), v2.end(), [](int x){
        cout << x << " ";
    });
    cout << "\n";
    return 0;
}
