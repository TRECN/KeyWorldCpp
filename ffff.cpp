#include<iostream>
using namespace std;

int main()
{
	int  n,s,t,i,m,k,lbA,ubB,d,j,c[7],lbB,ubA;
	int a[5],b[6];
	cout<<"enter the size:"<<endl;
	cin>>n;
	cout<<"enter the elements of array1:"<<endl;
	cin>>s;
	cout<<"enter the elements of array2:"<<endl;
	cin>>t;

	i=lbA;
	k=lbB;
	for(i=0;i<s;i++)
	while(i<=ubA){
       c[k]=a[i];
	   k=k+1;
	   i=i+1;
	}
	  
	
	cout<<"after concatenation:"<<endl;
	for(i=0;i<=s;i++)
	{
       cout<<"a[i]=s"<<endl;
    }
    for( j=0;j<=t;j++)
    {
    	cout<<"a[j]=s"<<endl;
    }
    return 0;
}