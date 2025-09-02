/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3486
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3486
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
void test(val<unsigned short> var_6, val<long long int> var_8, val<long long int> var_10, val<int> zero, val<short*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<short>) ((val<signed char>) max(((((val<bool>)0) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_10))), (((/* implicit */val<long long int>) max((((/* implicit */val<int>) (val<unsigned short>)13256)), (1107529381)))))));
    *var_14 = ((/* implicit */val<int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)51197;
long long int var_8 = -2021047057223325503LL;
long long int var_10 = -2869679667310263867LL;
int zero = 0;
short var_13 = (short)5047;
int var_14 = -1752979501;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-91;
    value_mismatch |= var_14 != -807737151;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
