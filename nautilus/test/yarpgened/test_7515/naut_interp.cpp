/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7515
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7515
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
void test(val<bool> var_15, val<int> zero, val<bool*> var_17, val<unsigned char*> var_18, val<short*> var_19) {
    *var_17 = ((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)-58))));
    *var_18 *= ((/* implicit */val<unsigned char>) var_15);
    *var_19 = ((/* implicit */val<short>) (val<signed char>)-9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_15 = (bool)1;
int zero = 0;
bool var_17 = (bool)1;
unsigned char var_18 = (unsigned char)150;
short var_19 = (short)1324;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)150;
    value_mismatch |= var_19 != (short)-9;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, zero, &var_17, &var_18, &var_19);
  checksum();
}
