#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include "Info.h"

using namespace std;

class clsPersorne
{
private:
	string x = "suuu";
public:
	string FarstName;
	string LastName;

	string FullName()
	{
		return FarstName + " " + LastName+" "+x;
	}

protected:
	int vv = 1;
	int test()
	{
		return vv + 2;
	}
	
};

int main()
{
	clsPersorne Person1;
	Person1.FarstName = "youness";
	Person1.LastName = "bendnaiba";

	cout << Person1.FullName();
	return 0;
}