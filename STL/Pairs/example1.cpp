#include<iostream>
#include<utility>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // pair<int, int> p1;
    // p1 = {10,20};
    // pair<int, string> p2(10, "GeeksForGeeks");
    // cout << p1.first << " " << p1.second << "\n";
    // cout << p2.first << " " << p2.second << "\n";
    // 
    /*
    output:
    10 20
    10 GeeksForGeeks
    */

    pair<int, int> p1(1,12), p2(9,12);
    cout << (p1 == p2) << " " << (p1 != p2) << " " << (p1 < p2) << " " << (p1 >p2);

    return 0;
}
