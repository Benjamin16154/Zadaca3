#pragma once
#include <stdlib.h>
#include <sys/ioctl.h>
#include <time.h>
#include <chrono>
#include <ctime>
#include <functional>
#include <iostream>
#include <thread>

size_t terminal_colums();
int **kreirajMatricu(const int&,const int&);
void ispisiMatricu(int **,const int&, const int&);
void spacer();
void pronadjiGlavnuDijagonalu(int **,const int&, const int&);
void pronadjiSporednuDijagonlu(int **,const int&, const int&);
void saberiMatrice(int **, int **, const int&, const int&, const int&, const int&);
void pomnoziMatricu(int **, int **, const int&, const int&, const int&, const int&);
