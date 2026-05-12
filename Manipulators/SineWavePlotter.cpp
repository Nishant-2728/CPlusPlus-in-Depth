#include <bits/stdc++.h>
using namespace std;
int main() {
    double a,b,s;
    char c;
    cout<<"Enter the starting angle in degrees: ";
    cin>>a;
    cout<<"Enter the ending angle in degrees: ";
    cin>>b;
    cout<<"Enter the step length: ";
    cin>>s;
    cout<<"Enter the fill character: ";
    cin>>c;
    for(double i=a;i<=b;i+=s){
        int x=floor(sin(i*3.14/180)*50);
        if(x>=0){
            cout<<setw(55)<<setfill(' ')<<'!'<<setw(x)<<setfill(c)<<'+'<<endl;
        }
        else{
            x=abs(x);
            cout<<setw(55-x)<<setfill(' ')<<'+'<<setw(x)<<setfill(c)<<'|'<<endl;
        }
    }
}
