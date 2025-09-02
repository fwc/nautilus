/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9088
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9088
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
void test(val<unsigned long long int> var_10, val<int> zero, val<short*> var_14, val<short*> var_15, val<short*> var_16) {
    *var_14 = ((/* implicit */val<short>) max(((((~(594700157U))) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))), (((/* implicit */val<unsigned int>) ((val<unsigned char>) var_10)))));
    *var_15 = ((/* implicit */val<short>) 2874596972U);
    *var_16 = ((/* implicit */val<short>) (-(min((896573254U), (((/* implicit */val<unsigned int>) max((65280), (((/* implicit */val<int>) (val<short>)(-32767 - 1))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 8749153045770787771ULL;
int zero = 0;
short var_14 = (short)-26814;
short var_15 = (short)-31304;
short var_16 = (short)21723;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-26493;
    value_mismatch |= var_15 != (short)-8596;
    value_mismatch |= var_16 != (short)256;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_10, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
