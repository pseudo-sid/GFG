#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
   
    int arr[] = {-20,10,-30,5};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr+n, [&](const int a, const int b){
        return abs(a) < abs(b);
    });
    for(int x: arr)
        cout << x << " ";
    cout <<"\n";
    return 0;
}
