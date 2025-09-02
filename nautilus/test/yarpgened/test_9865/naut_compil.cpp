/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9865
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9865
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
void test(val<unsigned char> var_5, val<int> var_7, val<long long int> var_9, val<int> zero, val<signed char*> var_11, val<unsigned int*> var_12, val<signed char*> var_13, val<signed char*> var_14, val<int*> var_15) {
    *var_11 = ((/* implicit */val<signed char>) var_5);
    *var_12 = ((/* implicit */val<unsigned int>) var_7);
    *var_13 = ((/* implicit */val<signed char>) var_9);
    *var_14 = ((/* implicit */val<signed char>) 873265891U);
    *var_15 = ((val<int>) 3958954584U);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)241;
int var_7 = 577269955;
long long int var_9 = -2650470010135192138LL;
int zero = 0;
signed char var_11 = (signed char)-13;
unsigned int var_12 = 3105970081U;
signed char var_13 = (signed char)76;
signed char var_14 = (signed char)66;
int var_15 = -705458420;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-15;
    value_mismatch |= var_12 != 577269955U;
    value_mismatch |= var_13 != (signed char)-74;
    value_mismatch |= var_14 != (signed char)-29;
    value_mismatch |= var_15 != -336012712;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_7, var_9, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
