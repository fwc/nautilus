/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2491
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2491
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
void test(val<bool> var_1, val<unsigned long long int> var_3, val<signed char> var_5, val<int> zero, val<long long int*> var_12, val<unsigned long long int*> var_13, val<short*> var_14) {
    *var_12 = (+(((val<long long int>) (+(((/* implicit */val<int>) var_1))))));
    *var_13 = var_3;
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) / (var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
unsigned long long int var_3 = 2893154990424725445ULL;
signed char var_5 = (signed char)-96;
int zero = 0;
long long int var_12 = -433008132535706409LL;
unsigned long long int var_13 = 2509547203692194611ULL;
short var_14 = (short)-855;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0LL;
    value_mismatch |= var_13 != 2893154990424725445ULL;
    value_mismatch |= var_14 != (short)6;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
