#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    //Printing the sorted array in ascending order
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}