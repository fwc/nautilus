/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9529
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9529
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<unsigned long long int> var_1, val<unsigned int> var_4, val<unsigned long long int> var_5, val<unsigned short> var_8, val<int> zero, val<unsigned long long int*> var_10, val<unsigned short*> var_11, val<unsigned int*> var_12, val<long long int*> var_13) {
    *var_10 += ((/* implicit */val<unsigned long long int>) var_8);
    *var_11 = ((/* implicit */val<unsigned short>) var_4);
    *var_12 = ((/* implicit */val<unsigned int>) var_5);
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_8))) - (((var_5) & (var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4182130229658309259ULL;
unsigned int var_4 = 4020559808U;
unsigned long long int var_5 = 12515258943224301229ULL;
unsigned short var_8 = (unsigned short)4336;
int zero = 0;
unsigned long long int var_10 = 1807702888711849964ULL;
unsigned short var_11 = (unsigned short)19702;
unsigned int var_12 = 2808484221U;
long long int var_13 = -6238138426701996575LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1807702888711854300ULL;
    value_mismatch |= var_11 != (unsigned short)57280;
    value_mismatch |= var_12 != 1055540909U;
    value_mismatch |= var_13 != -2884873325394276761LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_8, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
