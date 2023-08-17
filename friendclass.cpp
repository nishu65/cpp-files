#include <iostream>
using namespace std;

class complex;

class calculator{
    public:
         int add ( int a ,int b ){
         return (a+b);
    }
    int sumrealcomplex(complex,complex);
    int sumcompcomplex(complex,complex);
};
class complex{
    int a ,b;
    friend int calculator ::sumrealcomplex(complex ,complex);
    friend int calculator ::sumcompcomplex(complex,complex);
public:
    void setnumber (int n1 ,int n2){
        a=n1;
        b=n2;

    }
    void printnumber(){
        cout<<" YOUR NUMBER IS : "<< a<< " + " <<b << "i"<<endl;
    }
};



int calculator :: sumrealcomplex(complex o1 , complex o2){
    return (o1.a+o2.a);
}
int calculator:: sumcompcomplex(complex o1 ,complex o2){
    return(o1.b+o2.b);
}


 


int main(){
    int x1,x2,y1,y2;
    cout <<"ENTER FIRST REAL NUMBER : ";
    cin>>x1;
    cout <<" ENTER FIRST COMPLEX NUMBER : ";
    cin>>y1;
    cout<<"ENTER SECOND REAL NUMBER : ";
    cin>>x2;
    cout <<"ENTER SECOND COMPLEX NUMBER :";
    cin>>y2;
    complex o1,o2;
    o1.setnumber(x1,y2);

    o2.setnumber(x2,y2);

    calculator calc;
    int res = calc.sumrealcomplex(o1,o2);
    cout << "THE SUM OF REAL PART OF O1 AND O2 :"<<res<<endl;
    int resc = calc.sumcompcomplex(o1,o2);
    cout <<"THE SUM OF COMPLEX  PART OF O1 AND O2 :"<<resc <<"i"<<endl;
    return 0;

}
 