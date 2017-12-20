#pragma once
#include <iostream>
using namespace std;

int total(string);
int totalEven(string);

int total(string input) {
	int sum = 0;
	for (int i = 0; i < input.length(); i++)
	{
		cout << sum << endl;
		if (i == (input.length() - 1))
		{
			if (input[i] == input[0])
			{
				sum = sum + (input[i] - '0');
			}
		}
		else
		{
			if (input[i] == input[i + 1])
			{
				sum = sum + (input[i] - '0');
			}
		}
	}
	return sum;
}

int totalEven(string input) {
	int sum = 0;
	int length = input.length() / 2;
	for (int i = 0; i < input.length(); i++)
	{
		if (i < length)
		{
			if (input[i] == input[i + length])
			{
				sum = sum + (input[i] - '0');
			}
		}
		else
		{
			if (input[i] == input[i - length])
			{
				sum = sum + (input[i] - '0');
			}
		}
	}
	return sum;
}