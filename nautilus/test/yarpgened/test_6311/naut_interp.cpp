/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6311
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6311
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
void test(val<bool> var_7, val<unsigned long long int> var_8, val<unsigned char> var_9, val<signed char> var_10, val<int> zero, val<unsigned char*> var_16, val<unsigned char*> var_17) {
    *var_16 = ((/* implicit */val<unsigned char>) max((*var_16), (((/* implicit */val<unsigned char>) (~((~(((/* implicit */val<int>) var_10)))))))));
    *var_17 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) + (var_8)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)1;
unsigned long long int var_8 = 1617044328887833107ULL;
unsigned char var_9 = (unsigned char)212;
signed char var_10 = (signed char)95;
int zero = 0;
unsigned char var_16 = (unsigned char)194;
unsigned char var_17 = (unsigned char)184;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)194;
    value_mismatch |= var_17 != (unsigned char)212;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_8, var_9, var_10, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
