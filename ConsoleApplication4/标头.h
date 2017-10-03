#ifndef __shujujiegou
#define __shujujiegou





/********************
数据结构练习代码
1.线性表的数组描述
2.线性表的链式描述
    1.箱子排序
	2.基数排序
	3.凸包问题
	4.并查集
3.矩阵
4.数组
5.栈的数组描述
6.栈的链式描述
    1.汉诺塔问题
	2.列车车厢重排
	3.计算器
	4.离线等价
	5.开关盒布线
	6.迷宫老鼠
7.队列的数组描述
8.队列的链式描述
    1.列车车厢重排
	2.电路布线
	3.图元识别
	4.工厂仿真
***************************/
//program的取值范围是0-20
int program = 1;//通过改变这个数值可以执行不同的程序，便于调试
/***********线性表的数组描述***************/
#include<iostream>
using namespace std;
template <class T>
class linearList
{//纯虚类用于描述线性表的数据结构
public:
	virtual ~linearList() {};
	virtual bool empty()const = 0;//当线性表为空时返回1，否则返回0
	virtual int size()const = 0;//返回线性表的元素个数
	virtual T& get(int theIndex)const = 0;//返回索引为theIndex的元素
	virtual int indexOf(const T& theElement)=0;//返回元素theElement第一次出现的索引
	virtual void erase(int theIndex) = 0;//删除索引为theIndex的元素
	virtual void insert(int theIndex, const T& theElement) = 0;//把theElement插入到索引theIndex的地方
	virtual void output(ostream&out)const = 0;//把线性表插入输入流out

};
//#if program==1;
template<class T>
class arrayList :public linearList<T>
{
public:
	arrayList(int initialCapacity = 10);
	arrayList(const arrayList<T>&);
	arrayList() { delete[]element; }
	//ADT方法
	bool empty()const { return listSize == 0; }
	int size()const { return listSize;}
	T& get(int theIndex) const;
	void erase(int theIndex);
	void insert(int theIndex, const T&theElement);
	void output(ostream &out)const;
	void checkIndex(int theIndex)const = 0;
	int indexOf(const T& theElement)const = 0;

};





//#endif // program==1;



/***********线性表的链式描述***************/
//#if program==2






//#endif // program==2

/***********箱子排序***************/
//#if program==3






//#endif // program==3
/***********基数排序***************/
//#if program==4






//#endif // program==4
/***********凸包***************/
//#if program==5






//#endif // program==5
/***********并查集***************/
//#if program==6






//#endif // program==6
/***********矩阵***************/
//#if program==7






//#endif // program==7
/***********数组***************/
//#if program==8






//#endif // program==8
/***********栈的数组描述***************/
//#if program==9






//#endif // program==9
/***********栈的链式描述***************/
//#if program==10






//#endif // program==10
/***********汉诺塔问题***************/
//#if program==11






//#endif // program==11
/***********列车车厢重排***************/
//#if program==12






//#endif // program==12
/***********计算器***************/
//#if program==13






//#endif // program==13
/***********离线等价***************/
//#if program==14






//#endif // program==14
/***********开关盒布线***************/
//#if program==15






//#endif // program==15
/***********迷宫老鼠***************/
//#if program==16






//#endif // program==16
/***********列车车厢重排***************/
//#if program==17






//#endif // program==17
/***********电路布线***************/
//#if program==18






//#endif // program==18
/***********图元识别***************/
//#if program==19






//#endif // program==19
/***********工厂仿真***************/
//#if program==20






//#endif // program==20
#endif 