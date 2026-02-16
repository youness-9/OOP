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
	string _ID = "suuu";
	string _FarstName;
	string _LastName;
public:

	void SetFistName(string farstname)
	{
		_FarstName = farstname;
	}
	string FerstName()
	{
		return _FarstName;
	}
	void SetLastName(string lastname)
	{
		_LastName = lastname;
	}
	string Lastname()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FarstName + " " + _LastName+" "+x;
	}


};

int main()
{
	clsPersorne Person1;
	Person1.SetFistName("youness");
	Person1.SetLastName("ben");

	cout << Person1.FerstName()<<"  "<<Person1.Lastname()<<endl;
	cout << Person1.FullName();
	return 0;
}