#include<bits/stdc++.h>
using namespace std;
int main(){

        int f = sizeof(a) / sizeof(a[0]);
        sort(a, a + f, greater<int>());
        for(int i=0;i<n;i++){
            if(a[i]>=a[k])
                c++;
        }
        cout<<c<<endl;
        
    }
    return 0;
}