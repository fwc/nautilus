/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1287
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1287
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
void test(val<signed char> var_1, val<bool> var_11, val<int> zero, val<bool*> var_19, val<unsigned short*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<bool>) (-(((((/* implicit */val<int>) (val<unsigned short>)2866)) & (((/* implicit */val<int>) (val<signed char>)78))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_11);
    *var_21 = ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-23;
bool var_11 = (bool)0;
int zero = 0;
bool var_19 = (bool)1;
unsigned short var_20 = (unsigned short)31529;
long long int var_21 = 7993838101170179906LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != -23LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_11, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
