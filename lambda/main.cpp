#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
//    int arr[] = {-20,10,-30,5};
//    int n = sizeof(arr)/sizeof(int);
//    sort(arr, arr+n, [](int &a, int &b)->bool {
//        a = abs(a);
//        b = abs(b);
//        return a < b;
//    });
//    for(int x: arr)
//        cout << x <<" ";
//    cout << "\n";
    //another example:

//    vector<int> v{10,20,30};
//    for_each(v.begin(), v.end(), [](int &x){
//       x = x * 2;
//    });
//    for_each(v.begin(), v.end(), [](int x){
//        cout << x << " ";
//    });
    // another example

//    vector<int> v{10,5,3,20,10};
//    int res = count_if(v.begin(), v.end(), [](int x){
//       return x >= 10;
//    });
//    cout << res << "\n";
    // another example
//    vector<int> v{100,20,4,200,1};
//    auto it = find_if(v.begin(), v.end(), [](int x){
//        return x < 10;
//    });
//    cout << *it << "\

    //Capture list in lambda expression
    int x = 5, y = 10;
    auto lambda_expr = [&](int a){
        x = x + a;
        y = y+ a;
    };
    lambda_expr(20);
    cout << x <<" " << y << "\n";
    return 0;
}
