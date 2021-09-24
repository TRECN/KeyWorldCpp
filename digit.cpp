#include<bits/stdc++.h>
using namespace std;

int once(int n1,int n2,int n3){
    int digit,o;

    digit=n1%10;
    o=digit;
    digit=n2%10;
    if(digit<o)
        o=digit;
    digit=n3%10;
    if(digit<o)
        o=digit;

    return o;
}

int tens(int n){
    int ten=(n/10)%10;
    return ten;
}

int Stens(int n1,int n2,int n3){
    if(tens(n1)<tens(n2)){
        if(tens(n1)<tens(n3))
            return tens(n1);
        else
            return tens(n3);
    }
    else if(tens(n2)<tens(n3))
        return tens(n2);
    else
        return tens(n3);
}
int huns(int n){
    int hun=n/100;
    return hun;
}
int Shuns(int n1, int n2, int n3){
    if(huns(n1)<huns(n2)){
        if(huns(n1)<huns(n3))
            return huns(n1);
        else
            return huns(n3);
    }
    else if(huns(n2)<huns(n3))
        return huns(n2);
    else
        return huns(n3);
}
int great(int n){
    int r,t=0;
    while(n>0){
        r=n%10;
        if(r>t)
            t=r;
        n=n/10;
    }
    return t;
}
int greatest(int n1, int n2, int n3){
    if(great(n1)>great(n2)){
        if(great(n1)>great(n3))
            return great(n1);
        else
            return great(n3);
    }
    else if(great(n2)>great(n3))
        return great(n2);
    else
        return great(n3);
}

int main(){
    int n1,n2,n3;
    int digit,o,t,h,th;
    cin>>n1>>n2>>n3;
    int pin=(greatest(n1,n2,n3)*1000)+(Shuns(n1,n2,n3)*100)+(Stens(n1,n2,n3)*10)+once(n1,n2,n3);
    cout<<pin;
    return 0;
}