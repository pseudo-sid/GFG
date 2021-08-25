#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<typename T, int limit>
T arrMax(T arr[], int n){
    if(n > limit)
        return INT_MIN;
    T res = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > res)
            res = arr[i];
        return res;
}
template<typename U, typename V>
struct Pair{
    U x; V y;
    Pair(U i, V j){
        x = i;
        y = j;
    }
    U getFirst(){return x;}
    V getSecond(){return y;}
};

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {10,40,3};
    cout << arrMax<int, 30>(arr, 3) << "\n";
    
    return 0;
}
