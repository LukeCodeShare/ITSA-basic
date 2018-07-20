#include<iostream>
#include<string>
using namespace std;

int main()
{
	string number[10][5];
	int input[4]; //輸入的四個數字
	int x;
	
	number[0][0] = "*****";
	number[0][1] = "*   *";
	number[0][2] = "*   *";
	number[0][3] = "*   *";
	number[0][4] = "*****";

	number[1][0] = "    *";
	number[1][1] = "    *";
	number[1][2] = "    *";
	number[1][3] = "    *";
	number[1][4] = "    *";

	number[2][0] = "*****";
	number[2][1] = "    *";
	number[2][2] = "*****";
	number[2][3] = "*    ";
	number[2][4] = "*****";

	number[3][0] = "*****";
	number[3][1] = "    *";
	number[3][2] = "*****";
	number[3][3] = "    *";
	number[3][4] = "*****";

	number[4][0] = "*   *";
	number[4][1] = "*   *";
	number[4][2] = "*****";
	number[4][3] = "    *";
	number[4][4] = "    *";

	number[5][0] = "*****";
	number[5][1] = "*    ";
	number[5][2] = "*****";
	number[5][3] = "    *";
	number[5][4] = "*****";
	
	number[6][0] = "*****";
	number[6][1] = "*    ";
	number[6][2] = "*****";
	number[6][3] = "*   *";
	number[6][4] = "*****";
	
	number[7][0] = "*****";
	number[7][1] = "    *";
	number[7][2] = "    *";
	number[7][3] = "    *";
	number[7][4] = "    *";

	number[8][0] = "*****";
	number[8][1] = "*   *";
	number[8][2] = "*****";
	number[8][3] = "*   *";
	number[8][4] = "*****";

	number[9][0] = "*****";
	number[9][1] = "*   *";
	number[9][2] = "*****";
	number[9][3] = "    *";
	number[9][4] = "    *";
//------------------------------宣告數字形狀
	
	cin >> x;
	input[0] = x / 1000;
	input[1] = (x / 100)%10;
	input[2] = (x %100)/10;
	input[3] = (x % 100) % 10;  //把使用者輸入分成4個數字 

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << number[input[j]][i];  //number[使用者輸入第j個字][第 i 列]
			cout << " ";
		}
		cout << number[input[3]][i];
		cout << endl;
	}
	return 0;
}
