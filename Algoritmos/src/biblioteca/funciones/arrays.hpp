/*
 * arrays.hpp
 *
 *  Created on: 13 sep. 2021
 *      Author: neur0tik
 */

#ifndef SRC_BIBLIOTECA_FUNCIONES_ARRAYS_HPP_
#define SRC_BIBLIOTECA_FUNCIONES_ARRAYS_HPP_

#include <iostream>

template <typename T>
int add(T arr[],int& len,T e)
{
   return 0;
}

template <typename T>
void insert(T arr[],int& len,T e,int p)
{
}

template <typename T>
T remove(T arr[],int& len,int p)
{
   T ret;
   return ret;
}

template <typename T, typename K>
int find(T arr[],int len,K k,int cmpTK(T,K))
{
   return 0;
}

template <typename T>
int orderedInsert(T arr[],int& len,T e,int cmpTT(T,T))
{
   return 0;
}

template <typename T>
void sort(T arr[],int len,int cmpTT(T,T))
{
   return;
}

#endif /* SRC_BIBLIOTECA_FUNCIONES_ARRAYS_HPP_ */
