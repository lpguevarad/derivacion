#include <cstdio>
#include <cmath>

double f(double x);
double fderivcentral(double x, double h);
double fderivforward(double x, double h);

int main()
  
{
  double x = M_PI/3;
  double h = 0.1;
  std::printf("%25.16e\n", std::cos(x));
  std::printf("%25.16e\n", fderivcentral(x, h));
  std::printf("%25.16e\n", fderivforward(x, h));
  
  return 0;   
}

double f(double x)
{
  std::sin (x);
}

double fderivforward(double x, double h)
{
  return (f(x+h) - f(x))/h;
}
  
double fderivcentral(double x, double h)
  
{
  return (f(x+h/2) - f(x-h/2))/h;
}
