#include <iostream>

using namespace std;

int Min(int firstNum, int secondNum)
{
	return (firstNum >= secondNum ? secondNum : firstNum);
}

int Max(int firstNum, int secondNum)
{
	return (firstNum >= secondNum ? firstNum : secondNum);
}

int minOf3(int firstNum, int secondNum, int thirdNum)
{
	return (Min(firstNum, secondNum) >= thirdNum ? thirdNum : Min(firstNum, secondNum));
}

int maxOf3(int firstNum, int secondNum, int thirdNum)
{
	return (Min(firstNum, secondNum) <= thirdNum ? thirdNum : Min(firstNum, secondNum));
}

double Pow(double num, int pow)
{
	double tempNum = num;

	for (int i = 1; i < pow; i++)
		num *= tempNum;

	return num;
}

int Abs(int num)
{
	if (num >= 0)
		return num;

	else
		return -num;
}

bool isAlpha(char alpha)
{
	return ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'));
}

bool isDigit(char digit)
{
	return (digit >= '0' && digit <= '9');
}

bool isPrime(int num)
{ 
	int flag = true;

	for(int i = 2; i < num/2; i++)
	{
		if (num % i == 0)
			flag = false; 
	}

	return flag;
}

int main() {

	
	int num;
	cin >> num;
	cout << "\n" << isPrime(num);
 


	system("pause");
	return 0;
}