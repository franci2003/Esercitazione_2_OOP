#include <iostream>
template <typename T>
class ComplexNumber {
private:
    T a;       // Parte reale
    T b;       // Parte immaginaria

public:
    // Costruttore di default
    ComplexNumber() : a(0.0), b(0.0) {}

    // Costruttore user-defined per inizializzare la parte reale e immaginaria
    ComplexNumber(T r, T i) : a(r), b(i) {}

    // Metodo per restituire la parte reale
    T getReal() const {
        return a;
    }

    // Metodo per restituire la parte immaginaria
    T getImag() const {
        return b;
    }

    // Metodo per restituire il coniugato del numero complesso
    ComplexNumber<T> conjugate() const {
        return ComplexNumber<T>(a, -b);
    }
	// Overload dell'operatore +
    ComplexNumber<T> operator+(const ComplexNumber<T>& other) const {
        return ComplexNumber<T>(a + other.a, b + other.b);
    }
	
 // Overload dell'operatore +=
    ComplexNumber<T>& operator+=(const ComplexNumber<T>& other) {
        a += other.a;
        b += other.b;
        return *this;
    }	
	
 // Overload dell'operatore *
    ComplexNumber<T> operator*(const ComplexNumber<T>& other) const {
        T newReal = a * other.a - b * other.b;
        T newImag = a * other.b + b * other.a;
        return ComplexNumber<T>(newReal, newImag);
    }
	
 // Overload dell'operatore *=
    ComplexNumber<T>& operator*=(const ComplexNumber<T>& other) {
        T newReal = a * other.a - b * other.b;
        T newImag = a * other.b + b * other.a;
        a = newReal;
        b = newImag;
        return *this;
	}
	
  // Overload dell'operatore + per somma con uno scalare
    ComplexNumber<T> operator+(T scalar) const {
        return ComplexNumber<T>(a + scalar, b);
    }
	
  // Overload dell'operatore += per somma con uno scalare
    ComplexNumber<T>& operator+=(T scalar) {
        a += scalar;
        return *this;
    }

    // Overload dell'operatore * per moltiplicazione con uno scalare
    ComplexNumber<T> operator*(T scalar) const {
        return ComplexNumber<T>(a * scalar, b * scalar);
    }

    // Overload dell'operatore *= per moltiplicazione con uno scalare
    ComplexNumber<T>& operator*=(T scalar) {
        a *= scalar;
        b *= scalar;
        return *this;
    }
    };
	
 // Overload dell'operatore <<
 template <typename T>
    std::ostream& operator<<(std::ostream& os, const ComplexNumber<T>& c) {
        if (c.b >= 0) {
            os << c.a << "+" << c.b << "i";
        } else {
            os << c.a << c.b << "i"; // segno meno già in c.b
        }
        return os;
    };	