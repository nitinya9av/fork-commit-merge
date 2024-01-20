#include <stdio.h>
#include <stdlib.h>

typedef int *IntArr;
typedef struct {
    int length;
    IntArr list;
} Stack;

/**
 * TODO: write functions for:
 * appending and element to Stack,
 * pop last element from Stack,
 * access an element from Stack at certain index
 * find element in Stack