#include <iostream>
using namespace std;
class Rectangle
{
private:
	int x,y,width,high;
public:
	int getx(){return x;}
	int gety(){return y;}
	int getwidth(){return width;}
	int gethigh(){return high;}
	int setx(int v){x=v;}
	int sety(int v){y=v;}
	int setwidth(int v){width=v;}
	int sethigh(int v){high=v;}
	void move(int dx,int dy)
	{
		x+=dx;
		y+=dy;
	}
	int getAera()
	{
		return width*high;
	}
}T;
int main()
{
	cout << "����x,y,width,high" <<endl;
	int x,y,width,high;
	cin >> x >> y >>  width >> high;
	T.setx(x);
	T.sety(y);
	T.setwidth(width);
	T.sethigh(high);
	cout << "���Ϊ" << T.getAera() << endl;
	cout << "�������ƶ�x,yƫ����" << endl;
	int dx,dy;
	cin >> dx >> dy ;
	T.move(dx,dy);
	cout << "����״̬ x,y,width,height: " << T.getx()<<" " << T.gety()<<" " << T.getwidth()<<" " << T.gethigh() << endl;
	return 0;	
}