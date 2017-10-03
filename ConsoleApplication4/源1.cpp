#include"��ͷ.h"
/**********���Ա����������*****************/
template<class T>
arrayList<T>::arrayList(int initialCapacity = 10)
{//���캯��
	if (initialCapacity < 1)
	{
		ostringstream s;
		s << "Initial capacity=" << initialCapacity << "must be >0";
		throw illegalParameterValue(s.str());
	}//�ж������ֵ�Ƿ�Ϸ�
	arrayLength = initialCapacity;
	element = new T[arrayLength];
	listSize = 0;

}
template<class T>
arrayList<T>::arrayList(const arrayList<T>&theList)
{
	arrayLength = theList.arrayLength;
	listSize = theList.listSize;
	element = new T[arrayLength];
	copy(theList.element, theList.element + listSize, element);
}
template<class T>
void arrayList<T>::checkIndex(int theIndex)const
{
	if (theIndex < 0 || theIndex >= listSize)
	{
		ostringstream s;
		s << "theIndex" << theIndex << "must be illegal";
		throw illegalIndex(s.str());
	}
}
template<class T>
T& arrayList<T>::get(int theIndex) const
{
	checkIndex(theIndex);
	return element[theIndex];

}
template <class T>
int arrayList<T>::indexOf(const T& theElement)const
{
	int theIndex = (int)(find(element, element + listSize, theElement) - element);
	if (theIndex == listSize)
		return -1;
	else
		return theIndex;
}
template<class T>
void arrayList<T>::erase(int theIndex)
{//ɾ������ΪtheIndex��Ԫ��
	check(theIndex);
	copy(element + theIndex + 1, element + listSize, element + theIndex);//��theIndex���������Ԫ��ǰ��һλ
	element[--listSize].~T();//�������������������һλɾ��
}
template<class T>
void arrayList<T>::insert(int theIndex, const T&theElement)
{

}
template<class T>
void arrayList<T>::output(ostream &out)const
{

}
/**********���Ա����������*****************/
	
	
	
	


