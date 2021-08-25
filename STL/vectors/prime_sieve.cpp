#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    bool arr[(int)1e5+5];
    memset(arr, true, sizeof(arr));
    arr[0] = false;
    arr[1] = false;
    for(int i = 2; i <= 1e5+1; i++){
        if(arr[i] == true){
            for(int j = 2*i; j <= 1e5; j += i)
                arr[j] = false;
        }
    }
    return 0;
}
