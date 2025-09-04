/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9247
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9247
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
void test(val<unsigned int> var_0, val<unsigned long long int> var_2, val<unsigned short> var_7, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_12, val<long long int*> var_13, val<signed char*> var_14) {
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? ((-(((/* implicit */val<int>) var_11)))) : (((/* implicit */val<int>) var_7))));
    *var_13 -= ((/* implicit */val<long long int>) var_0);
    *var_14 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3253983467U;
unsigned long long int var_2 = 12333261611667120560ULL;
unsigned short var_7 = (unsigned short)12073;
unsigned short var_11 = (unsigned short)64745;
int zero = 0;
unsigned short var_12 = (unsigned short)12309;
long long int var_13 = -355305390334678732LL;
signed char var_14 = (signed char)-10;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)791;
    value_mismatch |= var_13 != -355305393588662199LL;
    value_mismatch |= var_14 != (signed char)-21;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
