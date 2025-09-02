/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4454
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4454
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
void test(val<unsigned long long int> var_0, val<bool> var_1, val<unsigned int> var_9, val<bool> var_11, val<int> zero, val<short*> var_12, val<bool*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<short>) max((((/* implicit */val<unsigned long long int>) var_9)), (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)4444)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) (val<signed char>)127))))) % (var_0)))));
    *var_13 = var_1;
    *var_14 = ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9757564452002998045ULL;
bool var_1 = (bool)0;
unsigned int var_9 = 1380874845U;
bool var_11 = (bool)1;
int zero = 0;
short var_12 = (short)-28184;
bool var_13 = (bool)0;
unsigned char var_14 = (unsigned char)16;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (short)31325;
    value_mismatch |= var_13 != (bool)0;
    value_mismatch |= var_14 != (unsigned char)93;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_9, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
