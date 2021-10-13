#include <stdio.h>

class Array
{
public:
	void Create(int x)
	{
		newArray = new int[x];
	}
	void Set(int i)
	{
		newArray[i] = i;
	}
	void Get(int i)
	{
		printf("%d\n", newArray[i]);
	}
	~Array()
	{
		delete[] newArray;
		newArray = nullptr;
	}

private:
	int* newArray;
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
}