/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9312
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9312
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
void test(val<unsigned long long int> var_1, val<signed char> var_18, val<int> zero, val<int*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<int>) ((val<unsigned long long int>) var_18));
    *var_21 = ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10255282796634791328ULL;
signed char var_18 = (signed char)112;
int zero = 0;
int var_20 = -284824881;
unsigned short var_21 = (unsigned short)8198;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 112;
    value_mismatch |= var_21 != (unsigned short)23968;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
