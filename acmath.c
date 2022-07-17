//acmath.c
// 
//      Copyright © 2022 Austin Xu,All rights reserved.
//
//This is C/C++ library <acmath.c> of math compute.
#pragma once
#include <acmath.h>
unsigned __int64 pown(unsigned __int64 x, unsigned __int64 n ) {
	unsigned  __int64 result = 1;
	for (unsigned __int64 i = 0; i < n; i++) { result = result * x; } 
	return result; }
unsigned __int64 sqr(unsigned __int64 x) {
	return pown(x, 2);}
unsigned __int64 cub(unsigned __int64 x) {
	return pown(x, 3);}
unsigned __int64 gcd(unsigned __int64 x, unsigned __int64 y) {
	if (x == 0 || y == 0) { throw(0);}
	unsigned __int64 t, r = 1;
	if (x < y) { t = x; x = y; y = t; }
	while ((x % y) != 0) {r = x % y; x = y; y = r;}return y; }
unsigned __int64 lcm(unsigned __int64 x, unsigned __int64 y) {
	return x*y/gcd(x, y); }