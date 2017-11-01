#include <iostream>
using std::cin;
using std::cout;

int cuboPorValor ( int );
void cuboPorRef ( int & );
int calc_volume(int, int, int);
double calc_volume(double = 2.0 , double = 2.0, double = 2.0);





int main()
{
	int x;
	
	cout << "\nDigite um valor para calcular o cubo: ";
	cin >> x;
	
	cout << "\nO resultado eh: " << cuboPorValor (x) << '\n';
	
    
    int y;
    
    cout << "\nDigite um valor para calcular o cubo: ";
    cin >> y;
    
    
    cuboPorRef(y);
    
    cout << "\nO resultado eh: " << y << '\n';
    
    
    int comp, larg, alt;
    
    cout << "\nDigite o valor do comprimento: ";
    cin >> comp;
    
    cout << "\nDigite o valor da largura: ";
    cin >> larg; 
    
    cout << "\nDigite o valor da altura: ";
    cin >> alt;
    
    cout << "\nVolume eh: " << calc_volume(comp, larg, alt);
    
    
    double comp_, larg_, alt_;
    
    cout << "\nDigite o valor do comprimento: ";
    cin >> comp_;
    
    cout << "\nDigite o valor da largura: ";
    cin >> larg_; 
    
    cout << "\nDigite o valor da altura: ";
    cin >> alt_;
    
    cout << "\nVolume eh: " << calc_volume(comp_, larg_, alt_);
    
    
    cout << "\nVolume eh: " << calc_volume();
    
    cout << "\nVolume eh: " << calc_volume(comp_);
    
    
    
    return 0;
}

int cuboPorValor(int a)
{
	return a*a*a;
}

void cuboPorRef( int & a )
{
    a *= a * a;
}

int calc_volume(int comp, int larg, int alt)
{
    return comp * larg * alt;
}
double calc_volume(double comp_, double larg_, double alt_)
{
    return comp_ * larg_ * alt_;
}