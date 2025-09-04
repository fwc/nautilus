/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 435
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=435
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
void test(val<signed char> var_1, val<unsigned int> var_3, val<unsigned char> var_8, val<int> zero, val<signed char*> var_10, val<bool*> var_11, val<unsigned char*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) max((*var_10), (((/* implicit */val<signed char>) -8678125413020046167LL))));
    *var_11 = ((/* implicit */val<bool>) var_1);
    *var_12 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<long long int>) var_3)), ((+(min((-8678125413020046192LL), (((/* implicit */val<long long int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
unsigned int var_3 = 2279815788U;
unsigned char var_8 = (unsigned char)250;
int zero = 0;
signed char var_10 = (signed char)10;
bool var_11 = (bool)0;
unsigned char var_12 = (unsigned char)83;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)10;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)108;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
