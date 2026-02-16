using namespace std;

#include <iomanip>

#include <iostream>

#include <vector>

#include <string>

#include <cctype>

#include <fstream>

class clsCalculator
{
    private:
        int Number=0;
        struct stOprition
        {
            bool add;
            bool Substruct;
            bool Divid;
            bool Multiplay;
            
        };
    public:
        void clean()
        {
            Number=0;
        }

        void Add(int Num)
        {
            stOprition Oprition;
            Oprition.add=true;
            Number+=Num;
            PrintResult(Oprition,Num);
            Oprition.add=false;
        }
        
        void Substruct(int Num)
        {
            stOprition Oprition;
            Oprition.Substruct=true;
            Number-=Num;
            PrintResult(Oprition,Num);
            Oprition.Substruct=false;
        }
        
        void Divid(int Num)
        {
            stOprition Oprition;
            Oprition.Divid=true;
            Number/=Num;
            PrintResult(Oprition,Num);
            Oprition.Divid=false;
        }
        
        void Multiplay(int Num)
        {
            stOprition Oprition;
            Oprition.Multiplay=true;
            Number*=Num;
            PrintResult(Oprition,Num);
            Oprition.Multiplay=false;
        }
        

        void PrintResult(stOprition Oprition,int Num)
        {
            if(Oprition.add)
            {
                cout<<"the Result after add "<<Num<<" is "<<Number<<endl;
            }
            if(Oprition.Substruct)
            {
                cout<<"the Result after Substruct "<<Num<<" is "<<Number<<endl;
            }
            if(Oprition.Divid)
            {
                cout<<"the Result after Divid "<<Num<<" is "<<Number<<endl;
            }
            if(Oprition.Multiplay)
            {
                cout<<"the Result after Multiplay "<<Num<<" is "<<Number<<endl;
            }
            
        }
};

int main()
{

    clsCalculator Calculator;
    Calculator.Add(10);
    Calculator.Add(10);
    Calculator.Multiplay(10);
    Calculator.clean();
Calculator.Multiplay(10);
    return 0;
}
