#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
using namespace std;
const int DS=1000;
struct T_student
{
	//ѧ��	����	�Ա�	�������	�绰����
	int ID;
	char name[30];
	char sex[5];
	char dorm[30];
	char tel[20];
}student[DS];
struct T_score
{
	//ѧ��   �γ̱��  �γ�����  ѧ��  ƽʱ�ɼ� ʵ��ɼ�  ����ɼ�  �ۺϳɼ� ʵ��ѧ��
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
	cout<<left<<"ѧ��:"<<setw(6)<<s.ID<<" ����:"<<setw(8)<<s.name<<" �Ա�:"<<setw(4)<<s.sex
	<<" �������:"<<setw(8)<<s.dorm<<" �绰����:"<<setw(15)<< s.tel << endl;
}
int main()
{
	fa=fopen("a.txt","r");
	fb=fopen("b.txt","r");
	
	N=M=0;
	//01     ��ɳ�   ��     501         87732111
	while (fscanf(fa,"%d%s%s%s%s",
		&student[++N].ID,&student[N].name,&student[N].sex,&student[N].dorm,&student[N].tel)!=EOF);
	//01     A01       ��ѧ����  3       66       78       82	
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
			//����һ��ѧ�Ż���������ʵ��ѡ�񣩣���������Ļ�����Ϣ����ʾ�����

		}
		else 
		{
			//����һ��������룬�ɲ�ѯ�������е�ѧ���Ļ�����Ϣ����ʾ�����
			char dorm[30];
			cin >> dorm;
			for (int i=1;i<=M;i++)
				if (strcmp(student[i].dorm,dorm)==1)
					print_student(student[i]);
		}
	}
}	