#include <iostream>

/*
    Let's build it also for another platform, let say linux !
 */

#include <nlohmann/json.hpp> // tipi.build will find it online

int main(int argc, char** argv) {

  std::cout << "Wonderful JSON formatter with tipi is cool ! " << std::endl;

  auto json = nlohmann::json::parse(argv[1]);
  std::cout << json.dump(2) << std::endl;
  return 0;
}