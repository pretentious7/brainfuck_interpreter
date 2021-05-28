// To implement, one func takes current cell ptr, instruction and returns next
// cell pointer to interpreter, which is going through instructions one by one.

// so this is intended to be a pointer to a function that takes a cell pointer
// and returns a new cell pointer after performing operation
#include <stdio.h>
typedef int *(*DoOp)(int *, ...);

int *shiftLeft(int *cell_ptr) {
    return cell_ptr--;
}

int *shiftRight(int *cell_ptr) {
    return cell_ptr++;
}

int * incr(int *cell_ptr) {
    (*cell_ptr)++;
    return cell_ptr;
}

int *decr(int *cell_ptr) {
    (*cell_ptr)--;
    return cell_ptr;
}

int *putcharbf(int *cell_ptr, char a) {
    *cell_ptr = a;
    return cell_ptr;
}

int main(int argc, char **argv)
{
    char *ps= argv[0];
    char *mptr = &ps[0];
    int memArr[1000] = {0};
    int *ptr = &memArr[0];
    while (*mptr++)
    {
        switch(*mptr){
            case '+':
                incr(ptr);
                break;
            case '-':
                decr(ptr);
                break;
            case '>':
                shiftRight(ptr);
                break;
            case '<':
                shiftLeft(ptr);
                break;
            case ',':
                *ptr = getchar();
                break;
            case '.':
                printf("%d",*ptr);
                break;
        }
    }
}
