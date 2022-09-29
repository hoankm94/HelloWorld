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
    ~human(){};
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
<<<<<<< HEAD
        cout <<"Duy Anh gay";
=======
        cout << "Added cout line to create conflict" << endl;
>>>>>>> 99d6454253e8b800f99d974d70e87c748987909e
    }
    return 0;
}
