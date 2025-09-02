/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6652
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6652
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
void test(val<signed char> var_0, val<bool> var_16, val<int> zero, val<int*> var_19, val<unsigned short*> var_20) {
    *var_19 = ((/* implicit */val<int>) max((*var_19), (((/* implicit */val<int>) max((1756494329869089700LL), (((/* implicit */val<long long int>) var_16)))))));
    *var_20 = ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
bool var_16 = (bool)0;
int zero = 0;
int var_19 = -618314702;
unsigned short var_20 = (unsigned short)37954;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1708506020;
    value_mismatch |= var_20 != (unsigned short)26;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_16, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
