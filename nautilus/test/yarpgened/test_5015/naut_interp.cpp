/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5015
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5015
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
void test(val<long long int> var_4, val<signed char> var_8, val<int> zero, val<unsigned short*> var_10, val<signed char*> var_11, val<int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((val<unsigned short>) var_8)))));
    *var_11 = ((/* implicit */val<signed char>) var_4);
    *var_12 = ((/* implicit */val<int>) ((val<signed char>) ((val<unsigned short>) (+(463286733U)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 2582485851141863450LL;
signed char var_8 = (signed char)2;
int zero = 0;
unsigned short var_10 = (unsigned short)13969;
signed char var_11 = (signed char)90;
int var_12 = 1241467351;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)0;
    value_mismatch |= var_11 != (signed char)26;
    value_mismatch |= var_12 != -51;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
