/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3215
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3215
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_9, val<unsigned long long int> var_10, val<unsigned long long int> var_11, val<unsigned long long int> var_14, val<unsigned long long int> var_18, val<unsigned long long int> var_19, val<int> zero, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21, val<unsigned long long int*> var_22) {
    *var_20 *= ((val<unsigned long long int>) ((((515396075520ULL) - (18446744073709551615ULL))) * (15447811977284339391ULL)));
    *var_21 -= ((((/* implicit */val<bool>) var_18)) ? (var_18) : (min((5276842664255066025ULL), ((+(var_9))))));
    *var_22 = ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (18014396361998336ULL) : (max((var_1), (var_1)))))) ? (min((var_11), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_19))))))) : (max((((val<unsigned long long int>) var_10)), (((val<unsigned long long int>) 16539446508435600836ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14035989292357581199ULL;
unsigned long long int var_9 = 1411791544020745478ULL;
unsigned long long int var_10 = 15573797826468996080ULL;
unsigned long long int var_11 = 5092473406623811401ULL;
unsigned long long int var_14 = 12769795014958402178ULL;
unsigned long long int var_18 = 11493286731741133891ULL;
unsigned long long int var_19 = 13303646119372434344ULL;
int zero = 0;
unsigned long long int var_20 = 8142089332989181290ULL;
unsigned long long int var_21 = 5178833307252853280ULL;
unsigned long long int var_22 = 253968803749913169ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 9647122931790695958ULL;
    value_mismatch |= var_21 != 12132290649221271005ULL;
    value_mismatch |= var_22 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_9, var_10, var_11, var_14, var_18, var_19, zero, &var_20, &var_21, &var_22);
  checksum();
}
