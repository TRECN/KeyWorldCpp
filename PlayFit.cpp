#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        int max=INT_MIN;
        for(int i=0,j=1;i<n-1;i++,j++){
            if(max<a[j]-a[i])
                max=a[j]-a[i];
        }
        if(max>0)
            cout<<max<<endl;
        else
            cout<<"UNFIT"<<endl;
    }
    return 0;

}