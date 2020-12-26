// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include <vector>
using namespace std;
const int ALPHABET_SIZE = 26;
int main()
{
	int sum1 = 0;
	int sum2 = 0;
	int a = 0;
	//cin >> a;
	const int w = 3;
	int arr[2][3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a;
			arr[i][j] = a;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<<arr[i][j]<<endl;
		}
	}
	//int arr[w][w];
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		cin >> a;
	//		arr[i][j] = a;
	//	}

	//}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j]<<" ";
			if (i==j)
			{
				sum1 += arr[i][j];
			}
			if (i+j==2)
			{
				sum2 += arr[i][j];
			}
		}
		cout << endl;
	}
	cout << sum1;
	cout << sum2;
	
}