/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8855
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8855
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
void test(val<signed char> var_0, val<unsigned int> var_11, val<unsigned short> var_12, val<int> zero, val<unsigned int*> var_13, val<signed char*> var_14, val<unsigned int*> var_15, val<unsigned long long int*> var_16) {
    *var_13 = var_11;
    if (((/* implicit */val<bool>) (-(((val<unsigned long long int>) 2308131294U)))))
    {
        *var_14 = ((/* implicit */val<signed char>) max((var_12), (var_12)));
        *var_15 = max((((/* implicit */val<unsigned int>) (val<unsigned char>)89)), (2308131300U));
    }

    *var_16 &= ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) 2091365969)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 866153595U)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<unsigned char>)70))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)49;
unsigned int var_11 = 3132434630U;
unsigned short var_12 = (unsigned short)2240;
int zero = 0;
unsigned int var_13 = 3855813973U;
signed char var_14 = (signed char)89;
unsigned int var_15 = 1873450424U;
unsigned long long int var_16 = 11650966374430125668ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 3132434630U;
    value_mismatch |= var_14 != (signed char)-64;
    value_mismatch |= var_15 != 2308131300U;
    value_mismatch |= var_16 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
