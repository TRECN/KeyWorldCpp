#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file; 
    file.open("text.txt",ios::out);  
    if(!file) {
        cout<<"unable to create";
    }
    else{
        cout<<"New file created";
    file<<"hello world";
    file.close(); 
    }
    return 0;
}