/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9072
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9072
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
void test(val<unsigned char> var_7, val<signed char> var_9, val<int> zero, val<signed char*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<signed char>) (val<unsigned char>)0);
    *var_13 ^= max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_9))))), ((+((~(((/* implicit */val<int>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)250;
signed char var_9 = (signed char)66;
int zero = 0;
signed char var_12 = (signed char)-112;
int var_13 = 618316223;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != 618316223;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
