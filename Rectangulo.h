#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"

class Rectangulo : public figura{
  private:
    double base,altura;
  public:
	  Rectangulo(double,double);
	  double getArea();
	  double getPerimetro();

};
#endif
