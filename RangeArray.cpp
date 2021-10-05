#include <iostream>
using namespace std;
#include "RangeArray.h"

RangeArray::RangeArray(int i, int j) :Array(j - i + 1)
{
	low = i; // hw5_2 추가내용입니다.
	high = j;
}

RangeArray::~RangeArray()
// ����� ������ ��� �ʿ�X -> ���� Array �Ҹ��ڿ��� �޸� ������ �̷���

{

}

int RangeArray::baseValue()
{
	return low;
}
int RangeArray::endValue()
{
	return high;
}
int& RangeArray::operator [](int i)
{
	return Array::operator [](i - low);
}
int RangeArray::operator [](int i) const
{
	return Array::operator [](i - low);
}
