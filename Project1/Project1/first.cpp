#include<iostream>
#include<string>
#include<cstring>
//using namespace std;
void say(int);
void action(void (*pf)(int));//此原型的参数是函数指针
using namespace std;
#define ds 90;
const int dss = 110;
//ctrl + k + c; ctrl + k + u 注释

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

	//申明函数变量
	void (*f99)(int) = say;//申明函数变量
	action(*f99);//函数指针就是函数名,即函数地址
	action(f99);//也可以这样写
	action(say);//也可以这样写

	void(*farray[3])(int) = {say,say,say};//申明函数变量
	(*(*farray[1]))(333);
	(*farray[1])(222);



	//cout << "ss" << endl;
	//cout << &"ss" << endl;//无意义

	/*int i[3] = {1,2,3};
	cout << *(i+1) << endl;
	cout << &i << endl;
	cout << (&i)+1 << endl;*/

	//struct1 s0, s1, s2;
	//struct1* p_1 = &s0;//指针类型 struct1*    struct1地址
	//cout << p_1 -> id << endl;
	//struct1* p[] = {&s0,&s1,&s2};//指针类型是struct1*[]   struct1地址数组
	//cout << (*p) -> id << endl; 
	//struct1** pp = p;//指针类型是 struct1**   struct1地址* 即struct1地址地址 即struct1地址的数组
	//cout << (*pp)->id << endl;

	//int data[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	////函数原型:int sum(int (*ar2)[4], int size);
	////或者 函数原型:int sum(int (int ar2[][4], int size);
	//int total = sum(data, 3);
	//cout << "sum-" << total << endl;
	
	/*char s[] = {'s', 'b', 'c' , '\0'};
	cout << "--" << s << endl;
	cout << "--" << &s << endl;
	cout << "--" << *(&s) << endl;
	cout << "--" << **(&s) << endl;*/
	//一个方法体里的内存会在运行完自动释放,所以如果有返回地址,并且希望保留改地址的值,则要使用new 一个地址并赋值,因为new 出来的东西不会自动释放内存 但是要记得手动释放内存
	///////////////指针p 可以通过(int *)0x??赋值直接指向该0x??地址;   int * p = &i; 指的是把&i给p,而不是给*p,而申明的时候==**(int与*先结合)**==表明p是指向int型的指针,p的类型是int*,而*p是int
	///////////////////////////////////////////////////////////////////,在申明好后的使用中p是指针是地址,*p是该地址存放的值 //////////////////////////////////////////////////////
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
	//delete ppp;//需要并且只能有一次 释放new出来的内存
	//int * parray = new int[10];
	//delete[] parray;//释放new出来的数组 要用delete[]


	//string str0 = "";

	//cin >> str0;
	//cout << "sss:" << str0 << endl;
	//
	////cin.get();

	//float f1 = 7.2E2f;
	//float f2 = 7.3E-1f;
	//int i1 = static_cast<int> (3.21);//更为严格且安全的类型转换
	//cout << "::\n" << i1 << endl << f1 << endl << f2 << endl;

	//bool bb = false;
	//string ss = "suladi";
	//int ii = 11;
	//cout << "hello c++\n";
	//cin >> ii;//用户输入完后 最后的换行符被保留在了输入队列
	//cout << hex;
	//
	//cout << "hello 小公举-_-" << ii;

	//cout << dec;
	//say(3340220);
	//cout << '77';
	////cout.put('s');
	//int iii = ds;
	cout << endl << "按任意键结束程序" << endl;
	cin.get(); //读取并吃掉一个换行符
	cin.get();//读取
	return 0;
}
void action(void (*pf)(int))
{
	(*pf)(777);//通过函数指针 调用函数
	pf(666);//也可以这样调用函数,建议用上面一种
}

void say(int i) 
{

	cout << endl << "i:" << i << endl;
}