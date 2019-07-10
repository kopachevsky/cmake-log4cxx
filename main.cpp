#include <iostream>
#include "log4cxx/logger.h"
#include "log4cxx/propertyconfigurator.h"
#include "log4cxx/helpers/exception.h"


using namespace log4cxx;
using namespace log4cxx::helpers;

LoggerPtr logger(Logger::getLogger("MyApp"));

int main() {
    PropertyConfigurator::configure("/Users/kopachevsky/CLionProjects/untitled/log.properties");
    LOG4CXX_INFO(logger, "Simple message text.")
    return 0;
}