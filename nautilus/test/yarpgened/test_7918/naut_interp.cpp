/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7918
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7918
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
void test(val<unsigned char> var_11, val<int> zero, val<unsigned short*> var_14, val<unsigned char*> var_15) {
    *var_14 &= ((/* implicit */val<unsigned short>) var_11);
    *var_15 = ((/* implicit */val<unsigned char>) ((17659465572078241202ULL) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)33)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)7;
int zero = 0;
unsigned short var_14 = (unsigned short)42559;
unsigned char var_15 = (unsigned char)11;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)7;
    value_mismatch |= var_15 != (unsigned char)242;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
