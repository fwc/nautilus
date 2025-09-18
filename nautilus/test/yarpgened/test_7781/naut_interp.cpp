/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7781
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7781
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
void test(val<bool> var_6, val<int> var_10, val<int> zero, val<short*> var_13, val<unsigned char*> var_14) {
    *var_13 = ((/* implicit */val<short>) (+(var_10)));
    *var_14 = ((/* implicit */val<unsigned char>) var_6);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
int var_10 = -637389854;
int zero = 0;
short var_13 = (short)27214;
unsigned char var_14 = (unsigned char)142;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)13282;
    value_mismatch |= var_14 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_10, zero, &var_13, &var_14);
  checksum();
}
