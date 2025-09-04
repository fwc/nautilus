/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1874
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1874
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
void test(val<bool> var_2, val<unsigned int> var_6, val<unsigned char> var_12, val<int> zero, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_12)) - ((~(((/* implicit */val<int>) var_2))))))), (var_6)));
    *var_20 |= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned char>)74)) + (((/* implicit */val<int>) (val<unsigned short>)59316))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
unsigned int var_6 = 1746288312U;
unsigned char var_12 = (unsigned char)160;
int zero = 0;
unsigned long long int var_19 = 2010711797677206408ULL;
unsigned long long int var_20 = 17015814892961141119ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1746288312ULL;
    value_mismatch |= var_20 != 17015814892961200127ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_12, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
