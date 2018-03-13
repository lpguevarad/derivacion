#include <cstdio>
#include <cmath>

double f(double x);
double fderivforward(double x, double h);
double fderivrichardsonforward(double x, double h);
double df(double x);

int main()
  
{
  double x = M_PI/4.0;
  double h = 0.1;
 
  {
    for ( h = 1e-5; h <=1;h+=0.01){
      std::printf ("%25.16e\t%25.16e\t%25.16e\t%25.16e\n", h , df(x) ,fderivforward(x,h) , fderivrichardsonforward(x,h));
  }

  }
  
  return 0;
}

double f(double x)
{
  return std::sin(x);
}

double df(double x)
{
  return std::cos(x);
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
