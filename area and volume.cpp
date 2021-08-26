#include <iostream>
using namespace std;
class Room{
	public: 
	double length;
	double breadth;
	double height;
	
	double calculatearea(){
		return length*breadth;
		}
		
		double calculatevolume(){
			return length*breadth*height;
		}
		
	
};
int main(){
Room room1;
room1.length=12.5;
room1.height=23.5;
room1.breadth=34.6;
cout<<"area of a Room"<<room1.calculatearea()<<endl;
cout<<"volume of Room"<<room1.calculatevolume()<<endl;
return 0;

}



