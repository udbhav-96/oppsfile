#include <iostream>
using namespace std;

class Matrix{
    int row;
    int col;
    int arr[50][50]; 
    public:
        void input(){
            /* 
               take matrix input from the user. 
               Constraints ->   1<=row,col<=50;
            */
            cout<<"\nEnter Row size of Matrix: ";
            cin>>row;
            cout<<"Enter Column size of Matrix: ";
            cin>>col;
            if(row<1 || col<1 ){
                cout<<"Matrix can not be empty!!"<<endl;
            }
            if(row>=50 || col>50){
                cout<<"Matrix size is out of Range"<<endl;
            }
            else{
                cout<<"Enter the total "<<row*col<< " Values of the matrix :-"<<endl;
                for(int i=0; i<row; i++){
                    for(int j=0; j<col; j++){
                        cin>>arr[i][j];
                    }
                }    
            }
            
        }
        void display(){
            /* function print the Matrix */
            cout<<"\n--Matrix --"<<endl;
            for(int i=0; i<row; i++){
                for(int j=0; j<col; j++){
                    cout<<arr[i][j]<<" ";
                }cout<<endl;
            }
        }
        
        void mul(Matrix a, Matrix b){
            /* 
               mul function take 2 matrix as an input
               It multiplies matrix as AxB
               If columns of A are not equal to rows of B multiplication can not be done.
            */
            if(a.col != b.row){
                cout<<"Multiplication Can not be done."<<endl;
            }
            else{
                row = a.row;
                col = b.col;
                for(int i=0; i<a.row; i++){
                    for(int j=0; j<b.col; j++){
                        arr[i][j]=0;
                        for(int k=0; k<a.row; k++){
                            arr[i][j]+= (a.arr[i][k]*b.arr[k][j]);
                        }
                    }
                }    
            }
        }
};

int main() {
    Matrix M1,M2,M3;
    M1.input();
    M1.display();
    M2.input();
    M2.display();
    M3.mul(M1,M2);
    M3.display();

    return 0;
}
