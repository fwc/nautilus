/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6543
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6543
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
void test(val<long long int> var_0, val<unsigned long long int> var_3, val<short> var_4, val<int> var_6, val<unsigned long long int> var_7, val<signed char> var_8, val<unsigned int> var_9, val<int> zero, val<signed char*> var_16, val<long long int*> var_17, val<short*> var_18, val<unsigned long long int*> var_19) {
    *var_16 = ((/* implicit */val<signed char>) var_0);
    *var_17 = ((/* implicit */val<long long int>) ((val<signed char>) var_9));
    if (((/* implicit */val<bool>) (val<unsigned short>)65511))
    {
        *var_18 |= ((/* implicit */val<short>) ((val<bool>) (val<unsigned short>)64224));
        *var_19 = ((((/* implicit */val<bool>) max((var_7), (((/* implicit */val<unsigned long long int>) (~(var_6))))))) ? (min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))) & (18446744073709551600ULL))), (((/* implicit */val<unsigned long long int>) ((val<int>) var_8))))) : (var_3));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7469566524806922038LL;
unsigned long long int var_3 = 10299636476842522231ULL;
short var_4 = (short)-5651;
int var_6 = 750134818;
unsigned long long int var_7 = 5852867663827342574ULL;
signed char var_8 = (signed char)-32;
unsigned int var_9 = 794368006U;
int zero = 0;
signed char var_16 = (signed char)3;
long long int var_17 = -7325602834584883833LL;
short var_18 = (short)-1923;
unsigned long long int var_19 = 13293204184121743194ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-54;
    value_mismatch |= var_17 != 6LL;
    value_mismatch |= var_18 != (short)-1923;
    value_mismatch |= var_19 != 18446744073709545952ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_7, var_8, var_9, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
