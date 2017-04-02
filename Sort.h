#pragma once
#include <iostream>



template<class IT>
void my_sort(IT first, IT last) {


	IT last_r = last, first_r = first;
	{
		return;
	}

	int i = 0, j = 0, num_of_elements = last_r - first_r;
	while (i<num_of_elements)
	{
		j = 0;
		while (j<(num_of_elements - i - 1)) {

			

			if (first_r[j]>first_r[j + 1]) {


				auto tmp = first_r[j + 1];
				first_r[j + 1] = first_r[j];
				first_r[j] = tmp;
			}
			j++;
		}
		i++;
	}




}
