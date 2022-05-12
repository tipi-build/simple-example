#include <iostream>

#include <nlohmann/json.hpp>

int main(int argc, char** argv) {
  std::cout << "Wonderful JSON formatter with tipi is cool ! " << std::endl;

  auto json = nlohmann::json::parse(argv[1]);
  std::cout << json.dump(4) << std::endl;
  return 0; 
}