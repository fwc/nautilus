/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1240
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1240
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned long long int> var_0, val<unsigned int> var_1, val<unsigned long long int> var_2, val<bool> var_3, val<bool> var_4, val<unsigned int> var_5, val<unsigned int> var_7, val<long long int> var_8, val<unsigned long long int> var_9, val<int> var_10, val<long long int> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<unsigned long long int*> var_16, val<unsigned char*> var_17, val<unsigned int*> var_18) {
    *var_14 = ((/* implicit */val<unsigned char>) (-(((var_9) ^ (((/* implicit */val<unsigned long long int>) ((var_3) ? (var_5) : (var_7))))))));
    *var_15 = ((/* implicit */val<unsigned char>) min((*var_15), (((/* implicit */val<unsigned char>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) 795305398832547270LL)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) : (795305398832547274LL))) : (((/* implicit */val<long long int>) max((var_7), (var_7))))))), ((~(((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) var_8)) : (var_0))))))))));
    *var_16 *= ((/* implicit */val<unsigned long long int>) min((((min((var_11), (((/* implicit */val<long long int>) var_5)))) | (((/* implicit */val<long long int>) var_5)))), (((/* implicit */val<long long int>) var_12))));
    *var_17 = ((/* implicit */val<unsigned char>) var_7);
    *var_18 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) ((val<unsigned long long int>) var_7))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) var_10)), (var_11)))) : (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned long long int>) var_8)) : (var_2))))) >> (((/* implicit */val<int>) ((((/* implicit */val<int>) ((var_10) >= (((/* implicit */val<int>) var_12))))) == (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_4)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4684143647707902181ULL;
unsigned int var_1 = 2249553390U;
unsigned long long int var_2 = 16387730163986322314ULL;
bool var_3 = (bool)0;
bool var_4 = (bool)1;
unsigned int var_5 = 972682465U;
unsigned int var_7 = 2713606728U;
long long int var_8 = -2153896729826516598LL;
unsigned long long int var_9 = 12700734493929658758ULL;
int var_10 = 456022541;
long long int var_11 = 3732537729112025141LL;
unsigned short var_12 = (unsigned short)63850;
int zero = 0;
unsigned char var_14 = (unsigned char)250;
unsigned char var_15 = (unsigned char)4;
unsigned long long int var_16 = 13828107226325885503ULL;
unsigned char var_17 = (unsigned char)155;
unsigned int var_18 = 2469435088U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)50;
    value_mismatch |= var_15 != (unsigned char)4;
    value_mismatch |= var_16 != 8134800947520369942ULL;
    value_mismatch |= var_17 != (unsigned char)72;
    value_mismatch |= var_18 != 456022541U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
