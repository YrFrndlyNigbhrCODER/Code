#include<iostream>
using namespace std;
int newchoco(int choco,int wrapper)
{
	int newcho = choco / wrapper;
	if(choco<wrapper)
	{
		return 0;
	}
	else
	{
		return newcho + newchoco(newcho + choco % wrapper, wrapper);
	}
}
int maxchocolate(int choco,int wrapper)
{
	int max = choco;
	return max + newchoco(choco, wrapper);
}

int main()
{
	int choco;
	int wrapper = 3;
	cin >> choco;
	cout << maxchocolate(choco, wrapper) << endl;
	return 0;
}