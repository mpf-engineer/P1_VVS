#ifndef _ESTUDIANTE_HPP_
#define _ESTUDIANTE_HPP_

#include <iostream>
#include <string>
#include "Curso.hpp"

const int MAXNUMCURSOSPORESTUDIANTE = 15;

class Estudiante
{
 public:
    Estudiante(std::string n, std::string num);
    std::string obtenerNombreEstudiante();
    std::string obtenerNumeroEstudiante();
    void asignarCalificacion(std::string curso, int calif);
    int obtenerCalificacion(std::string curso);
 private:
    std::string nombre;
    std::string numero;
    Curso curso_calificaciones[MAXNUMCURSOSPORESTUDIANTE];
    int numero_cursos;
};

#endif
