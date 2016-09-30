#include <iostream>
#include <vector>

// GUIA 
// unsigned --> es como el entero pero no puede ser negativo. Se usará para contar así que nunca puede ser negativo.
// const --> constante
// & --> referencia
// vector<int> --> vector de enteros
// int --> entero



// Esta es la función que recibe como primer parámetro una referencia constante a un vector de enteros y 
// como segundo parámetros un pivote (entero también (int)).
unsigned getNumNumMayoresQuePivote (const std::vector<int>& enteros, int pivote) {
  unsigned numEnterosMayoresQueElPivote = 0;
  
  // it = iterador.
  for (int it = 0;it <  enteros.size(); it++) 
	  if (enteros.at(it) > pivote) 
		  numEnterosMayoresQueElPivote++;
  
  return numEnterosMayoresQueElPivote;
}


int main () {
	int elPivote = 8; 
	int numDeEnteros = 20;  // además será el mayor número almacenado en el vector
	std::vector<int> losEnteros;
	
	// Metemos 20 numeros en el vector = {1, 2,..., 20}
	for (int i = 1;i <= numDeEnteros; i++)  
		losEnteros.push_back(i);
	
	std::cout << "En el vector hay " << getNumNumMayoresQuePivote(losEnteros, elPivote) <<  " numeros mayores que el pivote." << std::endl;
	
	return 0;

}
