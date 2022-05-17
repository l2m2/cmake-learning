#include <iostream>
#include "step3.h"
#ifdef USE_MYSQRT
#include "mysqrt.h"
#else
#include <cmath>
#endif

int main(int argc, char* argv[]) {
#ifdef USE_MYSQRT
  std::cout << "use mysqrt" << std::endl;
  std::cout << mysqrt(2) << std::endl;
#else
  std::cout << "use sqrt" << std::endl;
  std::cout << sqrt(2) << std::endl;
#endif
  return 0;
}