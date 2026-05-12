#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<setw(n+1-i)<<setfill(' ')<<'*'<<setw(2*i-1)<<setfill('*')<<"\n";
    }
}
/*Output: For n=3*/
//    *
//   ***
//  *****
