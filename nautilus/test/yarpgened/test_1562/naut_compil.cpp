/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1562
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1562
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
void test(val<unsigned long long int> var_13, val<long long int> var_14, val<unsigned short> var_15, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17, val<bool*> var_18, val<short*> var_19, val<long long int*> var_20) {
    if (((/* implicit */val<bool>) var_15))
    {
        *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) var_13))));
        *var_17 = max((((/* implicit */val<unsigned int>) (val<bool>)1)), (4294967283U));
        *var_18 = ((/* implicit */val<bool>) max((*var_18), (((/* implicit */val<bool>) min(((+(var_14))), (var_14))))));
    }

    *var_19 &= ((/* implicit */val<short>) (val<bool>)1);
    *var_20 = (+(7789215057608708856LL));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 5976638327939172388ULL;
long long int var_14 = 4431340040756348896LL;
unsigned short var_15 = (unsigned short)42379;
int zero = 0;
unsigned short var_16 = (unsigned short)5769;
unsigned int var_17 = 51489523U;
bool var_18 = (bool)1;
short var_19 = (short)31371;
long long int var_20 = -7495562856440291625LL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)34852;
    value_mismatch |= var_17 != 4294967283U;
    value_mismatch |= var_18 != (bool)1;
    value_mismatch |= var_19 != (short)1;
    value_mismatch |= var_20 != 7789215057608708856LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
