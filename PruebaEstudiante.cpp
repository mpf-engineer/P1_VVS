#include "PruebaEstudiante.hpp"
#include "Estudiante.hpp"

// We registrer the test suite in the "registry"
CPPUNIT_TEST_SUITE_REGISTRATION(PruebaEstudiante);


void PruebaEstudiante::setUp() {}

void PruebaEstudiante::tearDown() {}

void PruebaEstudiante::testConstructorEstudiante()
{
    // Configuration
    const std::string e_Nombre = "Marcos";
    const std::string e_Numero = "22";

    // Processing
    Estudiante estudiante(e_Nombre, e_Numero);

    // Verification
    CPPUNIT_ASSERT(e_Nombre == estudiante.obtenerNombreEstudiante());
    CPPUNIT_ASSERT(e_Numero == estudiante.obtenerNumeroEstudiante());
}

void PruebaEstudiante::testAsignarCalificacion()
{
    // Configuration
    const std::string e_Nombre = "Marcos";
    const std::string e_Numero = "22";

    // Processing
    Estudiante estudiante(e_Nombre, e_Numero);
    estudiante.asignarCalificacion("PCTR", 4);
    estudiante.asignarCalificacion("VVS", 10);
    estudiante.asignarCalificacion("IR", 9);

    // Verification
    CPPUNIT_ASSERT(4 == estudiante.obtenerCalificacion("PCTR"));
    CPPUNIT_ASSERT(10 == estudiante.obtenerCalificacion("VVS"));
    CPPUNIT_ASSERT(9 == estudiante.obtenerCalificacion("IR"));
}

