/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6168
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6168
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
void test(val<short> var_0, val<signed char> var_5, val<int> var_9, val<int> var_10, val<int> zero, val<int*> var_12, val<unsigned long long int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)16352)) ? (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) (val<bool>)1)) != (((/* implicit */val<int>) var_5)))))) / (((val<unsigned long long int>) (val<short>)-11152)))) : (((/* implicit */val<unsigned long long int>) var_10))));
    *var_13 = ((/* implicit */val<unsigned long long int>) (~(min((min((((/* implicit */val<int>) var_0)), ((-2147483647 - 1)))), (((((/* implicit */val<int>) (val<short>)-32748)) | (var_9)))))));
    *var_14 ^= ((/* implicit */val<short>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)208;
signed char var_5 = (signed char)-76;
int var_9 = -971602945;
int var_10 = 792233436;
int zero = 0;
int var_12 = 225884234;
unsigned long long int var_13 = 15827918555905560768ULL;
short var_14 = (short)7893;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 2147483647ULL;
    value_mismatch |= var_14 != (short)-25302;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
