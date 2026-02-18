#include <iostream>

using namespace std;

#include <bits/stdc++.h>


#include <iomanip>

#include <iostream>

#include <vector>

  
  

int main()

{

int *Ptr1;

int *Ptr2;

  

Ptr1=new int;

Ptr2=new int;

  

*Ptr1=1;

*Ptr2=5;

  

cout<<*Ptr1<<endl;

cout<<*Ptr2<<endl<<endl;

  

delete Ptr1;

delete Ptr2;

cout<<*Ptr1<<endl;

cout<<*Ptr2<<endl;

return 0;

}