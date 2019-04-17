#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Point3D
{
	private: double x,y,z;
	public: Point3D(double x, double y, double z) 
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	public: double distanceFromCenter()
	{
		return distanceFrom(0,0,0);
	}
	public: double distanceFrom(Point3D other)
	{
		return sqrt (pow(x-other.x,2)+
		pow(y-other.y,2)+
		pow(z-other.z,2));
	}
	public: double distanceFrom(double xVal,
	double yVal, double zVal)
	{
		if (xVal > 0)
		{
			x = xVal;
		}
		if (yVal>0)
		{
			y = yVal;
		}
		if (zVal>0)
		{
			z = zVal;
		}
	}
	public: void details()
	{
		cout<< " x = " << x << " y = " << y << " z = " << z <<endl;
 	}
 };
 	int main()
 	{
 		Point3D point1 (2,3,4);
 		Point3D point2 (3,7,8);
 		cout << "point1\n";
 		point1.details();
 		cout << "point2\n";
 		point2.details();
 		cout << "The distance between point1 and (0,0,0) is : " << point1.distanceFromCenter() << endl;
 		cout << "The distance between point1 and point2 is: " << point1.distanceFrom(point2);
 		return 0;
 	}

	
	
