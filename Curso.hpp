#ifndef _CURSO_HPP_
#define _CURSO_HPP_

#include <string>

class Curso
{
 public:
    Curso();
    Curso(std::string n, int c);
    std::string obtenerNombreCurso();
    int obtenerCalificacionCurso();
 private:
    std::string nombre_curso;
    int calificacion;
};

#endif

