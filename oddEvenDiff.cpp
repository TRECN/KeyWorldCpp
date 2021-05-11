#include<iostream>
#include<cstdlib>
using namespace std;
int oddEven(int a){
    if(a%2==0)
        return -1;
    return 1;
}
int main(){
    int t,n,count=0;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        for(int i=0;i<n;i++){
            count+=oddEven(a[i]);
        }
        cout<<abs(count)<<endl;
        count =0;
    }

}