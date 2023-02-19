#include <iostream.>
#include <conio.h>
using namespace std;

class ath
{
private:
    int a, b;

public:
    void get()
    {
        a = 56;
        b = 89;
    }
    void put()
    {
        cout << a << b << endl;
    }
};

int main()
{
    ath a;
    ath *b;
    b = &a;
    b->get();
    b->put();
}

