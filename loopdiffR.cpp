#include <cstdio>
#include <cmath>

double f(double x);
double fderivcentral(double x, double h);
double fderivforward(double x, double h);
double fderivrichardsonforward(double x, double h);
double fderivrichardsoncentral(double x, double h);

int main()
  
{
  double x = M_PI/3.0;
  double h = 0.1;
  std::printf("%25.16e\n", std::cos(x));
  std::printf("%25.16e\n", fderivforward(x, h));
  std::printf("%25.16e\n", fderivcentral(x, h));
  std::printf("%25.16e\n", fderivrichardsonforward(x, h));
  std::printf("%25.16e\n", fderivrichardsoncentral(x, h));
  
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
  

double fderivcentral(double x, double h)
{
  return (f(x+h/2) - f(x-h/2))/h;
}

double fderivrichardsonforward(double x, double h)
{
  double h2=h/2;
  double result1 = fderivforward(x, h);
  double result2 = fderivforward(x, h2);
  
  return (4*result2 - result1)/3.0;
}

double fderivrichardsoncentral(double x, double h)
{
  double h2=h/2;
  double result1 = fderivcentral(x, h);
  double result2 = fderivcentral(x, h2);
  
  return (4*result2 - result1)/3.0;
}
