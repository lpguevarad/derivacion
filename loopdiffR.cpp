#include <cstdio>
#include <cmath>

double f(double x);
double fderivforward(double x, double h);
double fderivrichardsonforward(double x, double h);


int main()
  
{
  double x = M_PI/3.0;
  double h = 0.1;
 
  {
    for ( x = 0; x <= 8;x+=0.1){
      std::printf ("%25.16e\t%25.16e\t%25.16e\n", x , f(x) , fderivrichardsonforward(x,h));
  }

  }
  
  return 0;
}

double f(double x)
{
  return std::sin(x);
}

double fderivforward(double x, double h)
{
  return (f(x+h) - f(x))/h;
}
  

double fderivrichardsonforward(double x, double h)
{
  double h2=h/2;
  double result1 = fderivforward(x, h);
  double result2 = fderivforward(x, h2);
  
  return (4*result2 - result1)/3.0;
}
