/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7502
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7502
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
void test(val<signed char> var_0, val<short> var_1, val<unsigned int> var_4, val<short> var_6, val<unsigned long long int> var_9, val<unsigned char> var_14, val<int> var_15, val<int> zero, val<unsigned long long int*> var_16, val<unsigned char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned long long int>) var_4)), (var_9)))) ? (((/* implicit */val<int>) var_14)) : (var_15)));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<short>)32704)) ? (((/* implicit */val<long long int>) (-(min((var_4), (((/* implicit */val<unsigned int>) var_6))))))) : ((-(((((/* implicit */val<bool>) var_1)) ? (1631939538227997654LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
short var_1 = (short)16384;
unsigned int var_4 = 1856212037U;
short var_6 = (short)-14785;
unsigned long long int var_9 = 14750693121855863911ULL;
unsigned char var_14 = (unsigned char)247;
int var_15 = 1734226178;
int zero = 0;
unsigned long long int var_16 = 6809285081004714241ULL;
unsigned char var_17 = (unsigned char)106;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 247ULL;
    value_mismatch |= var_17 != (unsigned char)187;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, var_9, var_14, var_15, zero, &var_16, &var_17);
  checksum();
}
