/*
 * EstrategiaDirecta.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "EstrategiaDirecta.h"

EstrategiaDirecta::EstrategiaDirecta() {
	// TODO Auto-generated constructor stub

}

void EstrategiaDirecta::ordenar(int* array, int n) {

	// inserción directa
		int i, j, min;
		int str;

		for (i = 0; i < n-1; i++)
		{
			min = i;
			for (j=i+1 ; j < n ; j++){
				if (array[j] < array[min])
					min = j;
			}

			str = array[i];
			array[i] = array[min];
			array[min] = str;
		}
}

EstrategiaDirecta::~EstrategiaDirecta() {
	// TODO Auto-generated destructor stub
}



