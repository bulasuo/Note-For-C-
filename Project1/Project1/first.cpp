#include<iostream>
#include<string>
#include<cstring>
//using namespace std;
void say(int);
void action(void (*pf)(int));//��ԭ�͵Ĳ����Ǻ���ָ��
using namespace std;
#define ds 90;
const int dss = 110;
//ctrl + k + c; ctrl + k + u ע��

struct struct1 
{
	int id = 10;
};

int sum(int ar2[][4], int size) 
{
	cout << ar2[2][2] << endl;
	cout << *(*(ar2 + 2) + 2) << endl;
	return 19;
}

int main(void)
{
	cout << "start" << endl;

	//������������
	void (*f99)(int) = say;//������������
	action(*f99);//����ָ����Ǻ�����,��������ַ
	action(f99);//Ҳ��������д
	action(say);//Ҳ��������д

	void(*farray[3])(int) = {say,say,say};//������������
	(*(*farray[1]))(333);
	(*farray[1])(222);



	//cout << "ss" << endl;
	//cout << &"ss" << endl;//������

	/*int i[3] = {1,2,3};
	cout << *(i+1) << endl;
	cout << &i << endl;
	cout << (&i)+1 << endl;*/

	//struct1 s0, s1, s2;
	//struct1* p_1 = &s0;//ָ������ struct1*    struct1��ַ
	//cout << p_1 -> id << endl;
	//struct1* p[] = {&s0,&s1,&s2};//ָ��������struct1*[]   struct1��ַ����
	//cout << (*p) -> id << endl; 
	//struct1** pp = p;//ָ�������� struct1**   struct1��ַ* ��struct1��ַ��ַ ��struct1��ַ������
	//cout << (*pp)->id << endl;

	//int data[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	////����ԭ��:int sum(int (*ar2)[4], int size);
	////���� ����ԭ��:int sum(int (int ar2[][4], int size);
	//int total = sum(data, 3);
	//cout << "sum-" << total << endl;
	
	/*char s[] = {'s', 'b', 'c' , '\0'};
	cout << "--" << s << endl;
	cout << "--" << &s << endl;
	cout << "--" << *(&s) << endl;
	cout << "--" << **(&s) << endl;*/
	//һ������������ڴ�����������Զ��ͷ�,��������з��ص�ַ,����ϣ�������ĵ�ַ��ֵ,��Ҫʹ��new һ����ַ����ֵ,��Ϊnew �����Ķ��������Զ��ͷ��ڴ� ����Ҫ�ǵ��ֶ��ͷ��ڴ�
	///////////////ָ��p ����ͨ��(int *)0x??��ֱֵ��ָ���0x??��ַ;   int * p = &i; ָ���ǰ�&i��p,�����Ǹ�*p,��������ʱ��==**(int��*�Ƚ��)**==����p��ָ��int�͵�ָ��,p��������int*,��*p��int
	///////////////////////////////////////////////////////////////////,�������ú��ʹ����p��ָ���ǵ�ַ,*p�Ǹõ�ַ��ŵ�ֵ //////////////////////////////////////////////////////
	//int i = 999;
	//int * p = &i;
	//int * pp;
	//pp = (int *)0x993;
	//int * ppp = new int;
	////p = &i;
	//*&i = 66;
	//cout << "i-" << i << endl;
	//cout << "&i-" << &i << endl;
	//cout << "p--" << p << endl;
	//cout << "pp-" << pp << endl;
	//cout << "ppp-" << ppp << endl;
	//delete ppp;//��Ҫ����ֻ����һ�� �ͷ�new�������ڴ�
	//int * parray = new int[10];
	//delete[] parray;//�ͷ�new���������� Ҫ��delete[]


	//string str0 = "";

	//cin >> str0;
	//cout << "sss:" << str0 << endl;
	//
	////cin.get();

	//float f1 = 7.2E2f;
	//float f2 = 7.3E-1f;
	//int i1 = static_cast<int> (3.21);//��Ϊ�ϸ��Ұ�ȫ������ת��
	//cout << "::\n" << i1 << endl << f1 << endl << f2 << endl;

	//bool bb = false;
	//string ss = "suladi";
	//int ii = 11;
	//cout << "hello c++\n";
	//cin >> ii;//�û�������� ���Ļ��з������������������
	//cout << hex;
	//
	//cout << "hello С����-_-" << ii;

	//cout << dec;
	//say(3340220);
	//cout << '77';
	////cout.put('s');
	//int iii = ds;
	cout << endl << "���������������" << endl;
	cin.get(); //��ȡ���Ե�һ�����з�
	cin.get();//��ȡ
	return 0;
}
void action(void (*pf)(int))
{
	(*pf)(777);//ͨ������ָ�� ���ú���
	pf(666);//Ҳ�����������ú���,����������һ��
}

void say(int i) 
{

	cout << endl << "i:" << i << endl;
}