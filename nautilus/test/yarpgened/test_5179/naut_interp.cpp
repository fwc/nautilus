/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5179
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5179
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
void test(val<bool> var_0, val<short> var_1, val<short> var_3, val<bool> var_6, val<long long int> var_13, val<int> zero, val<unsigned long long int*> var_16, val<short*> var_17, val<signed char*> var_18, val<unsigned short*> var_19) {
    *var_16 = ((/* implicit */val<unsigned long long int>) var_6);
    *var_17 -= ((/* implicit */val<short>) ((val<unsigned long long int>) ((var_13) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))))));
    *var_18 -= ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_1)) == (((/* implicit */val<int>) var_0))));
    *var_19 &= ((/* implicit */val<unsigned short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
short var_1 = (short)-14458;
short var_3 = (short)18684;
bool var_6 = (bool)0;
long long int var_13 = -3944832543162236997LL;
int zero = 0;
unsigned long long int var_16 = 10890603672252763365ULL;
short var_17 = (short)5514;
signed char var_18 = (signed char)-12;
unsigned short var_19 = (unsigned short)60134;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != (short)5513;
    value_mismatch |= var_18 != (signed char)-12;
    value_mismatch |= var_19 != (unsigned short)18660;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_13, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
