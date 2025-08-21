/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 900
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=900
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
void test(val<int> var_11, val<signed char> var_17, val<int> zero, val<unsigned short*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<unsigned short>)511)) / (var_11)));
    *var_20 = (!(((/* implicit */val<bool>) var_17)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1964101979;
signed char var_17 = (signed char)3;
int zero = 0;
unsigned short var_19 = (unsigned short)48899;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)0;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
