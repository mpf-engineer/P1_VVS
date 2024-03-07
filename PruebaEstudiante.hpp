#ifndef _PRUEBAESTUDIANTE_HPP_
#define _PRUEBAESTUDIANTE_HPP_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

class PruebaEstudiante : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(PruebaEstudiante);
    CPPUNIT_TEST(testConstructorEstudiante);
    CPPUNIT_TEST(testAsignarCalificacion);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

    void testConstructorEstudiante();
    void testAsignarCalificacion();
};

#endif
