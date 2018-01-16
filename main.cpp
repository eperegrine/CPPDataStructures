#include <iostream>
#include "Greeter.hpp"

#include <iostream>

int main(int argc, char const *argv[]) {
  Greeter* g = new Greeter("Emily");
  g->say_hello();
  std::cout << "Hello, World!" << std::endl;
  std::cin.get();
  return 0;
}
