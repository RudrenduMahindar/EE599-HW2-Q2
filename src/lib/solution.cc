#include "solution.h"
using namespace std;

int Solution::arraysize(int* arr,int n) { 
  return (n/sizeof(int)); 
}

int Solution::arraysize(float* arr,int n) { 
  return (n/sizeof(float)); 
}

int Solution::arraysize(char* arr,int n) { 
  return (n/sizeof(char)); 
}