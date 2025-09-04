/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5332
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5332
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
void test(val<bool> var_0, val<unsigned short> var_1, val<short> var_2, val<short> var_3, val<unsigned int> var_4, val<short> var_6, val<long long int> var_7, val<short> var_10, val<bool> var_14, val<unsigned short> var_18, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20, val<unsigned short*> var_21) {
    *var_19 *= ((/* implicit */val<unsigned short>) ((((val<unsigned long long int>) var_6)) | (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_1)) || (((/* implicit */val<bool>) var_4))))))))));
    *var_20 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) < (((/* implicit */val<int>) var_10))))) >> (((((/* implicit */val<int>) var_18)) - (32480)))));
    *var_21 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) min((((/* implicit */val<short>) min((var_0), (var_14)))), (var_2)))), (((max((var_7), (-5633580942830719278LL))) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_14)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned short var_1 = (unsigned short)2712;
short var_2 = (short)27742;
short var_3 = (short)-8707;
unsigned int var_4 = 1516148747U;
short var_6 = (short)5523;
long long int var_7 = 2813413552570638746LL;
short var_10 = (short)-22984;
bool var_14 = (bool)1;
unsigned short var_18 = (unsigned short)32480;
int zero = 0;
unsigned short var_19 = (unsigned short)48290;
unsigned short var_20 = (unsigned short)49182;
unsigned short var_21 = (unsigned short)36671;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)39686;
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_6, var_7, var_10, var_14, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
