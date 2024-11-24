#include <stdio.h>

int binary_search(int sorted_list[], int size, int target) {
	int left = 0, right = size - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (sorted_list[mid] == target) {
			return mid;
		} else if (sorted_list[mid] < target) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}

	return -1;
}

int main() {
	int lista[] = {1, 3, 5, 7, 9, 11, 13, 15};
	int tamanho = sizeof(lista) / sizeof(lista[0]);
	int alvo = 7;

	int indice = binary_search(lista, tamanho, alvo);

	if (indice != -1) {
		printf("C
ndice do elemento %d: %d\n", alvo, indice);
	} else {
		printf("Elemento %d nC#o encontrado na lista.\n", alvo);
	}

	return 0;
}

/*
 O Binary Search depende de dividir a lista repetidamente em duas metades para 
 determinar em qual metade o elemento buscado pode estar. Para isso funcionar, 
 é necessário que os elementos sigam uma ordem definida. Caso contrário, o algoritmo 
 não consegue garantir em qual lado está o elemento buscado, comprometendo a eficiência 
 e a funcionalidade.
*/
