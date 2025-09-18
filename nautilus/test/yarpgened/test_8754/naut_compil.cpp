/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8754
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8754
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
void test(val<unsigned long long int> var_0, val<bool> var_5, val<int> zero, val<unsigned int*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) ((val<unsigned long long int>) var_0));
    *var_14 = ((/* implicit */val<unsigned char>) ((val<unsigned long long int>) ((val<long long int>) ((val<unsigned short>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1582366756299992194ULL;
bool var_5 = (bool)0;
int zero = 0;
unsigned int var_13 = 4043358063U;
unsigned char var_14 = (unsigned char)148;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 1571155074U;
    value_mismatch |= var_14 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, zero, &var_13, &var_14);
  checksum();
}
