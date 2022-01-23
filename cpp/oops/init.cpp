#include <iostream>
using namespace std;

class Hero
{
public:
    string name;
    int hp;
    int level;
    Hero(string name, int level, int hp)
    {
        this->name = name;
        this->level = level;
        this->hp = hp;
    }
    void display()
    {
        cout << "Name: " << name << "\nLevel: " << level << "\nHP: " << hp << "\n\n";
    }
};

int main()
{
    // static initialization
    Hero h1("Hero", 1, 100);
    h1.display();

    // dynamic initialization
    Hero *h2 = new Hero("Hero2", 2, 200);
    h2->display();
    (*h2).display();

    return 0;
}