#include <iostream>
using namespace std;
int MinimalElement(int arr[])
{
	int minimalElement = arr[0];
	for (int i = 0; i < 128; i++)
	{
		if (minimalElement<arr[i])
		{
			minimalElement = arr[i];
		}
	}
	return minimalElement;
}
int Contains(int arr[], int element, int index)
{
	for (int i = 0; i < index; i++)
	{
		if (arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}
bool IfMaxTwoElementsInTheArray(int arr[])
{
	int counter = 0;
	if (arr[0]!=0)
	{
		counter++;
	}
	for (int i = 1; i <128; i++)
	{
		if (arr[i]!=0&&(Contains(arr,arr[i],i)==-1))
		{
			counter++;
		}
	}
	if (counter>2)
	{
		return false;
	}
	return true;
}
int main()
{
	char str[152];
	cin.getline(str, 152);
	int strSize = 0;
	while (str[strSize]!='\0')
	{
		strSize++;
	}
	int ASCIIArray[128] = { 0 };
	for (int i = 0; i < strSize; i++)
	{
		ASCIIArray[str[i]] += 1;
	}
	if (!IfMaxTwoElementsInTheArray(ASCIIArray))
	{
		cout << 0;
	}
	else
	{
		if (MinimalElement(ASCIIArray)==1)
		{
			cout << 1;
		}
	}

}