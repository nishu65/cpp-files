#include <iostream>
#include <string>

using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk(void);
    void compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "ENTER A BINARY NUMBER : " << endl;
    cin >> s;
}
void binary ::chk(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << s << " --- IT IS  NOT A BINARY NUMBER ." << endl;
            exit(0);
        }
    }
}
void binary ::compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "displaying binary number : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout <<endl;
}

int main()
{
    binary a;
    a.read();
    a.chk();
    a.display();
    a.compliment();
    a.display();
}