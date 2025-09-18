/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8429
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8429
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
void test(val<int> var_5, val<int> var_6, val<unsigned int> var_8, val<short> var_14, val<unsigned int> var_17, val<int> zero, val<short*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<short>) ((16665321U) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)32767)))));
    *var_19 &= ((/* implicit */val<short>) (((!(((/* implicit */val<bool>) ((((/* implicit */val<long long int>) var_8)) + (-2886707100541043051LL)))))) ? (((/* implicit */val<long long int>) var_6)) : (((((((/* implicit */val<long long int>) var_17)) + (-3180470768912895894LL))) % (((/* implicit */val<long long int>) ((var_5) / (((/* implicit */val<int>) var_14)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1473258549;
int var_6 = 1053357494;
unsigned int var_8 = 783658213U;
short var_14 = (short)13442;
unsigned int var_17 = 585393893U;
int zero = 0;
short var_18 = (short)29244;
short var_19 = (short)-28854;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-13592;
    value_mismatch |= var_19 != (short)1802;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_8, var_14, var_17, zero, &var_18, &var_19);
  checksum();
}
