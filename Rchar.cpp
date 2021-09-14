#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1,ch,ch1;
    int con=0;
    cout<<"enter a string: ";
    cin>>s;
    cout<<"enter the character to replace: ";
    cin>>ch;
    cout<<"enter the charcter to replace it with: ";
    cin>>ch1;
    for(int i=0;i<s.length();i++)
    {
        string a=s.substr(i,1);
        if(a==ch){
            s1=s1+ch1;
            cout<<"index of '"<<ch<<"' : "<<i+1<<endl;
            con=1;
        }
        else
            s1+=a;
        
    }
    if(con==0){
        cout<<"the character '"<< ch <<"' does not exist in ";
    }
    cout<<s1<<endl;

}