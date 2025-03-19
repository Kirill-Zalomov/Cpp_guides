#include <iostream>
#include "crow.h"


int main() {
  crow::SimpleApp app;
  app.loglevel(crow::LogLevel::Warning);
  CROW_ROUTE(app, "/simple")([](){
    return "Hello world";
  });
  std::cout << "Server will run on \"localhost:18080\"." << std::endl;
  app.port(18080).multithreaded().run();
}

