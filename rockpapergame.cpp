#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class game
{
    char uchoice;

public:
    char userc()
    {

        cout << "...................ROCK PAPER AND SCISSOR GAME...................... \n";
        cout << "PRESS ...........\n"
             << "'R' FOR ROCK\n"
             << "'P' FOR PAPER\n"
             << "'S' FOR SCISSOR\n "
             << "CHOOSE : ";

        cin >> uchoice;
        return uchoice;
    }

    char compc()
    {
        srand(time(0));
        // Random number
        int num = rand() % 3 + 1;

        if (num == 1)
            return 'r';
        if (num == 2)
            return 'p';
        if (num == 3)
            return 's';
    }
    void check(char uchoice, char cchoice)
    {
        if (uchoice == 'r' && cchoice == 'p')
        {
            cout << "COMPUTER WINS ....";
        }
        else if (uchoice == 'r' && cchoice == 's')
        {
            cout << "YOU WIN ";
        }
        else if (uchoice == 'p' && cchoice == 'r')
        {
            cout << "YOU WIN ";
        }
        else if (uchoice == 'p' && cchoice == 's')
        {
            cout << "COMPUTER WINS";
        }
        else if (uchoice == 's' && cchoice == 'r')
        {
            cout << "COMPUTER WINS";
        }
        else if (uchoice == 's' && cchoice == 'p')
        {
            cout << "YOU WIN";
        }
        else
        {
            cout << " MATCH DRAW ";
        }
    }
};

int main()
{
    char b, c;
    game a;
    b = a.userc();
    c = a.compc();
    a.check(b, c);
}