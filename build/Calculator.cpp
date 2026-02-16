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
        int LastNumber=0;
        int PreviousNumber=0;
        string Opirtion="clean";
    public:
        void clean()
        {
            LastNumber=0;
            PreviousNumber=0;
            Opirtion="clean";
            Number=0;
        }

        void Add(int Num)
        {
            LastNumber=Number;
            Opirtion="Add";
            Number+=Num;
        }
        
        void Substruct(int Num)
        {
            LastNumber=Number;
            Opirtion="Substruct";
            Number-=Num;
        }
        
        void Divid(int Num)
        {
            LastNumber=Number;
            Opirtion="Divid";
            Number/=Num;
        }
        
        void Multiplay(int Num)
        {
            LastNumber=Number;
            Opirtion="Multiplay";
            Number*=Num;
        }
        
        void PrintResult()
        {
                cout<<"the Result after" <<Opirtion<<" "<<LastNumber<<" is "<<Number<<endl;
        }            
};

int main()
{

    clsCalculator Calculator;
    Calculator.Add(10);
    Calculator.PrintResult();
    Calculator.Add(10);
    Calculator.PrintResult();
    Calculator.Multiplay(10);
    Calculator.PrintResult();
    Calculator.clean();
    Calculator.PrintResult();
Calculator.Multiplay(10);
Calculator.PrintResult();
    return 0;
}
