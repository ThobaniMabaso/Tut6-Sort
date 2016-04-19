#include <iostream>
#include <cstdlib>

using namespace std;

template <class T>
void sort(T[], int);
template <class T>
inline void swap(T*, T*);
template<class T>
void display(const T[], const int);

int main(int argv, char * args[])
{
	int numbers[] = { 4, 7, 8, 5, 1, 2, 1, 3, 2 };
	sort(numbers, 9);
	display(numbers, 9);

	/*now create an array of characters and sort them*/
	char characters[] = { 't', 'h', 'o', 'b', 'a', 'n', 'i', 'm', 'a', 'b' };
	sort(characters, 10);
	display(characters, 10);

	system("pause");
	return 0;
}

template <class T>
void sort(T data[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (data[j] > data[j + 1]) /*swap data if the current element is creater than the one coming right after it*/
				swap(&data[j], &data[j + 1]);
		}
	}
}

template <class T>
inline void swap(T *x, T *y)
{
	T temp = *x;
	*x = *y;
	*y = temp;
}

template<class T>
void display(const T data[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " "; /*displays elements of the array separated with spaces between them*/
	}
	cout << endl;
}

