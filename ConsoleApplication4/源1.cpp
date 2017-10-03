#include"标头.h"
/**********线性表的数组描述*****************/
template<class T>
arrayList<T>::arrayList(int initialCapacity = 10)
{//构造函数
	if (initialCapacity < 1)
	{
		ostringstream s;
		s << "Initial capacity=" << initialCapacity << "must be >0";
		throw illegalParameterValue(s.str());
	}//判断输入的值是否合法
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
{//删除索引为theIndex的元素
	check(theIndex);
	copy(element + theIndex + 1, element + listSize, element + theIndex);//将theIndex后面的所有元素前移一位
	element[--listSize].~T();//调用析构函数，把最后一位删除
}
template<class T>
void arrayList<T>::insert(int theIndex, const T&theElement)
{

}
template<class T>
void arrayList<T>::output(ostream &out)const
{

}
/**********线性表的数组描述*****************/
	
	
	
	


