#include <iostream>
using namespace std;

class cars
{
    private:
        int price;
    public:
        int car_no;
        char name;
        char color;
        void setData (int a);
        void getData(){
            cout <<"price of car: "<<price<<endl;
            cout <<"name of car :"<<name <<endl;
            cout <<"car no . :" <<car_no<<endl;
            cout <<"color of car :"<<color<<endl;
        }

};

void cars::setData (int a){
    price=a;
}


int main(){
    cars maruti;
    maruti.car_no=7548;
    maruti.name='H';
    maruti.color='R';
    maruti.setData(40000000);
    maruti.getData();
    return 0;

}