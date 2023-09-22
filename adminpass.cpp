#include <iostream>
#include <fstream>
using namespace std;
class admin
{
    string b, c;

public:
    string user()
    {
        string a;
        cout << "USERNAME :";
        cin >> a;
        return a;
    }

    string reg()
    {

        cout << "PASSWORD :";
        cin >> b;
        cout << "CONFIRM PASSWORD : ";
        cin >> c;
        if (b == c)
        {
            cout<<"PASSWORD MATCHED .";
            return b;
        }
        else {
            cout<<"PASSWORD NOT MATCHED.";
            return reg();
        }
    }
};
int main()
{
    admin a;
    //ifstream x("password.txt");
    ofstream y("password.txt");
    y<<a.user();
    y<<a.reg();
    return 0;

}