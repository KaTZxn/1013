#include <stdio.h>

class Array
{
public:

	void Create(int size)
	{
		arraysize = size;
		newArray = new int[size];
	}
	void Set(int i)
	{	
		if (i >= 0 && i < arraysize)
			newArray[i] = i;
		else
			return;
	}
	void Get(int i)
	{	
		if (i >= 0 && i < arraysize)
			printf("%d\n", newArray[i]);
		else
			return;
	}
	
	~Array()
	{
		delete[] newArray;
		newArray = nullptr;
	}

private:
	int* newArray;
	int arraysize;
};

int main()
{
	Array array;
	array.Create(1000);

	for (int i = 0; i < 1000; i++)
	{
		array.Set(i);
	}

	for (int i = 0; i < 1000; i++)
	{
		array.Get(i);
	}
	array.Set(-1);
	array.Get(-1);
}