/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8949
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8949
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
void test(val<unsigned int> var_5, val<int> var_6, val<signed char> var_7, val<int> zero, val<unsigned int*> var_14, val<unsigned short*> var_15, val<unsigned int*> var_16, val<int*> var_17) {
    *var_14 |= ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) min(((!(((/* implicit */val<bool>) 833008729U)))), (((var_5) == (917675409U))))))));
    *var_15 = ((/* implicit */val<unsigned short>) min((833008737U), (((/* implicit */val<unsigned int>) -2147483633))));
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_5)) || (((/* implicit */val<bool>) max((833008725U), (643796160U))))));
    *var_17 = ((val<int>) ((((/* implicit */val<bool>) var_6)) ? (3651171150U) : (max((833008716U), (((/* implicit */val<unsigned int>) var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 653031509U;
int var_6 = -2096046210;
signed char var_7 = (signed char)-27;
int zero = 0;
unsigned int var_14 = 500960177U;
unsigned short var_15 = (unsigned short)24905;
unsigned int var_16 = 1278233161U;
int var_17 = -90663791;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 4294967295U;
    value_mismatch |= var_15 != (unsigned short)46177;
    value_mismatch |= var_16 != 1U;
    value_mismatch |= var_17 != -643796146;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_7, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
