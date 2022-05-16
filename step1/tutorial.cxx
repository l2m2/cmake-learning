#include <iostream>
#include <filesystem>
#include "TutorialConfig.h"
int main(int argc, char* argv[]) {
  std::cout << "Hello CMake!" << std::endl;
  std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;
  std::cout << std::filesystem::temp_directory_path().u8string() << std::endl;
  return 0;
}