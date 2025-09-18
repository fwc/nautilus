/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1304
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1304
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
void test(val<signed char> var_1, val<unsigned char> var_5, val<unsigned int> var_8, val<signed char> var_13, val<int> zero, val<unsigned short*> var_20, val<int*> var_21, val<long long int*> var_22) {
    *var_20 += ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_13))));
    *var_21 = ((/* implicit */val<int>) var_8);
    *var_22 = ((/* implicit */val<long long int>) max((*var_22), (((/* implicit */val<long long int>) min(((-(((/* implicit */val<int>) min((var_5), (((/* implicit */val<unsigned char>) var_1))))))), (((/* implicit */val<int>) var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)98;
unsigned char var_5 = (unsigned char)122;
unsigned int var_8 = 1040467131U;
signed char var_13 = (signed char)113;
int zero = 0;
unsigned short var_20 = (unsigned short)39848;
int var_21 = -858751363;
long long int var_22 = 6675554565384144057LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)39734;
    value_mismatch |= var_21 != 1040467131;
    value_mismatch |= var_22 != 6675554565384144057LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_8, var_13, zero, &var_20, &var_21, &var_22);
  checksum();
}
