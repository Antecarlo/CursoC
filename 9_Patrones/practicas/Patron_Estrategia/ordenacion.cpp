void Sort(string* array, int size)
{
	// inserción directa
	int i, j, min;
	string str;

	for (i = 0; i < size-1; i++)
	{
		min = i;
		for (j=i+1 ; j < size ; j++){
			if (array[j] < array[min])
				min = j;
		}
	   
		str = array[i];
		array[i] = array[min];
		array[min] = str;
	}
}
		
		
void Sort(string* array, int size)
{
	// burbuja
	int i;
	int j;
	string aux_elem;
	
	for (int i = 0; i < size - 1; i++)
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

