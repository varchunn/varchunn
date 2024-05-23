#pragma once
#include <iostream>
#ifndef FUNCTION_H
#define FUNCTION_H
#ifdef INTEGER
typedef int DataType;
#elif defined DOUBLE
typedef double DataType;
#elif defined CHAR
typedef char DataType;
#endif
template<typename T>
void createMass(T mass[], int size);
template<typename T>
void coutMass(T mass[], int size);
template<typename T>
T minimum(T mass[], int size);
template<typename T>
T maximum(T mass[], int size);
template<typename T>
void MassSort(T mass[], int size);
template<typename T>
void redMass(T mass[], int size);
#ifdef INTEGER
#define show showInt
#elif defined DOUBLE
#define show showDouble
#elif defined CHAR
#define show showChar
#endif
#endif
