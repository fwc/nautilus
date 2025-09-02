/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9543
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9543
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
void test(val<unsigned short> var_3, val<int> var_11, val<int> zero, val<signed char*> var_17, val<int*> var_18, val<unsigned long long int*> var_19) {
    if (((/* implicit */val<bool>) 18446744073709551615ULL))
    {
        *var_17 = ((/* implicit */val<signed char>) ((val<unsigned int>) ((var_11) != (((/* implicit */val<int>) var_3)))));
        *var_18 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) -4087708508784758994LL)) ? (3605124445U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned char>) (~(689842867U))))))));
    }

    *var_19 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 689842850U)) ? (4294967295U) : (4294967295U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54811;
int var_11 = 951425088;
int zero = 0;
signed char var_17 = (signed char)-19;
int var_18 = 792107387;
unsigned long long int var_19 = 13189660726168758625ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != -689842851;
    value_mismatch |= var_19 != 4294967295ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_11, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
