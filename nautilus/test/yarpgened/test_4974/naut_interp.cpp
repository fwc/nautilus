/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4974
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4974
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
void test(val<unsigned long long int> var_1, val<long long int> var_12, val<int> var_13, val<int> zero, val<signed char*> var_14, val<int*> var_15, val<signed char*> var_16) {
    *var_14 ^= ((/* implicit */val<signed char>) 16777212LL);
    *var_15 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_12)))) : (((val<long long int>) ((((/* implicit */val<int>) (val<bool>)1)) >> (((3504285598271695382LL) - (3504285598271695364LL))))))));
    *var_16 = ((/* implicit */val<signed char>) (+((-(var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15945637270612940571ULL;
long long int var_12 = 5341186237193821638LL;
int var_13 = 1586470781;
int zero = 0;
signed char var_14 = (signed char)90;
int var_15 = 1042251449;
signed char var_16 = (signed char)-97;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)-90;
    value_mismatch |= var_15 != 198;
    value_mismatch |= var_16 != (signed char)-27;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
