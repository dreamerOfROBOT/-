#ifndef __shujujiegou
#define __shujujiegou





/********************
���ݽṹ��ϰ����
1.���Ա����������
2.���Ա����ʽ����
    1.��������
	2.��������
	3.͹������
	4.���鼯
3.����
4.����
5.ջ����������
6.ջ����ʽ����
    1.��ŵ������
	2.�г���������
	3.������
	4.���ߵȼ�
	5.���غв���
	6.�Թ�����
7.���е���������
8.���е���ʽ����
    1.�г���������
	2.��·����
	3.ͼԪʶ��
	4.��������
***************************/
//program��ȡֵ��Χ��0-20
int program = 1;//ͨ���ı������ֵ����ִ�в�ͬ�ĳ��򣬱��ڵ���
/***********���Ա����������***************/
#include<iostream>
using namespace std;
template <class T>
class linearList
{//�����������������Ա�����ݽṹ
public:
	virtual ~linearList() {};
	virtual bool empty()const = 0;//�����Ա�Ϊ��ʱ����1�����򷵻�0
	virtual int size()const = 0;//�������Ա��Ԫ�ظ���
	virtual T& get(int theIndex)const = 0;//��������ΪtheIndex��Ԫ��
	virtual int indexOf(const T& theElement)=0;//����Ԫ��theElement��һ�γ��ֵ�����
	virtual void erase(int theIndex) = 0;//ɾ������ΪtheIndex��Ԫ��
	virtual void insert(int theIndex, const T& theElement) = 0;//��theElement���뵽����theIndex�ĵط�
	virtual void output(ostream&out)const = 0;//�����Ա����������out

};
//#if program==1;
template<class T>
class arrayList :public linearList<T>
{
public:
	arrayList(int initialCapacity = 10);
	arrayList(const arrayList<T>&);
	arrayList() { delete[]element; }
	//ADT����
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



/***********���Ա����ʽ����***************/
//#if program==2






//#endif // program==2

/***********��������***************/
//#if program==3






//#endif // program==3
/***********��������***************/
//#if program==4






//#endif // program==4
/***********͹��***************/
//#if program==5






//#endif // program==5
/***********���鼯***************/
//#if program==6






//#endif // program==6
/***********����***************/
//#if program==7






//#endif // program==7
/***********����***************/
//#if program==8






//#endif // program==8
/***********ջ����������***************/
//#if program==9






//#endif // program==9
/***********ջ����ʽ����***************/
//#if program==10






//#endif // program==10
/***********��ŵ������***************/
//#if program==11






//#endif // program==11
/***********�г���������***************/
//#if program==12






//#endif // program==12
/***********������***************/
//#if program==13






//#endif // program==13
/***********���ߵȼ�***************/
//#if program==14






//#endif // program==14
/***********���غв���***************/
//#if program==15






//#endif // program==15
/***********�Թ�����***************/
//#if program==16






//#endif // program==16
/***********�г���������***************/
//#if program==17






//#endif // program==17
/***********��·����***************/
//#if program==18






//#endif // program==18
/***********ͼԪʶ��***************/
//#if program==19






//#endif // program==19
/***********��������***************/
//#if program==20






//#endif // program==20
#endif 