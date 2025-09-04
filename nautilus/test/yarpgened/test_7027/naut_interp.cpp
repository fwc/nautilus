/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7027
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7027
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
void test(val<long long int> var_4, val<bool> var_10, val<int> zero, val<long long int*> var_18, val<unsigned char*> var_19, val<int*> var_20) {
    *var_18 = var_4;
    *var_19 |= ((/* implicit */val<unsigned char>) (+(742061935790448314LL)));
    *var_20 -= ((/* implicit */val<int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -684980695221144885LL;
bool var_10 = (bool)1;
int zero = 0;
long long int var_18 = 4487831543396865774LL;
unsigned char var_19 = (unsigned char)142;
int var_20 = -521447159;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -684980695221144885LL;
    value_mismatch |= var_19 != (unsigned char)190;
    value_mismatch |= var_20 != -521447160;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_10, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
