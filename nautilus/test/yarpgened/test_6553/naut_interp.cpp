/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6553
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6553
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
void test(val<int> var_3, val<unsigned int> var_5, val<bool> var_11, val<unsigned int> var_12, val<unsigned int> var_18, val<int> zero, val<unsigned long long int*> var_20, val<unsigned int*> var_21, val<unsigned char*> var_22) {
    *var_20 = ((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<int>) (val<bool>)1)) >> (((10111130134415401828ULL) - (10111130134415401801ULL)))))));
    *var_21 = ((/* implicit */val<unsigned int>) (-(8796498338922676671ULL)));
    *var_22 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<long long int>) var_12)) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) var_18)) : (576460752303419392LL)))))) ? (var_12) : (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_11)) ^ (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_12))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1443572214;
unsigned int var_5 = 3202958284U;
bool var_11 = (bool)1;
unsigned int var_12 = 3278338011U;
unsigned int var_18 = 3623184339U;
int zero = 0;
unsigned long long int var_20 = 16761527041907615800ULL;
unsigned int var_21 = 2706953204U;
unsigned char var_22 = (unsigned char)236;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 18446744073709551615ULL;
    value_mismatch |= var_21 != 3644014145U;
    value_mismatch |= var_22 != (unsigned char)219;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_11, var_12, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
}
