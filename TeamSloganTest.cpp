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
    ~human() {};
    human(bool alive)
    {
        this->alive = alive;
    }
    bool getStatus()
    {
        return alive;
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
    human a;
    while (a.getStatus() == 1)
    {
        a.eat();
        a.code();
        a.sleep();
    }
    cout << "123";
    return 0;
}
