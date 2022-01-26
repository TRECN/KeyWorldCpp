#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int getSum(int a[],int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        return sum;
    }
};

        fir(int i=0;i<n;i++) cin>>a[i];
        Solution ob;
        cout<<ob.getSum(a,n)<<endl;
    }
    return 0;
}