#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
int numero, par, impar;

int main()
{
	cout << "######################################################\n";
	cout << "######################################################\n\n";
	
	cout << " Programa para gerar cem n" << char(163) << "meros aleat" << char(162) << "rios de 1 a 10!\n\n";
	cout << "N" << char(163) << "meros gerados aleatoriamente: \n";
	
	srand( ( int ) time( 0 ) );
	for ( int i = 0; i < 100; i++ )
	
	{
		numero = rand() % 10 + 1;
		cout << " " << numero;
	
		if ( numero % 2 == 0 )
			par += 1;
		else
			impar += 1;
	}
	
	
	
	cout << "\n\n Quantidade de n" << char(163) << "meros pares: "<< par << "; Porcentagem de n" << char(163) << "meros pares: " << par << "%!";
	cout << "\n\n Quantidade de n" << char(163) << "meros " << char(161) << "mpares: " << impar << "; Procentagem de n" << char(163) << "meros " << char(161) << "mpares: " << impar << "%!";
	
	return 0;
}