/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2035
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2035
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
void test(val<short> var_0, val<bool> var_3, val<short> var_4, val<int> var_6, val<unsigned long long int> var_8, val<long long int> var_17, val<short> var_19, val<int> zero, val<short*> var_20, val<int*> var_21, val<int*> var_22, val<unsigned char*> var_23) {
    *var_20 = ((/* implicit */val<short>) (((!(((/* implicit */val<bool>) (val<short>)-23981)))) ? (min((((/* implicit */val<unsigned long long int>) ((((var_17) + (9223372036854775807LL))) >> (((((/* implicit */val<int>) (val<short>)15694)) - (15639)))))), ((+(282732681933364919ULL))))) : (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) var_0)) > (((/* implicit */val<int>) var_19)))) ? (((((/* implicit */val<bool>) var_8)) ? (4294967291U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))))))));
    *var_21 = ((/* implicit */val<int>) var_4);
    *var_22 = ((/* implicit */val<int>) var_3);
    *var_23 = ((/* implicit */val<unsigned char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23809;
bool var_3 = (bool)0;
short var_4 = (short)28188;
int var_6 = -1529855756;
unsigned long long int var_8 = 9039927115373166106ULL;
long long int var_17 = -3963897425417316677LL;
short var_19 = (short)-9237;
int zero = 0;
short var_20 = (short)-14192;
int var_21 = -1755965503;
int var_22 = 1508403226;
unsigned char var_23 = (unsigned char)36;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-5;
    value_mismatch |= var_21 != 28188;
    value_mismatch |= var_22 != 0;
    value_mismatch |= var_23 != (unsigned char)244;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_8, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
