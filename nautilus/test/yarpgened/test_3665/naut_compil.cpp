/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3665
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3665
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
void test(val<unsigned short> var_3, val<unsigned short> var_6, val<int> zero, val<signed char*> var_10, val<unsigned char*> var_11) {
    *var_10 = ((/* implicit */val<signed char>) var_3);
    *var_11 *= ((/* implicit */val<unsigned char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)63305;
unsigned short var_6 = (unsigned short)9241;
int zero = 0;
signed char var_10 = (signed char)-90;
unsigned char var_11 = (unsigned char)194;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)73;
    value_mismatch |= var_11 != (unsigned char)242;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_6, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
