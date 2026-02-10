using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>

class clsTest
{
    string x="test";
    public:
        string FestName;
        string LastName;
        string FullName()
        {
        return FestName+" "+LastName+" this is "+x;
        }
};

int main()
{
    clsTest youness;
    youness.FestName="youness";
    youness.LastName="ben";
    cout<<youness.FullName();
    return 0;
}
