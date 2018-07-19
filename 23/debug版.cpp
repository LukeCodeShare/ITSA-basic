#include<iostream>
#include<sstream>
using namespace std;
//input 500,1,2,3
int main()
{
	string input, str;
	//string test;
	int money[4];// MyMoney ,apple ,orange ,peach 
	int sum , balance;  //水果的總額 ,找的零錢
	int five, fifty;    //五元的數量 ,五十元的數量
	
	getline(cin, input);    //接受一個字串,可以接受空格
	cout << "第一次getline:" << input <<endl;  //debug用
	istringstream cut(input);  //會吃掉input的空白
	//cut >> test;
	//cout << "cut:" << test << endl; error用法
	//istringstream 讀入後 只能輸出一次
	for (int i = 0; i < 4; i++)
	{
		getline(cut, str, ',');//cin.getline()實際上有三個參數，cin.getline(接受字符串的變數,接受個數,結束字符)
		cout << "getline"<< i+1 <<"\t"<< str << endl; //debug用  每次讀入的字串
		istringstream mon(str);  //存入istring裡面 
		mon >> money[i];  //放入陣列
		cout << "最後" << money[i] << endl;
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
