/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6924
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6924
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
void test(val<int> zero, val<signed char*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) min(((val<short>)0), (((/* implicit */val<short>) (val<signed char>)14))));
    *var_12 ^= ((/* implicit */val<unsigned char>) (!((!(((/* implicit */val<bool>) (val<unsigned char>)214))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
signed char var_11 = (signed char)-120;
unsigned char var_12 = (unsigned char)168;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != (unsigned char)169;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
