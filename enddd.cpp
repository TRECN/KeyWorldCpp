#include<iostream>
 using namespace std;
 
  int main ()
  {
    int N,ub, data;
    
   int a[5];
  
  cout<<"Enter the elments:"<<endl;
  cin>>ub;
  ub=ub-1;
  if(ub==N)
  cout<<"over flow! ";
  else{
    for(int i=0;i<=ub;i++) {
        cin>>a[i];
      }
   cout<<"Enter the data to insert";
   cin>>data;
   ub=ub+1;
   a[ub]=data;
   }
  cout<<"array after insertion:";
  for(int i=0;i<=ub;i++){
      cout<<a[i]<<endl;
      
      }
      return 0;
      }