/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 97
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=97
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
void test(val<unsigned int> var_0, val<unsigned char> var_5, val<signed char> var_6, val<short> var_7, val<unsigned int> var_8, val<int> zero, val<unsigned long long int*> var_17, val<short*> var_18, val<unsigned char*> var_19, val<short*> var_20) {
    if (((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_5)))))
    {
        *var_17 = ((/* implicit */val<unsigned long long int>) (~(((((/* implicit */val<int>) ((3551223271U) > (var_8)))) / (((((/* implicit */val<int>) (val<unsigned short>)16155)) >> (((/* implicit */val<int>) var_6))))))));
        *var_18 += ((/* implicit */val<short>) max((max((3551223271U), (((/* implicit */val<unsigned int>) (val<signed char>)123)))), (((/* implicit */val<unsigned int>) var_7))));
    }

    *var_19 = ((/* implicit */val<unsigned char>) var_0);
    *var_20 = ((/* implicit */val<short>) max((3551223271U), (((/* implicit */val<unsigned int>) -8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2236071523U;
unsigned char var_5 = (unsigned char)224;
signed char var_6 = (signed char)9;
short var_7 = (short)-26989;
unsigned int var_8 = 1097319270U;
int zero = 0;
unsigned long long int var_17 = 16169747269377578604ULL;
short var_18 = (short)-5918;
unsigned char var_19 = (unsigned char)205;
short var_20 = (short)-29269;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 18446744073709551615ULL;
    value_mismatch |= var_18 != (short)32629;
    value_mismatch |= var_19 != (unsigned char)99;
    value_mismatch |= var_20 != (short)-8;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_7, var_8, zero, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
