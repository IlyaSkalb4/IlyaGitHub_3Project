#pragma once

#include <iostream>
using namespace std;

#ifdef INT
void init_random_int(int* arr, int s);
void print_int(int* arr, int s);
int getmax_int(int* arr, int s);
int getmin_int(int* arr, int s);
void sort_int(int* arr, int s);
void change_int(int* arr, int s, int num);
#define init_random(arr,s) init_random_int(arr,s)
#define print(arr,s) print_int(arr,s)
#define getmax(arr,s) getmax_int(arr,s)
#define getmin(arr,s) getmin_int(arr,s)
#define sort(arr,s) sort_int (arr,s)
#define change(arr,s, num) change_int(arr,s, num)
#endif