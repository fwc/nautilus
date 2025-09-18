/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9003
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9003
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
void test(val<signed char> var_3, val<int> zero, val<unsigned short*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<unsigned short>) var_3);
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) -518030682)) ? (-1) : (0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-48;
int zero = 0;
unsigned short var_13 = (unsigned short)25904;
unsigned char var_14 = (unsigned char)25;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)65488;
    value_mismatch |= var_14 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_13, &var_14);
  checksum();
}
