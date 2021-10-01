#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,mid,i;
    bool c=false;
	
	 cout<<"enter the size:"<<endl;
	 cin>>n;
	int beg=0,end=n-1;
	 int a[n];
	cout<<"enter the elements:"<<endl;
	 for(i=0;i<n;i++)
	cin>>a[i];
    cout<<"enter the value of x"<<endl;
    cin>>x;
	while(beg<=end)
	{
	    mid=(beg+end)/2;
	    if (a[mid]==x)
	    { 
            c=true;
            break;
        }
	    else if (x>a[mid])
	        beg=mid+1;
	    else
	        end=mid-1;
	}
	if(c==true)
	    cout<<mid<<endl;
	else
	    cout<<"element not found"<<endl;
	return 0;
}