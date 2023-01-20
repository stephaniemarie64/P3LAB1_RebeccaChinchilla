#include <iostream> // permite al programa imprimir datos en la pantalla
using std::cout; // el programa usa cout
 using std::cin; // el programa usa cin
 using std::endl;
#include <cmath>
 // la función main comienza la ejecución del programa
 int main()
 {
	/* double numero1; // primer entero a comparar	
	 cout << "Escriba El valor de N: "; // pide los datos al usuario
	 cin >> numero1; // lee dos enteros del usuari
	 float x = 1 / numero1;
	 float S = (x + x);
	 float e = abs(1.0 - S);
	 cout << "Usando float:\n " << e << endl;
	 double x1 = 1 / numero1;
	 double S1 = (x1 + x1);
	 double e1 = abs(1.0 - S1);
	 cout << "Usando double:\n " << e1 << endl;
	 long double x2 = 1 / numero1;
	 long double S2 = (x2 + x2);
	 long double e2 = abs(1.0 - S2);
	 cout << "Usando double:\n" << e2 << endl;


	*/int numero1; // primer entero a comparar	
	 cout << "Escriba El valor de N: "; // pide los datos al usuario
	 cin >> numero1 ; // lee dos enteros del usuari
	 float x = 1 / numero1;
	 float e; 
	 float S= 0;
	 for (int i = 0; i < numero1; i++) {
		 S += x;
	 }
	  e= 1.0 - S;
	// float e = abs(1.0 - S);
	 cout <<"Usando float:\n " << "E:" << e << endl;
	 double x1 = 1 / numero1;
	 double e1;
	 double S1 = 0;
			 for (int i = 0; i < numero1; i++){
				 S1 += x1;
			 }
			  e1 = abs(1.0 - S1);		 
	 
	 cout << "Usando double:\n " << "E:" << e1 << endl;
	 long double x2 = 1 / numero1;
	 long double e2;
	 long double S2 = 0;
	 for (int i = 0; i < numero1; i++) {
		S2 += x2;
	 }
	 e2 = abs(1.0 - S1);
	 cout << "Usando double:\n" <<"E: " << e2 << endl;
	 cout << "\n\n" << endl;
	 int A, B, P;
	 cout << "Escriba El valor de P: "; // pide los datos al usuario
	 cin >> P;

	 cout << "Escriba El valor de A: "; // pide los datos al usuario
	 cin >> A;

	 cout << "Escriba El valor de B: "; // pide los datos al usuario
	 cin >> B;
	 int m = 0;
	 for (int i = B + 1; i == 1; B--) {
		 for (int i = B + 1; i == P; P--) {
			 int j = A / B;
			 m = j + j;
			 cout << "M: " << m << endl;
		 } cout << "M: " << endl; 
		 cout << "M: " << m << endl;
	  cout << "M: " << endl;
	 } cout << "M: " << m << endl;
  cout << "M: " << endl;
  cout <<"HOLA" << endl;
	 
		 return 0; // indica que el programa terminó con éxito
		 } // fin de la función main