/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4478
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4478
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
void test(val<unsigned long long int> var_9, val<long long int> var_13, val<int> zero, val<bool*> var_15, val<short*> var_16, val<unsigned char*> var_17, val<long long int*> var_18) {
    *var_15 = ((/* implicit */val<bool>) max((*var_15), (((/* implicit */val<bool>) (val<signed char>)3))));
    *var_16 = ((/* implicit */val<short>) var_13);
    *var_17 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-26)) == (((/* implicit */val<int>) (val<signed char>)25)))))));
    *var_18 = ((/* implicit */val<long long int>) ((val<unsigned short>) ((val<unsigned char>) var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 9480584553144310304ULL;
long long int var_13 = 5903104478475271759LL;
int zero = 0;
bool var_15 = (bool)1;
short var_16 = (short)-20502;
unsigned char var_17 = (unsigned char)143;
long long int var_18 = -675479028711807423LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (short)15951;
    value_mismatch |= var_17 != (unsigned char)255;
    value_mismatch |= var_18 != 32LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
