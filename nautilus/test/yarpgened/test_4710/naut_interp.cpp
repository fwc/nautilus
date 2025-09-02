/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4710
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4710
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
void test(val<signed char> var_9, val<bool> var_12, val<unsigned long long int> var_16, val<int> zero, val<unsigned int*> var_18, val<int*> var_19, val<bool*> var_20) {
    *var_18 = ((/* implicit */val<unsigned int>) ((min((max((((/* implicit */val<unsigned long long int>) (val<signed char>)126)), (12650628434368346755ULL))), (var_16))) > ((~(5796115639341204861ULL)))));
    *var_19 = ((/* implicit */val<int>) ((((min((12650628434368346755ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)-126)))) - (((/* implicit */val<unsigned long long int>) (+(-8804338140178864621LL)))))) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12)))));
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2147483647)) ? (((/* implicit */val<int>) var_9)) : ((-(((/* implicit */val<int>) (val<unsigned short>)12116))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-49;
bool var_12 = (bool)0;
unsigned long long int var_16 = 5716098557251861499ULL;
int zero = 0;
unsigned int var_18 = 61445618U;
int var_19 = 1251010768;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0U;
    value_mismatch |= var_19 != 532943984;
    value_mismatch |= var_20 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_12, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
