#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
struct  Date
{
	int y,m,d;
};
class File
{
	char FileName[100];
	int FileSize;
	Date CreateDate;
	Date ModifyDate;
public:
	File(const char *name,int size,int cy,int cm,int cd,int my,int mm,int md)
	{
		strcpy(FileName,name);
		FileSize=size;
		CreateDate.y=cy;CreateDate.m=cm;CreateDate.d=cd;
		CreateDate.y=cy;CreateDate.m=cm;CreateDate.d=cd;
	}
};
class  MediaFile: public File
{
	char type[10];
	double DuringTime;
	public :
	MediaFile(const char *name,int size,int cy,int cm,int cd,int my,int mm,int md,const char *t,double d):
		File(name,size,cy,cm,cd,my,mm,md)
	{
		strcpy(type,t);
		DuringTime=d;
	}
};
int main()
{
	MediaFile("A",100,2000,1,1,2001,1,1,"MP3",100.0);
	return 0;
}
