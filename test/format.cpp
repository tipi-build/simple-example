#include <iostream>
#include <cassert>
#include <boost/predef.h> 

#include <nlohmann/json.hpp>

const std::string expected = 
R"({
      "tipi.build": "Code, [Re]use, Build!"
})";

int main(int argc, char** argv) {

  auto json = nlohmann::json::parse(R"({ "tipi.build" : "Code, [Re]use, Build!" })");

  #if BOOST_OS_LINUX
    auto formatted = json.dump(6);
  #elif BOOST_OS_MACOS
    auto formatted = json.dump(6);
  #else
    auto formatted = json.dump(6);
  #endif
  // hello
  std::cout  << "Dump: '" <<  formatted << "'" << std::endl;
  std::cout << "Expected: '" << expected << "'" << std::endl;

  assert(formatted == expected);
  return 0;
}
