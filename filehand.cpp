#include<bits/stdc++.h>
using namespace std;
int main(){
    fstream file; 
    file.open("text.txt",ios::out);  
    if(!file) {
        cout<<"unable to create";
    }
    else{
        cout<<"New file created"<<endl;
    file<<"hello";
    file.close(); 
    }

    file.open("text.txt",ios::in);
    if(!file){
        cout<<"no file present";
    }
    else{
        char ch[50];
        while(!file.eof()){
            file>>ch;
            cout<<ch;
        }
        file.close();
        
    }
    return 0;
}