# include<iostream> 

using namespace std;
 
    int fact( int n)	 
    {
        
        return n*fact(n-1);
 	}
     
int main(){
 	int n,f;
 	cout<<"Enter the number " ;
 	cin>>n;
 	f=fact(n);
 	cout<<f;
    return 0;
 }