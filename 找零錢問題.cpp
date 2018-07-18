#include<iostream>
#include<sstream>
using namespace std;

int main()
{
	string input, str;
	int money[4];// MyMoney ,apple ,orange ,peach 
	int sum , balance;  //水果的總額 ,找的零錢
	int five, fifty;    //五元的數量 ,五十元的數量
	
	getline(cin, input);
	istringstream cut(input);
	for (int i = 0; i < 4; i++)
	{
		getline(cut, str, ',');
		istringstream mon(str);
		mon >> money[i];
	}
	
	sum = (15 * money[1]) + (20 * money[2]) + (30 * money[3]);    //水果的總價
	if (money[0] >= sum)
	{
		balance = money[0] - sum;
		fifty = balance / 50;
		balance -= 50 * fifty;
		five = balance / 5;
		balance -= 5 * five;
		cout << balance << ',' << five << ',' << fifty << endl;
	}
	else
		cout << "0" << endl;
	return 0;
	
}
