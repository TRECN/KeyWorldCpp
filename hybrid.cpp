

class Account1:public Bank{
    public:
        Account1(){
            name="ABC";
            no=123;
            cout<<no<<" "<<name<<endl;
            
        }

};

class Account2:public Bank{
    public:
        Account2(){
            name="CDE";
            no=345;
            cout<<no<<" "<<name<<endl;
            
        }

};
class show:public Account1,public Account2{
   
        
};
