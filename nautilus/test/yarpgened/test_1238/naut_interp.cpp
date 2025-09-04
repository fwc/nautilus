/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1238
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1238
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
void test(val<signed char> var_0, val<unsigned short> var_4, val<short> var_5, val<unsigned int> var_7, val<bool> var_9, val<unsigned char> var_10, val<signed char> var_11, val<int> zero, val<bool*> var_12, val<unsigned int*> var_13, val<bool*> var_14) {
    *var_12 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) ? ((+(((/* implicit */val<int>) var_10)))) : (((/* implicit */val<int>) var_11))))) ^ (((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned char>)151)) << (((((/* implicit */val<int>) var_0)) - (21)))))) ? (((((/* implicit */val<bool>) 4039680508U)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_9))) : (var_7))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5)))))));
    *var_13 = ((/* implicit */val<unsigned int>) var_11);
    *var_14 = (((((~(8727954971826667160ULL))) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_10)) <= (((/* implicit */val<int>) var_10)))))))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned short var_4 = (unsigned short)49134;
short var_5 = (short)28753;
unsigned int var_7 = 1311085077U;
bool var_9 = (bool)1;
unsigned char var_10 = (unsigned char)8;
signed char var_11 = (signed char)-51;
int zero = 0;
bool var_12 = (bool)1;
unsigned int var_13 = 4293012692U;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)1;
    value_mismatch |= var_13 != 4294967245U;
    value_mismatch |= var_14 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_7, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
