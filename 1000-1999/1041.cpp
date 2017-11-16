#include <cstdio>

#define totalPrice 6.789

int main(int argc, char const *argv[]){
	double price;
	for (int i = 1; i < 10; ++i){
		price = i*10+totalPrice+1.0/10000;
		printf("%.2lf\n", price/72);
		
	}
	return 0;
}