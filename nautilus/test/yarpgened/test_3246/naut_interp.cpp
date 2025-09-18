/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3246
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3246
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
void test(val<unsigned int> var_4, val<bool> var_6, val<int> zero, val<long long int*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<long long int>) var_4);
    *var_12 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((var_6) && (((/* implicit */val<bool>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2939674896U;
bool var_6 = (bool)0;
int zero = 0;
long long int var_11 = 2964526520325751487LL;
unsigned char var_12 = (unsigned char)231;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 2939674896LL;
    value_mismatch |= var_12 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, zero, &var_11, &var_12);
  checksum();
}
