#include <iostream>

using namespace std;

int main()

{

int x;

cout <<"Input a number"<<endl;

cin>> x;

if((x==1)||(x==0))

cout<< "Neither prime nor composite"<<endl;

for(int i=2; i < x; i++)

if (x%i==0)

cout << "Composite" << endl;

else
if(x%i!=0)

cout << "Prime" << endl;

}