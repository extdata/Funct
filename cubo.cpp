#include <iostream>
using std::cin;
using std::cout;

int cubo (int a)
{
	return a*a*a;
}

int main()
{
	int x;
	
	cout << "\nDigite um valor para calcular o cubo: ";
	cin >> x;
	
	cout << "\nO resultado " << char (130) << ": " << cubo (x) << '\n';
	
	return 0;
}