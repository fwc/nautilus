/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2519
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2519
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
void test(val<unsigned char> var_9, val<bool> var_11, val<int> zero, val<unsigned char*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (+((-(((/* implicit */val<int>) var_9)))))))));
    *var_18 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)71;
bool var_11 = (bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
unsigned char var_18 = (unsigned char)165;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)0;
    value_mismatch |= var_18 != (unsigned char)254;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, zero, &var_17, &var_18);
  checksum();
}
