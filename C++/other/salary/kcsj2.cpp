//kcsj2.cpp
#include"employee.h"
#include<fstream>
int main()
{
	handlemenu();
	return 0;
}
//����˵�����
void handlemenu()
{
	for (; ; )
	{
		switch (selectmenu())
		{
		case 1:
			write();
			break;
		case 2:
			read();
			break;
		case 3:
			cout << "\t�ټ�!\n";
			return;
		}
	}
}
//ѡ��˵�����
int selectmenu()
{
	int choose;
	cout << "\n\t*******С�͹�˾���ʹ������*******\n";
	cout << "\t1.���㵱�¹��ʲ�����\n";
	cout << "\t2.�鿴���¹���\n";
	cout << "\t3.�˳�����\n";
	cout << "\tѡ��1-3��\n";
	cout << "\n\t*********************************\n";
	for (;;)
	{
		cin >> choose;
		if (choose < 1 || choose >3)
			cout << "\n���������ѡ1-3��";
		else
			break;
	}
	return choose;
}
void write()
{
	Manager m1("�ŷ�");
	cout << "�������ְ��Ա���ܱ��¹���ʱ�䣨Сʱ����";
	int hours;
	cin >> hours;
	Technician t1("����", hours);
	cout << "����������Ա��ͭ�������۶Ԫ����";
	float sale;
	cin >> sale;
	Saleman s1("��ͭ", sale);
	cout << "���������۾����������ܲ��ű�����������Ԫ����";
	cin >> sale;
	Salesmanager sm1("������", sale);
	Hourwork h1("����", hours);
	cout << "������Сʱ���������չ���ʱ�䣨Сʱ����";
	cin >> hours;
 	Employee* em[4] = { &m1,&t1,&s1,&sm1 };
	ofstream ofile("employee.txt");
	for (int i = 0; i < 4; i++)
	{
		em[i]->pay();
		ofile << em[i]->getname() << "(" << em[i]->getpost() << ",����Ϊ" <<
			em[i]->getno() << ")";
		ofile << "���¹��ʣ�" << em[i]->getsalary() << endl;
	}
	ofile.close();
	cout << "���¹�����Ϣ�Դ����ļ�" << endl << endl;
}
void read()
{
	char line[101];
	ifstream infile("employee.txt");
	try
	{
		if (!infile)
			throw FileException();
	}
	catch (FileException fe)
	{
		cout << fe.what() << endl;
	}
	for (int i = 0; i < 4; i++)
	{
		infile.getline(line, 100);
		cout << line << endl;
	}
}