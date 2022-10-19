#include <stdio.h>

// Test pointers, change the value of an int variable using the pointer px
//Pass an array parameter using a pointer
//write the swap function
//write a function to allocate an array of 10 ints using malloc(), and see if the values are initialized to 0;

#include <stdio.h>
#include <stdlib.h>

//function declaration
//void swap(int arr);
void swap(int *arr) {
    int z = *arr;
    int y = arr[1];

    *arr = y;
    arr[1] = z;
}
struct square {
    int len;
    int area;
} sq1;

struct rect {
    int len;
    int width;
    int area;

} rect1;

struct circle {
    float radius;
    float area;
} circ1;
//Define 3 structs: square, rect, and circle. T
// hen, write 3 functions area_sq(), area_rect(), and area_circ()
// to compute and return the area for the respective shape.

int area_sq(struct square sq) {
    return sq.len * sq.len;

}
int area_rect(struct rect rect1) {
    return rect1.len * rect1.width;
}

float area_circ(struct circle circ) {
    float pi = 3.14;
    return(pi * (2 * circ.radius));
}

int main(int argc, char *args[]) {
    int x;
    int *ptr;
    int arr[2] = {9, 24};
    int *arr_ptr, *arr2_ptr;


    x = 3;
    printf("The value of x is: %d\n", x);

    ptr = &x; //set pointer to point to x
    *ptr = 12; //change x's value with pointer
    printf("Now the value of x is: %d\n", x);

    //arr_ptr = &arr;

    swap(arr);
    printf("Here is the arr0: %d and arr1: %d\n", arr[0], arr[1]);

    arr2_ptr = malloc(sizeof(int)* 10);

    for(int i = 0; i < 10; i++) {
        printf("Array[%d] = %d\n", i, arr2_ptr[i]);

    }
    sq1.len = 4;
    rect1.len = 8;
    rect1.width = 2;
    circ1.radius = 3;

    sq1.area = area_sq(sq1);
    rect1.area = area_rect(rect1);
   circ1.area = area_circ(circ1);

    printf("Square length: %d, Square area: %d\n", sq1, sq1.area);
    printf("Rectangle length: %d, Rectangle width %d, Rectangle area: %d\n", rect1.len, rect1.width, rect1.area);
    printf("Circle radius: %f, Circle area: %f\n", circ1.radius, circ1.area);

}

