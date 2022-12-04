// Online C++ compiler to run C++ program online
#include <iostream>
#include <iomanip> // setprecision
using namespace std;

class Student{
    string name;
    string branch;
    int rollNo;
    int age;
    char gen;
    int fiveSubj[5];
    public:
        float prcntg;
        void input(){
            cout<<"Student Name: ";
            cin>>name;
            cout<<"Student Branch: ";
            cin>>branch;
            cout<<"Student Roll No.: ";
            cin>>rollNo;
            cout<<"Student Age: ";
            cin>>age;
            cout<<"Student Gender[M/F]: ";
            cin>>gen;
            cout<<"Student Marks in Five Subject -"<<endl;
            int total = 0;
            for(int i=0; i<5; i++){
                cin>>fiveSubj[i];
                total += fiveSubj[i];
            }
            prcntg = total/5;
        }
        
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Branch: "<<branch<<endl;
            cout<<"Roll No.: "<<rollNo<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender[M/F]: "<<gen<<endl;
            cout<<"Percentage: "<< fixed << setprecision(2) << prcntg<<endl;
        }
        void printNamePerc(){
            cout<<"Name: "<<name<<endl;
            cout<<"Percentage: "<< fixed << setprecision(2) << prcntg<<"%"<<endl;
        }
};

int main() {
    Student arr[10]; // array of Objects;
    int n;
    cout<<"Enter Total No. of Students: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Enter Student "<<i+1<< " details:"<<endl;
        arr[i].input();
        cout<<endl;
    }
    //Display the name & percentage of Student who has more than 70%
    cout<<"\nStudents with 70% plus marks :-"<<endl;
    for(int i=0; i<n; i++){
        if(arr[i].prcntg>70){
            arr[i].printNamePerc();    
        }
    }

    return 0;
}
