#include <iostream>
#include <iomanip>
using namespace std;
class Point
{
	private:
		int x,y;
	public :
		Point(int X=0,int Y=0)
		{
			x=X;
			y=Y;
		}
		int getX(){return x;}
		int getY(){return y;}
		int setX(int X){x=X;}
		int setY(int Y){y=Y;}
		void moveOff(int xoff,int yoff)
		{
			x+=xoff;
			y+=yoff;
		}
		
};
class Rectangle
{
	private:
		Point p;
		int width,height;
	public:
		Rectangle(int x,int y,int width,int height):p(x,y)
		{
			this->width=width;
			this->height=height; 
		}
		int getX(){return p.getX();}
		int getY(){return p.getY();}
		int setX(int X){p.setX(X);}
		int setY(int Y){p.setY(Y);}
		int getwidth(){return width;}
		int Setwidth(int v){width=v;}
		int getheight(){return height;}
		int Setheight(int v){height=v;}
		void moveOff(int offx,int offy)
		{
			p.moveOff(offx,offy);
		}
		float getArea()
		{
			return (float)width*height;
		}
		float getPerimeter()
		{
			return 2*(float)(width+height);
		}
		void show()
		{
			cout<<left  << "x:" <<setw(4) << p.getX() << "y:" << setw(4) << p.getY()
			<< "width:" << setw(4) << width << "height:" <<setw(4)<<height << "Area:"
			<<setw(4)<<getArea() << "Perimeter:" << setw(4)<< getPerimeter() <<endl;
		}
};
int main()
{
	int x,y,width,height;
	cin>> x >> y >> width >> height;
	Rectangle A(x,y,width,height);
	A.show();
	return 0;
	
}
