#include<iostream>
#include<string>
#include<cstring>
//using namespace std;
void say(int);
using namespace std;
#define ds 90;
const int dss = 110;
//ctrl + k + c; ctrl + k + u 注释

struct struct1 {
	int id = 10;
};

int main(void)
{
	cout << "start" << endl;
	struct1 s0, s1, s2;
	struct1* p_1 = &s0;//指针类型 struct1*    struct1地址
	cout << p_1 -> id << endl;
	struct1* p[] = {&s0,&s1,&s2};//指针类型是struct1*[]   struct1地址数组
	cout << (*p) -> id << endl; 
	struct1** pp = p;//指针类型是 struct1**   struct1地址* 即struct1地址地址 即struct1地址的数组
	cout << (*pp)->id << endl;

	
	char s[] = {'s', 'b', 'c' , '\0'};
	cout << "--" << s << endl;
	cout << "--" << &s << endl;
	cout << "--" << *(&s) << endl;
	cout << "--" << **(&s) << endl;
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

void say(int i) {

	cout << endl << "i:" << i << endl;
}