#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int x,y;
    // cin >> x >> y;
    // try{
    //     if(y == 0)
    //         throw 0;
    //     cout << "Result is "<< x/y;
    // }
    // catch(int x){
    //     cout << "Division by zero is not allowed\n";
    // }
    double x, y;
    cin >> x >> y;
    try{
        if(x == 0.0)
            throw 0;
        if(y == 0.0)
            throw string("Y is zero");
        if(x + y < 0.0)
            throw (x+y);
    }
    catch(int e1){
        cout << e1;
    }
    catch(string e2){
        cout << e2;
    }
    catch(...){
        cout << "x and y are less than zero";
    }
    cout << "\nBye \n";
    return 0;
}
