#include <stdio.h>
#include <time.h>
#include <stdlib.h>


// Prints the vector on screen
void print_vector(int *vector, int size) {
    for (int i = 0; i < size; i++) {printf("vetor[%d] = %d\n", i, vector[i]);}
}


// Inverts the vector
void invert_vector(int *vector, int size) {   
    // Auxiliary variable to help with the exchange.
    int swap;

    for (int i = 0; i < size / 2; i++) {
        // I story the first element of the array in the 'swap' variable so as not lose its contents.
        swap = vector[i];
        vector[i] = vector[size - i -1]; // size - i - 1 -> Used to get the inverse index
        vector[size - i - 1] = swap;
    }

}


int main (void) {

    // VECTOR SIZE
    const int size_vector = 100;

    // set a seed
    srand(time(NULL));

    int vector[size_vector];
    // populating vector with random data
    for (int i = 0; i < size_vector; i++) {
        vector[i] = rand() % 100;
    }

    printf("\nOriginal vector:\n");
    print_vector(vector, size_vector);

    invert_vector(vector, size_vector);
    printf("\nVector inverted:\n");

    print_vector(vector, size_vector);
}