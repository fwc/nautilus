/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8509
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8509
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
void test(val<short> var_3, val<short> var_4, val<unsigned short> var_8, val<unsigned short> var_9, val<int> zero, val<unsigned short*> var_10, val<unsigned long long int*> var_11, val<unsigned short*> var_12, val<int*> var_13) {
    *var_10 = ((/* implicit */val<unsigned short>) var_3);
    *var_11 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (+((+(((/* implicit */val<int>) var_3))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_9))))))))) : (((val<unsigned int>) ((((/* implicit */val<int>) (val<short>)32548)) < (((/* implicit */val<int>) (val<short>)24256)))))));
    *var_12 &= ((/* implicit */val<unsigned short>) var_4);
    *var_13 = ((/* implicit */val<int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20635;
short var_4 = (short)-6060;
unsigned short var_8 = (unsigned short)15512;
unsigned short var_9 = (unsigned short)4625;
int zero = 0;
unsigned short var_10 = (unsigned short)2961;
unsigned long long int var_11 = 15342693746280821343ULL;
unsigned short var_12 = (unsigned short)48129;
int var_13 = 1767655291;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned short)20635;
    value_mismatch |= var_11 != 0ULL;
    value_mismatch |= var_12 != (unsigned short)43008;
    value_mismatch |= var_13 != 15512;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
