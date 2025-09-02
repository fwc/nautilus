/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2148
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2148
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
void test(val<unsigned short> var_5, val<short> var_8, val<int> zero, val<unsigned char*> var_10, val<unsigned short*> var_11) {
    *var_10 *= ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) >= (((/* implicit */val<int>) var_8)))))));
    *var_11 = var_5;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)54546;
short var_8 = (short)17037;
int zero = 0;
unsigned char var_10 = (unsigned char)20;
unsigned short var_11 = (unsigned short)6941;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)20;
    value_mismatch |= var_11 != (unsigned short)54546;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_8, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
