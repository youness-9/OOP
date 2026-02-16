#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <cctype>
#include <fstream>
#include "Info.h"

using namespace std;

class clstest
{
	private:
		int _Id = 10;
		string _firstName;
		string _LastName;
public:
	int Id()
	{
		return _Id;
	}
	void Setfirstname(string FirstName)
	{
		_firstName = FirstName;
	}
	string FistName()
	{
		return _firstName;
	}	
	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}
	string LastName()
	{
		return _LastName;
	}
	string FullName()
	{
		return _firstName + " " + _LastName;
	}

};

int main()
{
	clstest test;
	test.Setfirstname("youness");
	test.SetLastName("benben");

	cout << "Id: " << test.Id()<<endl;
	cout << "fistname: " << test.FistName() << endl;
	cout << "fistname: " << test.LastName() << endl;
	cout << "fistname: " << test.FullName() << endl;

	return 0;
}