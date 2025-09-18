/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3472
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3472
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
void test(val<short> var_1, val<signed char> var_7, val<unsigned long long int> var_8, val<short> var_9, val<int> var_14, val<int> zero, val<short*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<short>) ((max((((5623594822326598554ULL) ^ (18446744073709551615ULL))), (var_8))) / (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-(var_14)))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)205))) <= (10612421856578720343ULL)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))))))));
    *var_16 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_1)) % (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26680;
signed char var_7 = (signed char)-75;
unsigned long long int var_8 = 950162962582475118ULL;
short var_9 = (short)-24853;
int var_14 = 1155157093;
int zero = 0;
short var_15 = (short)-2780;
short var_16 = (short)-19837;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)17509;
    value_mismatch |= var_16 != (short)-1827;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_7, var_8, var_9, var_14, zero, &var_15, &var_16);
  checksum();
}
