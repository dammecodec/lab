#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
class Student
{
	private: string name;
	private: long ID;
	private: double mathMark, engMark, physMark, chemMark;
	public: Student(string name, long ID)
	{
		this->name = name;
		this->ID = ID;
	}
	public: void setMathMark(double mar)
	{
		if (mar > 0 && mar < 100)
		mathMark = mar;
	}
	public: void setEngMark(double mar)
	{
		if (mar > 0 && mar < 100)
		engMark = mar;
	}
	public: void setPhysMark (double mar)
	{
		if (mar > 0 && mar < 100)
		physMark = mar;
	}
	public: void setChemMark (double mar)
	{
		if (mar > 0 && mar < 100)
		chemMark = mar;
	}
	public: double getAverage()
	{
		 double result ;
		 //if (mathMark>0 && mathMark<100 && engMark>0 && engMark<100 && physMark>0 && physMark<100 && chemMark>0 && chemMark<100)
		 result = (mathMark+engMark+physMark+chemMark)/4;
		 return result;
	}
	public: void displayDetails()
	{
		cout << "Name: " << name << endl;
		cout << "ID: " << ID << endl;
		cout << "Average: "  << getAverage();
	}
};
	int main ()
	{
		Student std ("Billy",123160054);
		std.setMathMark(7);
		std.setEngMark(8);
		std.setPhysMark(9);
		std.setChemMark(9);
		std.displayDetails();
	}


