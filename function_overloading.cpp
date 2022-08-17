//----------------------------------calculator for adding and finding volume -----------------------------------------------

#include <iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sum(int a, int b,int c){
    return a+b+c;
}
float vol(int r,int h){
    return 3.14*r*r*h;
}
int vol(int a){
    return a^3;
}
int vol(int l,int b,int h ){
    return l*b*h;
}

int main (){
    int a,b,c,r,h,l,k;
    cout <<"for sum of 2 no.  press 1 "<<endl;
    cout <<"for sum  of 3 nos. press 2 "<<endl;
    cout <<"for volume of cylinder  press 3 "<<endl;
    cout <<"for volume of cube press 4 "<<endl;
    cout <<"for volume of cubiod press 5 "<<endl;
    cin>>k;
    if(k==1){
        cout <<"enter  1st no. ";
        cin>>a;
        cout <<"enter 2nd no. ";
        cin>>b;
        cout<<"sum of 2 no is :"<<sum(a,b);
    }
    else if (k==2){
        cout <<"enter  1st no. ";
        cin>>a;
        cout <<"enter  2nd no. ";
        cin>>b;
        cout <<"enter  3rd no. ";
        cin>>c;
        cout<<"sum of 3 no is :"<<sum(a,b,c);
    }
    else if(k==3){
        cout <<"enter  radius in cm ";
        cin>>r;
        cout <<"enter  height in cm ";
        cin>>h;
        cout<<"volume of cylinder is in cm "<<vol(r,h);
    }
    else if(k==4){
        cout <<"enter  side  of cube in cm ";
        cin>>a;
        cout<<"volume of cube is in cm "<<vol(a);
    }
    else if(k==5){
        cout<<"enter length in cm ";
        cin>>l;
        cout<<"enter breadth in cm ";
        cin>>b;
        cout<<"enter height in cm ";
        cin>>h;
        cout<<"volume of cuboid is in cm "<<vol(l,b,h);
    }
    else{
        cout <<"invalid input";
    }
    
    return 0;    
}
