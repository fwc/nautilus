/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6571
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6571
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
void test(val<unsigned short> var_1, val<signed char> var_3, val<unsigned short> var_9, val<signed char> var_12, val<int> zero, val<unsigned long long int*> var_15, val<unsigned short*> var_16, val<int*> var_17, val<unsigned long long int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned long long int>) var_12);
    *var_16 -= ((/* implicit */val<unsigned short>) max((((((/* implicit */val<int>) ((((/* implicit */val<int>) var_1)) != (((/* implicit */val<int>) var_12))))) ^ (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) (val<short>)25943)), ((val<unsigned short>)65535)))))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) max((16849050840685564499ULL), (((/* implicit */val<unsigned long long int>) var_9))))))))));
    *var_17 = ((/* implicit */val<int>) (~(16849050840685564499ULL)));
    *var_18 = ((/* implicit */val<unsigned long long int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43409;
signed char var_3 = (signed char)-102;
unsigned short var_9 = (unsigned short)46811;
signed char var_12 = (signed char)-47;
int zero = 0;
unsigned long long int var_15 = 7214540693939420026ULL;
unsigned short var_16 = (unsigned short)15579;
int var_17 = 1074479667;
unsigned long long int var_18 = 3570490977411325387ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18446744073709551569ULL;
    value_mismatch |= var_16 != (unsigned short)55173;
    value_mismatch |= var_17 != -831476308;
    value_mismatch |= var_18 != 18446744073709551514ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_9, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
