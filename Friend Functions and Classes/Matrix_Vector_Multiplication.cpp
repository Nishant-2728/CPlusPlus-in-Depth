#include<iostream>
using namespace std;
class Matrix;
class Vector{
    int e_[3];
    int n_;
public:
    Vector(int n):n_(n){
        for(int j=0;j<n_;j++){
            e_[j]=j+1;
        }
    }
    void Clear(){
        for(int j=0;j<n_;j++){
            e_[j]=0;
        }
    }
    void Show(){
        for(int j=0;j<n_;j++){
            cout<<e_[j]<<" ";
        }
        cout<<"\n\n";
    }
    friend Vector Prod(Vector&, Matrix&);
};
class Matrix{
    int e_[3][3];
    int n_,m_;
public:
    Matrix(int n,int m):n_(n),m_(m){
        for(int j=0;j<n_;j++){
            for(int k=0;k<m_;k++){
                e_[j][k]=j+k;
            }
        }
    }
    void Show(){
        for(int j=0;j<n_;j++){
            for(int k=0;k<m_;k++){
                cout<<e_[j][k]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
    friend Vector Prod(Vector&, Matrix&);
};
Vector Prod(Vector &vec, Matrix &mat){
    Vector res(mat.n_);
    res.Clear();
    for(int j=0;j<mat.n_;j++){
        for(int k=0;k<mat.m_;k++){
            res.e_[j]+=mat.e_[j][k]*vec.e_[k];
        }
    }
    return res;
}
int main(){
    Matrix m(2,3);
    Vector v(3);
    Vector ans=Prod(v,m);
    m.Show();
    v.Show();
    ans.Show();
}
