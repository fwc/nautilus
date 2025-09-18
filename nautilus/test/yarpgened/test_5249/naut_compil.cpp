/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5249
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5249
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
void test(val<signed char> var_0, val<unsigned short> var_2, val<unsigned char> var_4, val<signed char> var_7, val<unsigned int> var_8, val<unsigned char> var_9, val<int> zero, val<unsigned int*> var_15, val<unsigned short*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_15 = ((/* implicit */val<unsigned int>) max((*var_15), (((val<unsigned int>) (+(((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (var_8))))))));
    *var_16 = var_2;
    *var_17 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 = ((val<unsigned int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned short var_2 = (unsigned short)53827;
unsigned char var_4 = (unsigned char)243;
signed char var_7 = (signed char)-115;
unsigned int var_8 = 494329504U;
unsigned char var_9 = (unsigned char)90;
int zero = 0;
unsigned int var_15 = 2105691580U;
unsigned short var_16 = (unsigned short)23610;
unsigned long long int var_17 = 2526848536957515540ULL;
unsigned int var_18 = 1869477610U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 2105691580U;
    value_mismatch |= var_16 != (unsigned short)53827;
    value_mismatch |= var_17 != 90ULL;
    value_mismatch |= var_18 != 243U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_7, var_8, var_9, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
