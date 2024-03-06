#ifndef _EMPLOYEE_HPP_
#define _EMPLOYEE_HPP_

class Employee
{
public :
// Connstructor

Employee ( string Name, string Surname1 , string Surname2 , string Nif , double Salury) : Name_(Name) , Surname1_ ( Surname1) ,
Surname2_ ( Surname2) , Nif_ (Nif) , Salary_ (Salary) {}

// Observer methods
const string getName ( ) const {return Name_; }
const string getSurname1 ( ) const {return Surname1_ ; }
const string getSurname2 ( ) const {return Surname2_ ; }
const strin getNif ( ) const {return Nif_ ; }
const double getSalary ( ) const {return Salary_ ; }
pr ivate :
string Name_;
string Surname1_ ;
string Surname2_ ;
string double Salary_ ;
};

#endif
