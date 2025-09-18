/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1014
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1014
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
void test(val<short> var_3, val<long long int> var_5, val<short> var_6, val<unsigned char> var_9, val<unsigned short> var_11, val<int> zero, val<unsigned int*> var_14, val<unsigned long long int*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<long long int>) var_6)), (max((((((/* implicit */val<bool>) (val<unsigned char>)255)) ? (var_5) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))))), (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_11)))))))));
    *var_15 &= 27ULL;
    *var_16 = var_9;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27908;
long long int var_5 = -2216339825967895299LL;
short var_6 = (short)-24630;
unsigned char var_9 = (unsigned char)86;
unsigned short var_11 = (unsigned short)31567;
int zero = 0;
unsigned int var_14 = 626169412U;
unsigned long long int var_15 = 16690973973303238059ULL;
unsigned char var_16 = (unsigned char)64;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4294935729U;
    value_mismatch |= var_15 != 11ULL;
    value_mismatch |= var_16 != (unsigned char)86;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_9, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
}
