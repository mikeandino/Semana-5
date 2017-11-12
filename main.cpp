#include "figura.h"
#include "Rectangulo.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  figura*figura= new Rectangulo(10,5);

  cout << "el area es" << figura->getArea()<<endl;
	std::cout << "el perimetro es:" << figura->getPerimetro()<<endl;
  return 0;

}
