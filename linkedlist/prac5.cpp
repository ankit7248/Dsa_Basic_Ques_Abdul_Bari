#include <iostream>
using namespace std;

class animal
{
    void eat()
    {
        cout << "animal";
    }
};
class dog : private animal
{
    {
        cout << "no animal";
    }
};

int main()
{
    
}