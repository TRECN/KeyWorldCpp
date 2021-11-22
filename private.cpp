
class a{
    private:
        int x=10;
    public:
        int y=20;
    protected:
        int z=30;

        
};
class b:private a{
    private:
        int w=y+z;
    
    public:
    b(){
        cout<<w;
    }
};

            
int main(){
    b B;
}