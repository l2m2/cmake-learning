#include <iostream>
#include "TutorialConfig.h"
#ifdef USE_MYMATH 
#include "mysqrt.h"
#else
#include <cmath>
#endif

int main(int argc, char* argv[]) {
#ifdef USE_MYMATH
  std::cout << "use mysqrt" << std::endl;
  std::cout << mysqrt(2) << std::endl;
#else
  std::cout << "use sqrt" << std::endl;
  std::cout << sqrt(2) << std::endl;
#endif
  return 0;
}