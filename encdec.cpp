#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class encdec
{
    int key;

    string file = "file12.txt";
    char c;

public:
    void encrypt();
    void decrypt();
};
void encdec::encrypt()
{
    cout << "KEY :";
    cin >> key;
    fstream fin, fout;
    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);
}
