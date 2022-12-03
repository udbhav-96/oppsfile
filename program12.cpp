#include <iostream>
using namespace std;

class basic_info{
    string name;
    int rollNo;
    char gen;
    public:
        void getData1(){
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Roll No.: ";
            cin>>rollNo;
            cout<<"Enter Gen(M/F): ";
            cin>>gen;
        }
    
        void display1(){
        cout<<"\nFrom basic_info class: "<<endl;
        cout<<"Name: \t\t"<<name<<endl;
        cout<<"Roll No: \t"<<rollNo<<endl;
        cout<<"Gender: \t"<<gen<<endl;
        }
};

class physical_fit: public basic_info{
    int height;
    int weight;
    public:
        void getData2(){
        cout<<"Enter Height (cm): ";
        cin>>height;
        cout<<"Enter (kg): ";
        cin>>weight;
        }

        void display2(){
            cout<<"From physical_fit class: "<<endl;
            cout<<"Height: \t"<<height<<endl;
            cout<<"Weight: \t"<<weight<<endl;
        }
};

int main(){
    physical_fit stu1;
    stu1.getData1();
    stu1.getData2(); 
    stu1.display1();
    stu1.display2();
    
    return 0;
}
