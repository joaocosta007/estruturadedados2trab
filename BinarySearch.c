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

    return -1; 
}

int main() {
    int lista[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int alvo = 7;

    int indice = binary_search(lista, tamanho, alvo);

    if (indice != -1) {
        printf("Índice do elemento %d: %d\n", alvo, indice);
    } else {
        printf("Elemento %d não encontrado na lista.\n", alvo);
    }

    return 0;
}
