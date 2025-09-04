/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8161
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8161
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
void test(val<signed char> var_2, val<unsigned char> var_4, val<long long int> var_5, val<int> var_6, val<unsigned char> var_8, val<int> var_9, val<short> var_13, val<short> var_14, val<int> zero, val<signed char*> var_15, val<int*> var_16, val<unsigned long long int*> var_17) {
    if (((/* implicit */val<bool>) var_9))
    {
        *var_15 |= ((/* implicit */val<signed char>) ((val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_14)) | (var_6)))) ? (var_5) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) (val<bool>)0)))))))));
        *var_16 = ((/* implicit */val<int>) var_2);
    }

    *var_17 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_13))))) <= (((/* implicit */val<int>) var_8)))) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-14;
unsigned char var_4 = (unsigned char)96;
long long int var_5 = 6582666117153796299LL;
int var_6 = -1789776185;
unsigned char var_8 = (unsigned char)11;
int var_9 = -12540285;
short var_13 = (short)27173;
short var_14 = (short)-29355;
int zero = 0;
signed char var_15 = (signed char)-126;
int var_16 = -2134749317;
unsigned long long int var_17 = 13197078093264480050ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)-53;
    value_mismatch |= var_16 != -14;
    value_mismatch |= var_17 != 1ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_5, var_6, var_8, var_9, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
