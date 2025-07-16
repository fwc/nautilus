#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
unsigned int var_3 = 847848521U;
unsigned int var_4 = 4131743101U;
long long int var_7 = 5651007851781001195LL;
int zero = 0;
unsigned short var_10 = (unsigned short)42617;
int var_11 = 1929698655;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test(unsigned char var_1, unsigned int var_3, unsigned int var_4, long long int var_7, int zero);

int main() {
    init();
    test(var_1, var_3, var_4, var_7, zero);
    checksum();
    printf("%llu\n", seed);
}
