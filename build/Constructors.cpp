using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>

class clsConstractor
{
    private:
    string NameBugg;
    int Numcvee=0;
    int Bountyy=0;
    
    public:
    clsConstractor(string _NameBug,int _Numcve,int _Bounty)
    {
        NameBugg=_NameBug;
        Numcvee=_Numcve;
        Bountyy=_Bounty;
    }
    void SetNameBug(string Name)
    {
        NameBugg=Name;
    }
    string NameBuge()
    {
        return NameBugg;
    }
    
    void SetNumcve(int cve)
    {
        Numcvee=cve;
    }
    int Numcve()
    {
        return Numcvee;
    }

     void SetBounty(int Boun)
    {
        Bountyy=Boun;
    }
    int Bounty()
    {
        return Bountyy;
    }

    void Print()
    {
        cout<<"my bug is "<<NameBugg<<" and the cve number is "<<Numcvee<<" and bounty is :"<<Bountyy<<"$";
    }

};

int main()
{
clsConstractor  Constractor("sql injaction",12333,2000);

Constractor.Print();
    return 0;
}
