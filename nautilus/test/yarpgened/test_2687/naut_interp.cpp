/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2687
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2687
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
void test(val<signed char> var_0, val<int> var_5, val<unsigned short> var_9, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) (val<unsigned char>)255);
    *var_14 = max((max((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) var_0)), (var_9)))), (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_9)))))), ((~(((((/* implicit */val<int>) (val<signed char>)(-127 - 1))) * (((/* implicit */val<int>) (val<unsigned char>)192)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
int var_5 = 1091244556;
unsigned short var_9 = (unsigned short)15933;
int zero = 0;
unsigned long long int var_13 = 17135992231067248276ULL;
int var_14 = -1381177745;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 255ULL;
    value_mismatch |= var_14 != 24575;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_9, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
