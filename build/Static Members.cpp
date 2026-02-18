#include <iostream>

using namespace std;

#include <bits/stdc++.h>


#include <iomanip>

#include <iostream>

#include <vector>

  
  
class clstest
{

    public:
        int Num;
        static int stNum;
    void PrintNUm()
    {
        cout<<endl<<Num;
    }
    void Print()
    {
        cout<<endl<<stNum;
    }
};
int clstest::stNum = 0; 
int main()
{
    clstest test,test1,test2;
    test.Num=1;
    test1.Num=2;
    test2.Num=3;
    test.PrintNUm();
    test1.PrintNUm();
    test2.PrintNUm();

    cout<<endl<<endl;
    test.stNum=1;
    test1.stNum=2;
    test2.stNum=3;
    test.Print();
    test1.Print();
    test2.Print();

return 0;
}