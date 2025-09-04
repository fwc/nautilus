/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8558
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8558
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
void test(val<unsigned short> var_4, val<bool> var_6, val<unsigned long long int> var_9, val<long long int> var_12, val<int> zero, val<short*> var_16, val<bool*> var_17) {
    *var_16 &= ((/* implicit */val<short>) min((min((var_9), (((/* implicit */val<unsigned long long int>) var_12)))), (((/* implicit */val<unsigned long long int>) var_4))));
    *var_17 = var_6;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)862;
bool var_6 = (bool)0;
unsigned long long int var_9 = 16175437799705066738ULL;
long long int var_12 = -8278354630973337591LL;
int zero = 0;
short var_16 = (short)31650;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)770;
    value_mismatch |= var_17 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_9, var_12, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
