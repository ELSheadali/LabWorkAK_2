#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

//Here will be my part of code
//This was written in the end off all tasks
//It will be doing just a simple division
//Made by Denys Makarenko
int Division::Mul (double a, double b)
{
    return a / b + 0.5;
}
