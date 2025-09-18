/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8701
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8701
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
void test(val<signed char> var_3, val<signed char> var_5, val<unsigned int> var_6, val<signed char> var_9, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_11 += ((/* implicit */val<long long int>) min((max((((((/* implicit */val<bool>) var_3)) ? (var_6) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))))), (min((((/* implicit */val<unsigned int>) (val<bool>)1)), (4294967295U))))), (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))), ((+(((/* implicit */val<int>) var_3)))))))));
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) 11788193637581023132ULL)) ? (16743486010113330615ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-6652)))));
    *var_13 = ((/* implicit */val<unsigned short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-76;
signed char var_5 = (signed char)84;
unsigned int var_6 = 3645942617U;
signed char var_9 = (signed char)100;
int zero = 0;
long long int var_11 = 3456778743544503857LL;
unsigned short var_12 = (unsigned short)44321;
unsigned short var_13 = (unsigned short)55340;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 3456778747190446474LL;
    value_mismatch |= var_12 != (unsigned short)3511;
    value_mismatch |= var_13 != (unsigned short)65460;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
}
