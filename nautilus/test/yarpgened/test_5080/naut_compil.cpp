/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5080
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5080
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
void test(val<unsigned char> var_6, val<unsigned char> var_7, val<signed char> var_10, val<unsigned long long int> var_12, val<int> zero, val<unsigned short*> var_13, val<unsigned short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) max((((((/* implicit */val<bool>) (-(4294967295U)))) ? (max((((/* implicit */val<unsigned long long int>) var_6)), (var_12))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned int>) 1453035985)) : (2538691245U)))))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) var_6)), (((((/* implicit */val<int>) var_7)) & (((/* implicit */val<int>) (val<short>)-11496)))))))));
    *var_14 = ((/* implicit */val<unsigned short>) min((*var_14), (((/* implicit */val<unsigned short>) 1756276051U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)203;
unsigned char var_7 = (unsigned char)182;
signed char var_10 = (signed char)52;
unsigned long long int var_12 = 14178975125906054779ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)4918;
unsigned short var_14 = (unsigned short)18290;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)56955;
    value_mismatch |= var_14 != (unsigned short)18290;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
