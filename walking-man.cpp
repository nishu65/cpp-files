#include <iostream>
using namespace std;

int main()
{
    char input;     // char input to go Left or Right
    char street[5]; // one dimensional game base
    int posX = 2;   // X position of the player

    street[0] = 'A'; // an apple tree on this position
    street[2] = 'C'; // center on this position

    std::cout << "Walking Person Game" << std::endl;
    std::cout << "Input L for the Left, R for the Right, X to Exit" <<endl<< endl;

    do
    {

        cout << "Your position is:" << posX << endl;
        switch (street[posX])
        {
        case 'A':
            cout << "Here is an apple tree" << endl;
            break;l

        case 'C':
            cout << "Here is center of the road" << endl;
            break;
        }

        cout << "Where u go (L, R, X) ?";
        cin >> input;

        switch (input)
        {
        case 'L':
        case 'l':
            if (posX > 0)
                posX--;
            break;

        case 'R':
        case 'r':
            if (posX < 5)
                posX++;
            break;
        }
    } while (input != 'X');

    return 0;
}