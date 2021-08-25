#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {10,15,8,20};
    sort(arr, arr+4);
    for(int i = 0;i  < 4; i++)
        cout  << arr[i] << " ";
    cout << "\n";
    if(binary_search(arr, arr+4, 8))
        cout << "Present\n";
    else
        cout << "Not Present\n";
    int* it = lower_bound(arr, arr+4, 8);
    int pos = it - arr;
    cout << *it << " at pos " << pos + 1 << "\n";
    
    return 0;
}
