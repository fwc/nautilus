/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2359
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2359
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
void test(val<unsigned short> var_15, val<unsigned long long int> var_18, val<int> zero, val<short*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<short>) var_18);
    *var_21 = ((/* implicit */val<int>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_15 = (unsigned short)23595;
unsigned long long int var_18 = 10765354579546781860ULL;
int zero = 0;
short var_20 = (short)18419;
int var_21 = -684102428;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-18268;
    value_mismatch |= var_21 != 23595;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
