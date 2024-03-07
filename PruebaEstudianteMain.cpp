#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/TextOutputter.h>
#include "PruebaEstudiante.hpp"

int main()
{
    // Get the top level suite from the registry
    CppUnit::Test *suite = CppUnit::TestFactoryRegistry::getRegistry().makeTest();

    // Create a test runner
    CppUnit::TextUi::TestRunner runner;

    // Add the suite to the test runner
    runner.addTest(suite);

    // Set the outputter for the runner
    runner.setOutputter(new CppUnit::TextOutputter(&runner.result(), std::cerr));

    // Run the tests
    bool wasSuccessful = runner.run();

    // Return 0 if all tests passed, 1 otherwise
    return wasSuccessful ? 0 : 1;
}

