#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            sum=sum+1;
            cout<<sum<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
