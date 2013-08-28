#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
const int DS=1000;
struct T_student
{
	//学号	姓名	性别	宿舍号码	电话号码
	int ID;
	char name[30];
	char sex[5];
	char dorm[30];
	char tel[20];
}student[DS];
struct T_score
{
	//学号   课程编号  课程名称  学分  平时成绩 实验成绩  卷面成绩  综合成绩 实得学分
	int ID;
	char course_ID[40];
	char course_name[50];
	float credit;
	float usu_score;
	float exp_score;
	float pap_score;
	float score;
	float act_credit;
}score[DS*100];
FILE *fa,*fb;
int N,M;
void print_student(T_student &s)
{
	cout<<left<<"学号:"<<setw(6)<<s.ID<<" 姓名:"<<setw(8)<<s.name<<" 性别:"<<setw(4)<<s.sex
	<<" 宿舍号码:"<<setw(8)<<s.dorm<<" 电话号码:"<<setw(15)<< s.tel << endl;
}
int main()
{
	fa=fopen("a.txt","r");
	fb=fopen("b.txt","r");
	
	N=M=0;
	//01     李成成   男     501         87732111
	while (fscanf(fa,"%d%s%s%s%s",
		&student[++N].ID,&student[N].name,&student[N].sex,&student[N].dorm,&student[N].tel)!=EOF);
	//01     A01       大学物理  3       66       78       82	
	while (fscanf(fb,"%d%s%s%f%f%f%f",
		&score[++M].ID,&score[M].course_ID,&score[M].course_name,&score[M].credit,
		&score[M].usu_score,&score[M].exp_score,&score[M].pap_score
	)!=EOF);
	char order[30];
	cin >> order;
	if (order[0]=='A')
	{
		if (order[1]=='1')
		{
			//输入一个学号或姓名（可实现选择），查出此生的基本信息并显示输出。

		}
		else 
		{
			//输入一个宿舍号码，可查询本室所有的学生的基本信息并显示输出。
			char dorm[30];
			cin >> dorm;
			for (int i=1;i<=M;i++)
				if (strcmp(student[i].dorm,dorm)==1)
					print_student(student[i]);
		}
	}
}	