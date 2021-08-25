#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int arr[] = {10,5,20};
    int n = sizeof(arr)/sizeof(int);
    vector<int> v(arr, arr+n);
    for(auto it = v.rbegin(); it != v.rend(); it++)
        cout << (*it) << " ";
    
    return 0;
}
