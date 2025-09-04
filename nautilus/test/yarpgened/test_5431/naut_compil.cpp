/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5431
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5431
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
void test(val<unsigned char> var_5, val<unsigned char> var_8, val<int> zero, val<signed char*> var_11, val<signed char*> var_12) {
    *var_11 = ((/* implicit */val<signed char>) var_5);
    *var_12 = ((/* implicit */val<signed char>) max((*var_12), (((/* implicit */val<signed char>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)202;
unsigned char var_8 = (unsigned char)109;
int zero = 0;
signed char var_11 = (signed char)-125;
signed char var_12 = (signed char)-10;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (signed char)-54;
    value_mismatch |= var_12 != (signed char)109;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
