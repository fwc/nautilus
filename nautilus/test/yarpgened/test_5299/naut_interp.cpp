/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5299
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5299
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
void test(val<signed char> var_0, val<signed char> var_9, val<long long int> var_15, val<unsigned char> var_16, val<int> zero, val<signed char*> var_17, val<long long int*> var_18, val<long long int*> var_19) {
    *var_17 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_0))))) < (((((/* implicit */val<bool>) var_15)) ? (5709273456330829098LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9)))))));
    *var_18 = 5709273456330829075LL;
    *var_19 |= ((/* implicit */val<long long int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)60;
signed char var_9 = (signed char)122;
long long int var_15 = -9033912087484816719LL;
unsigned char var_16 = (unsigned char)206;
int zero = 0;
signed char var_17 = (signed char)-106;
long long int var_18 = -8236991841409298778LL;
long long int var_19 = 7680119968600755398LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)1;
    value_mismatch |= var_18 != 5709273456330829075LL;
    value_mismatch |= var_19 != 7680119968600755406LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_9, var_15, var_16, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
