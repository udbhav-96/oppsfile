#include <iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
        Complex(){
            /* Constructor Take No argument */
            cout<<"Constructor with No argument!"<<endl;
        }
        Complex(int a){
            /* Take One argument and initialize real and imag*/
            real = a;
            imag = a;
            cout<<"Constructor with One argument!"<<endl;
        }
        Complex(int a,int b){
            /* Takes Two arguments*/
            real = a;
            imag = b;
            cout<<"Constructor with Two arguments!"<<endl;
        }
        void display(){
            cout<<"("<<real<<" + i"<<imag<<")"<<endl;
        }
        void add(Complex a, Complex b){
            real = a.real+b.real;
            imag = a.imag+b.imag;
        }
};

int main() {
    Complex C1(4,5); 
    Complex C2(3);
    Complex C3;
    cout<<"C1: ";
    C1.display();
    cout<<"C2: ";
    C2.display();
    C3.add(C1,C2);
    cout<<"C3: ";
    C3.display();

    return 0;
}
