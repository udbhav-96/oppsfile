#include<iostream>
using namespace std;

class First;// forward declaration

class Second{
    int b;
    public:
        Second(int x){ //Constructor
            b=x;
        }
    friend void max(First,Second);
};

class First{
    int a;
    public:
        First(int x){ //Constructor
            a=x;
        }   
    friend void max(First,Second);
};

void max(First t1,Second t2){
    if(t1.a>t2.b)
        cout<<t1.a<<endl;
    else
        cout<<t2.b<<endl;
}

int main(){
    int m,n;
    cout<<"Enter Value (m): ";
    cin>>m;
    cout<<"Enter Value (n): ";
    cin>>n;
    
    First objF(m);
    Second objS(n);
    cout<<"Maximum value: ";
    max(objF,objS); //callin friend function
    
    return 0;
}
