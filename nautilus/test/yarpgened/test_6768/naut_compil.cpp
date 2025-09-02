/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6768
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6768
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
void test(val<signed char> var_0, val<long long int> var_8, val<bool> var_9, val<int> zero, val<bool*> var_10, val<bool*> var_11) {
    *var_10 = (!(((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) (val<signed char>)-100)) : (((/* implicit */val<int>) (val<signed char>)-100)))) * (((/* implicit */val<int>) var_9))))));
    *var_11 = ((/* implicit */val<bool>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
long long int var_8 = 6126978856131650110LL;
bool var_9 = (bool)0;
int zero = 0;
bool var_10 = (bool)0;
bool var_11 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (bool)1;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
