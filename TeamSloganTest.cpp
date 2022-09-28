#include <iostream>
using namespace std;

class human
{
protected:
    bool alive = 1;

public:
    human()
    {
        alive = 1;
    }
    void eat()
    {
        cout << "Eating." << endl;
    }
    void code()
    {
        cout << "Coding." << endl;
    }
    void sleep()
    {
        cout << "Sleeping." << endl;
    }
};

int main()
{

    return 0;
}