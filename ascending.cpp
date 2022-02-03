#include<iostream>
using namespace std;
int main(){

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            
            if(a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
}