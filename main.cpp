#include <iostream>
#include "complex.hpp"

int main() {
	// creazione dei numeri complessi
	ComplexNumber<float> num1(3.0,4.0); // 3+4i
	ComplexNumber<float> num2(2.0,-1.0); // 2-i
	
	// stampa dei numeri complessi
	std::cout << "num1: " << num1 << std::endl;
	std::cout << "num2: " << num2 << std::endl;
	
	// trovare la parte reale 
	std::cout << "Parte reale di num1: " << num1.getReal() << std::endl;
	std::cout << "Parte reale di num2: " << num2.getReal() << std::endl;
	
	// trovare la parte immaginaria
	std::cout << "Parte immaginaria di num1: " << num1.getImag() << std::endl;
	std::cout << "Parte immaginaria di num2: " << num2.getImag() << std::endl;
	
	// trovare il coniugato del numero complesso
	std::cout << "Complesso coniugato di num1: " << num1.conjugate() << std::endl;
	std::cout << "Complesso coniugato di num2: " << num2.conjugate() << std::endl;
	
	// uso dell'operatore +
	ComplexNumber<float> sum=num1+num2;
	std::cout << "Somma: " << sum << std::endl;
	
	// uso dell'operatore +=
	ComplexNumber<float> num3;
	num3=num1; // in questo modo non modifico il valore di num1 e lo posso usare per le altre operazioni
	num3+=num2;
	std::cout << "num1+=num2: " << num3 << std::endl;
	
	// uso dell'operatore *
	ComplexNumber<float> product=num1*num2;
	std::cout << "Prodotto: " << product << std::endl;
	
	// uso dell'operatore *= 
	ComplexNumber<float> num4;
	num4=num1;
	num4*=num2;
	std::cout << "num1*=num2: " << num4 << std::endl;
	
	// uso degli operatori nel caso di numeri complessi con scalari
	num1 + 3.0;
	std::cout << "num1+3.0: " << num1+3.0 << std::endl;
	
	num1 * 3.0;
	std::cout << "num1*3.0: " << num1*3.0 << std::endl;
	
	ComplexNumber<float> num5;
	num5=num1;
	num5+=3.0;
	std::cout << "num1+=3.0: " << num5 << std::endl;
	
	ComplexNumber<float> num6;
	num6=num1;
	num6*=3.0;
	std::cout << "num1*=3.0: " << num6 << std::endl;
}