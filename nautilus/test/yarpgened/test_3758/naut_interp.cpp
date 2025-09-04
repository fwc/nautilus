/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3758
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3758
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
void test(val<bool> var_0, val<unsigned char> var_6, val<short> var_13, val<signed char> var_15, val<int> zero, val<long long int*> var_17, val<signed char*> var_18, val<int*> var_19, val<unsigned short*> var_20) {
    *var_17 = ((/* implicit */val<long long int>) var_15);
    *var_18 = ((/* implicit */val<signed char>) var_0);
    *var_19 = min((((((/* implicit */val<int>) var_0)) - (((/* implicit */val<int>) var_13)))), (((/* implicit */val<int>) var_0)));
    *var_20 = ((/* implicit */val<unsigned short>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_6 = (unsigned char)58;
short var_13 = (short)8682;
signed char var_15 = (signed char)-108;
int zero = 0;
long long int var_17 = 8889817066882948361LL;
signed char var_18 = (signed char)106;
int var_19 = 1667309175;
unsigned short var_20 = (unsigned short)17531;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -108LL;
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != -8681;
    value_mismatch |= var_20 != (unsigned short)58;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_13, var_15, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
