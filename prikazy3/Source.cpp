#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
	showmenu();
	int choice;
	cin >> choice;
	while (choice != 5)
	{
		switch (choice)
		{
		case 1: cout << "tralala";break;
		case 2: showmenu();break;
		case 3: report();break;
		case 4: comfort();break;
		default: cout << "ach jaj ty si kok";

		}
		cin >> choice;
	}
	cout << "skoncil mladej";
	return 0;
}

void comfort()
{
	cout << "tupi je tupy";
}

void report()
{
	cout << "ako pako";
}

void showmenu()
{
	cout << "ty si ale kok";
}