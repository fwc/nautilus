/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 509
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=509
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
void test(val<unsigned char> var_3, val<short> var_6, val<bool> var_9, val<int> zero, val<int*> var_18, val<unsigned long long int*> var_19, val<unsigned short*> var_20) {
    *var_18 = ((/* implicit */val<int>) var_3);
    *var_19 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((val<short>) ((val<long long int>) var_9))))));
    *var_20 = ((/* implicit */val<unsigned short>) max((*var_20), (((/* implicit */val<unsigned short>) ((val<unsigned char>) var_6)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)102;
short var_6 = (short)-23681;
bool var_9 = (bool)1;
int zero = 0;
int var_18 = -309607879;
unsigned long long int var_19 = 13259041547840378936ULL;
unsigned short var_20 = (unsigned short)40105;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 102;
    value_mismatch |= var_19 != 18446744073709551615ULL;
    value_mismatch |= var_20 != (unsigned short)40105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, var_9, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
