#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a;
	
	// 뛰어쓰기가 있어도 그 값도 그대로 받음  
	getline(cin, a);
	cout << a;
	
	return 0;
}
