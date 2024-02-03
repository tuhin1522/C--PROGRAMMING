#include<bits/stdc++.h>
using namespace std;
class Matrix{
    public: 
    int row;
    int col;
    int mat[10][10];
    void getMatrix();
    void showMatrix();
    bool Multiply(Matrix a, Matrix b);
};
void Matrix::getMatrix(){
    cout<<"Enter the row number: ";
    cin>>row;
    cout<<"Enter the column number: ";
    cin>>col;
    if(row<=0 || col<=0) {
        cout<<"Invalid Input\n";
        getMatrix();
        return;
    }else{
        cout<<"Enter the matrix: ";
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cin>>mat[i][j];
            }
        }
    }
}
void Matrix::showMatrix(){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool Matrix::Multiply(Matrix m1, Matrix m2){
    if(m1.col!=m2.row){
        cout<<"The matrices are not compatible\n";
        return false;
    }else{
        row=m1.row;
        col=m2.col;
        for(int i=0; i<m1.row; i++){
            for(int j=0; j<m2.col; j++){
                int sum=0;
                for(int k=0; k<m1.col; k++)
                {
                    sum= sum + (m1.mat[i][k] * m2.mat[k][j]);
                }
                mat[i][j]=sum;
            }
        }
        return true;
    }
}
int main()
{
    Matrix m1;
    Matrix m2;
    cout<<"First Matrix\n";
    m1.getMatrix();
    cout<<"The first matrix is: \n";
    m1.showMatrix();
    cout<<"Second Matrix\n";
    m2.getMatrix();
    cout<<"The second matrix is: \n";
    m2.showMatrix();
    Matrix res;
    bool x=res.Multiply(m1,m2);
    if(x==true)
    {
        cout<<"The output is: \n";
        res.showMatrix();
    }
}