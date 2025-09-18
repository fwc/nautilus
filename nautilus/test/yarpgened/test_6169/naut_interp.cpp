/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6169
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6169
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
void test(val<unsigned short> var_0, val<unsigned char> var_4, val<int> zero, val<unsigned short*> var_14, val<unsigned int*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned short>) ((val<unsigned int>) var_4));
    *var_15 |= ((/* implicit */val<unsigned int>) var_4);
    *var_16 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49563;
unsigned char var_4 = (unsigned char)203;
int zero = 0;
unsigned short var_14 = (unsigned short)27421;
unsigned int var_15 = 1288473968U;
signed char var_16 = (signed char)-81;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)203;
    value_mismatch |= var_15 != 1288474107U;
    value_mismatch |= var_16 != (signed char)-101;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, zero, &var_14, &var_15, &var_16);
  checksum();
}
