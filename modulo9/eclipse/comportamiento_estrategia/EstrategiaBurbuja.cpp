/*
 * EstrategiaBurbuja.cpp
 *
 *  Created on: 16 oct. 2019
 *      Author: antonio
 */

#include "EstrategiaBurbuja.h"

EstrategiaBurbuja::EstrategiaBurbuja() {
	// TODO Auto-generated constructor stub

}

void EstrategiaBurbuja::ordenar(int* array, int size) {
	// burbuja
		int i;
		int j;
		int aux_elem;

		for (i = 0; i < size - 1; i++)
		{
			for (j = i+1; j < size; j++)
			{
				if (array[i] > array[j])
				{
					aux_elem = array[i];
					array[i] = array[j];
					array[j] = aux_elem;
				}
			}
		}
}

EstrategiaBurbuja::~EstrategiaBurbuja() {
	// TODO Auto-generated destructor stub
}

