
int S::a=0;
int main(){
    S *s=new S[3];
    S::a=0;
    delete []s;
    return 0;
}

