/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2635
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2635
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
void test(val<signed char> var_1, val<short> var_6, val<long long int> var_10, val<int> var_11, val<unsigned char> var_12, val<int> zero, val<unsigned short*> var_13, val<short*> var_14, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_13 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_12))))), (min((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) / (var_10))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_6)) : (var_11))))))));
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_1))))) || (((/* implicit */val<bool>) (-(((((/* implicit */val<int>) var_6)) << (((((/* implicit */val<int>) var_6)) - (22523))))))))));
    *var_15 = ((/* implicit */val<unsigned long long int>) max((*var_15), (((/* implicit */val<unsigned long long int>) var_6))));
    *var_16 = ((/* implicit */val<unsigned long long int>) ((val<signed char>) (-(((/* implicit */val<int>) ((val<unsigned short>) var_12))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
short var_6 = (short)22532;
long long int var_10 = -3022116506589778352LL;
int var_11 = 1134157452;
unsigned char var_12 = (unsigned char)238;
int zero = 0;
unsigned short var_13 = (unsigned short)3219;
short var_14 = (short)14129;
unsigned long long int var_15 = 11251196321172475813ULL;
unsigned long long int var_16 = 14035898323391317273ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)0;
    value_mismatch |= var_14 != (short)1;
    value_mismatch |= var_15 != 11251196321172475813ULL;
    value_mismatch |= var_16 != 18ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
