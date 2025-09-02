/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3632
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3632
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
void test(val<unsigned short> var_0, val<bool> var_5, val<unsigned short> var_6, val<bool> var_9, val<unsigned short> var_10, val<int> zero, val<long long int*> var_11, val<int*> var_12) {
    *var_11 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_6))));
    *var_12 = ((/* implicit */val<int>) min((var_5), (min((((((/* implicit */val<int>) var_0)) >= (((/* implicit */val<int>) var_10)))), (((((/* implicit */val<bool>) var_6)) && (var_9)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49817;
bool var_5 = (bool)0;
unsigned short var_6 = (unsigned short)23446;
bool var_9 = (bool)0;
unsigned short var_10 = (unsigned short)59938;
int zero = 0;
long long int var_11 = -7941613660490694544LL;
int var_12 = -957753675;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 23446LL;
    value_mismatch |= var_12 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
