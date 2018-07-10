#include "sum.h"

int sum(int n){

	int sum_ = 0;

	for(int i = 0; i <= n; i++){
		sum_ += i;
	}

	return sum_;
}
