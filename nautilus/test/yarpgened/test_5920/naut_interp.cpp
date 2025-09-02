/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5920
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5920
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
void test(val<bool> var_0, val<unsigned long long int> var_2, val<unsigned char> var_3, val<int> zero, val<unsigned char*> var_13, val<unsigned long long int*> var_14, val<unsigned short*> var_15, val<unsigned long long int*> var_16) {
    *var_13 = var_3;
    *var_14 += ((/* implicit */val<unsigned long long int>) ((val<short>) 9));
    *var_15 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((var_0) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<unsigned char>) 1987959899695221724ULL)))))));
    *var_16 *= ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<short>)-17371))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned long long int var_2 = 6599298841946864516ULL;
unsigned char var_3 = (unsigned char)165;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
unsigned long long int var_14 = 8039101674006088279ULL;
unsigned short var_15 = (unsigned short)43226;
unsigned long long int var_16 = 15251701768067439023ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)165;
    value_mismatch |= var_14 != 8039101674006088288ULL;
    value_mismatch |= var_15 != (unsigned short)48004;
    value_mismatch |= var_16 != 5173026482902959541ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
