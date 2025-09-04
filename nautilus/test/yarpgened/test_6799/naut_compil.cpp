/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6799
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6799
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
void test(val<unsigned short> var_6, val<int> zero, val<unsigned short*> var_11, val<unsigned long long int*> var_12) {
    *var_11 = ((/* implicit */val<unsigned short>) max((11349206454006275548ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)65535))));
    *var_12 = ((/* implicit */val<unsigned long long int>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)34348;
int zero = 0;
unsigned short var_11 = (unsigned short)22939;
unsigned long long int var_12 = 15180970210099415877ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)24028;
    value_mismatch |= var_12 != 34348ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
