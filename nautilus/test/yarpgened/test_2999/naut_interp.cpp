/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2999
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2999
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_2, val<unsigned long long int> var_5, val<unsigned int> var_7, val<unsigned long long int> var_9, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_19, val<signed char*> var_20, val<unsigned int*> var_21, val<unsigned long long int*> var_22) {
    *var_19 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((var_2) >= (((/* implicit */val<unsigned long long int>) var_7)))))) : (var_9)));
    *var_20 = ((/* implicit */val<signed char>) ((var_9) >= ((-(((((/* implicit */val<bool>) (val<unsigned char>)92)) ? (10142163291387629655ULL) : (var_5)))))));
    *var_21 *= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) -1979509630)) ? (1979509602) : (-2024140650)));
    *var_22 ^= ((/* implicit */val<unsigned long long int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
unsigned long long int var_2 = 15140405282928102071ULL;
unsigned long long int var_5 = 8263097726842355994ULL;
unsigned int var_7 = 1871107846U;
unsigned long long int var_9 = 16205911834639123783ULL;
unsigned short var_11 = (unsigned short)9904;
int zero = 0;
unsigned short var_19 = (unsigned short)55693;
signed char var_20 = (signed char)84;
unsigned int var_21 = 3391956971U;
unsigned long long int var_22 = 14449657236326742555ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)55693;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != 2336358646U;
    value_mismatch |= var_22 != 14449657236326735019ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_9, var_11, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
