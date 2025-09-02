/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9834
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9834
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
void test(val<long long int> var_3, val<unsigned char> var_7, val<int> zero, val<unsigned char*> var_11, val<unsigned char*> var_12) {
    *var_11 = var_7;
    *var_12 = ((/* implicit */val<unsigned char>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 183518947680495839LL;
unsigned char var_7 = (unsigned char)77;
int zero = 0;
unsigned char var_11 = (unsigned char)135;
unsigned char var_12 = (unsigned char)44;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)77;
    value_mismatch |= var_12 != (unsigned char)223;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
