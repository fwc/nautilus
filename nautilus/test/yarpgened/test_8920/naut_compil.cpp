/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8920
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8920
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
void test(val<unsigned char> var_4, val<int> zero, val<int*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<int>) var_4);
    *var_11 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)29232))) ^ (29U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)10;
int zero = 0;
int var_10 = 1942206383;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 10;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
