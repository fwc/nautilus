/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8189
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8189
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
void test(val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned char> var_8, val<unsigned long long int> var_9, val<int> zero, val<unsigned short*> var_10, val<long long int*> var_11, val<unsigned long long int*> var_12, val<long long int*> var_13, val<int*> var_14) {
    *var_10 = ((/* implicit */val<unsigned short>) max((*var_10), (((/* implicit */val<unsigned short>) 262143))));
    *var_11 ^= ((/* implicit */val<long long int>) var_3);
    *var_12 = var_9;
    *var_13 += ((/* implicit */val<long long int>) var_8);
    *var_14 = ((/* implicit */val<int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)180;
unsigned char var_3 = (unsigned char)252;
unsigned char var_8 = (unsigned char)113;
unsigned long long int var_9 = 10173720502810909654ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)30365;
long long int var_11 = 1191582318137617761LL;
unsigned long long int var_12 = 2522450391997785415ULL;
long long int var_13 = -4996656127004199172LL;
int var_14 = -960339616;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)65535;
    value_mismatch |= var_11 != 1191582318137617821LL;
    value_mismatch |= var_12 != 10173720502810909654ULL;
    value_mismatch |= var_13 != -4996656127004199059LL;
    value_mismatch |= var_14 != 180;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
