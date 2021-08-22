#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    static int a;
    int b, c;
    int *ptr = new int[5];
    *(ptr + 2) = 10;
    delete[] ptr;
    ptr = nullptr;
    
    return 0;
}
