#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;


int main()
{
    
    int numero = 0, par = 0, impar = 0;
    
	cout << "######################################################\n";
	cout << "######################################################\n\n";
	
	cout << " Programa para gerar cem n" << char(163) << "meros aleat" << char(162) << "rios de 1 a 10!\n\n";
	cout << "N" << char(163) << "meros gerados aleatoriamente: \n";
	
	srand( ( int ) time( 0 ) );
    
    const int Nint = 100;
    
	for ( int i = 0; i < Nint; i++ )
	
	{
		numero = rand() % 10 + 1;
		cout << " " << numero;
	
		if ( numero % 2 == 0 )
			par += 1;
		else
			impar += 1;
	}
	
	
	
	cout << "\n\n Quantidade de n" << char(163) << "meros pares: "<< par << "; Porcentagem de n" << char(163) << "meros pares: " << 100*double(par)/double(Nint) << "%!";
	cout << "\n\n Quantidade de n" << char(163) << "meros " << char(161) << "mpares: " << impar << "; Procentagem de n" << char(163) << "meros " << char(161) << "mpares: " << 100*double(impar)/double(Nint) << "%!";
	
	return 0;
}