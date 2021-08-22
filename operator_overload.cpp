#include<iostream>
using namespace std;

class Complex{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0): real(r), imag(i){}
    Complex operator + (Complex const &obj){
        Complex ret;
        ret.real = real + obj.real;
        ret.imag = imag + obj.imag;
        return ret;
    }
    void print(){
        cout << real << " + i" << imag << "\n";
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Complex c1(10,5), c2(2,4);
    Complex c3 = c1+c2;
    c3.print();
    
    return 0;
}
