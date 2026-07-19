#include<iostream>
using namespace std;
class MyClass{
    int data_;
public:
    MyClass(int val):data_(val){}
    friend void display(MyClass&);
};
void display(MyClass &a){
    cout<<"Value is: "<<a.data_<<"\n";
}
int main(){
	MyClass m1(10);
    display(m1);
}
