/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1856
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1856
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
void test(val<signed char> var_3, val<short> var_7, val<signed char> var_14, val<short> var_15, val<int> zero, val<int*> var_18, val<short*> var_19, val<signed char*> var_20) {
    *var_18 = ((/* implicit */val<int>) (val<short>)511);
    if (((/* implicit */val<bool>) (-(((((/* implicit */val<int>) var_15)) & (((/* implicit */val<int>) var_14)))))))
    {
        *var_19 = min((((val<short>) max((((/* implicit */val<short>) (val<bool>)1)), (var_7)))), (((/* implicit */val<short>) min(((val<signed char>)-89), ((val<signed char>)24)))));
        *var_20 &= var_3;
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-55;
short var_7 = (short)-32550;
signed char var_14 = (signed char)-4;
short var_15 = (short)9841;
int zero = 0;
int var_18 = 2088312496;
short var_19 = (short)-12641;
signed char var_20 = (signed char)-92;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 511;
    value_mismatch |= var_19 != (short)-89;
    value_mismatch |= var_20 != (signed char)(-127 - 1);
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_14, var_15, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
