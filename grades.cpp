
#include <iostream>
using namespace std;

int main()
{
int mark,component1,component2;
cout<<"enter marks: ";
cin>>mark;
cout<<"enter component1: ";
cin>>component1;
cout<<"enter component2: ";
cin>>component2;

//student has passed all the conditions i.e marks and components

if(mark>39 &&component1>=15 && component2>=15)
{
	cout<<"passed\n";
}
//student has attained the minimum marks required in each component 
//the 39 marks is moderated to 40
else if(mark==39 && component1>=15 && component2>=15)
{
	cout<<"passed\n";
}
else
{
	
cout<<"fail\n";
}
// grade obtained by the mark that the student gets
if(mark>=70)
{
	cout<<"Grade=A\n";
}

else if(mark==60)
{
	cout<<"Grade=B\n";
}
else if(mark==50)
{
	cout<<"Grade=C\n";
}
else if(mark==40)
{
	cout<<"Grade=D\n";
}
else if(mark<=39)
{
	cout<<"Grade=E\n";
	cout<<"FAILED\n";
}
return 0;
}
