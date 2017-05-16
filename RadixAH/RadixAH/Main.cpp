#include <iostream>
#include "DynamicArray.h"

using namespace std;

void TestDynamicArray()
{
	DynamicArray<int>myArray(3);

	cout << "initial sizes" << endl;
	cout << myArray.Size() << endl;
	cout << myArray.Capacity() << endl;

	cout << "adding initial vale " << endl;
	myArray.pushBack(9);
	myArray.pushBack(8);
	myArray.pushBack(7);

	cout << "new sizes " << endl;
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl << endl;

	cout << "Values are " << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	myArray.Insert(1, 4);

	cout << "Values are " << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	int value = myArray.popBack();
	cout << "values popped  " << value << endl;
	cout << "Values are " << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	value = myArray.remove(3);
	cout << "value removed was " << value << endl;
	cout << "Values are " << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	myArray[1] = -5;
	cout << "Values are " << endl;
	for (int i = 0; i < myArray.Size(); ++i)
	{
		cout << myArray[i] << endl;
	}

	cout << "Sizes are " << value << endl;
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;

	myArray.Shrink();
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;

	myArray.Clear();
	myArray.Shrink();
	cout << "Used " << myArray.Size() << endl;
	cout << "Capacity " << myArray.Capacity() << endl;
}

void TestDynamicArrayConstructors()
{
	DynamicArray<float> array1(3);
	array1.pushBack(3.5f);
	array1.pushBack(1.5f);
	array1.pushBack(2.5f);
	array1.pushBack(4.5f);

	DynamicArray<float> copy(array1);

	cout << "copy is " << endl;
	for (int i = 0; i < copy.Size(); ++i)
	{
		cout << copy[i] << endl;
	}

	DynamicArray<float> copy2(array1);
	copy2 = array1;
}

int main()
{
	TestDynamicArrayConstructors();

	system("pause");
	return 0;
}