
#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

class vector
{
	float x,y;

	public:
		vector()
	{     
		x=0;y=0; 
	}
		vector(float a,float b)
	{     
		x=a; y=b; 
	}
		vector(const vector& c){   
		this->x=c.x;
		this->y=c.y;
	}
		void vivod()
		{
			cout<<"coordinates of the vector:"<<"("<<x<<","<<y<<")"<<endl;
		}
		float modul()
		{
			float q;
			q=(x*x+y*y);
			return sqrt(q);
		}
		vector operator + (vector c)
		{     
		vector tmp; 
		tmp.x=x+c.x;
		tmp.y=y+c.y;
		return tmp;
		}
		vector operator - (vector c)
		{     
		vector tmp; 
		tmp.x=x-c.x;
		tmp.y=y-c.y;
		return tmp;
		}
		vector scalar (float c)
		{
		 vector tmp;
		 tmp.x = this->x * c;
		 tmp.y = this->y * c;
		 return tmp;
		}
};

int _tmain(int argc, _TCHAR* argv[])
{
	vector v1(4,3);
	v1.vivod();
	cout<<"module vector:"<<v1.modul()<<endl;
	vector a(4,3);
	vector b(5,7);
	a.vivod();
	b.vivod();
	vector c;
	cout<<"addition of vectors"<<endl;
	c=a+b;
	c.vivod();
	vector d;
	cout<<"vector difference"<<endl;
	d=a-b;
	d.vivod();
	vector e;
	cout<<"multiplication by a scalar"<<endl;
	e=a.scalar(2);
	e.vivod();
	getch();
	return 0;
}

