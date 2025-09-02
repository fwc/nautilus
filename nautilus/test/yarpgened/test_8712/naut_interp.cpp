/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8712
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8712
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
void test(val<unsigned char> var_9, val<int> zero, val<unsigned char*> var_10, val<signed char*> var_11) {
    *var_10 *= var_9;
    *var_11 = ((/* implicit */val<signed char>) (val<short>)18112);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)231;
int zero = 0;
unsigned char var_10 = (unsigned char)72;
signed char var_11 = (signed char)-75;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)248;
    value_mismatch |= var_11 != (signed char)-64;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
