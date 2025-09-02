/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6576
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6576
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
void test(val<unsigned short> var_9, val<signed char> var_15, val<int> zero, val<long long int*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_9))));
    *var_18 ^= ((/* implicit */val<unsigned char>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)29098;
signed char var_15 = (signed char)66;
int zero = 0;
long long int var_17 = -5119363741683172036LL;
unsigned char var_18 = (unsigned char)113;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 29098LL;
    value_mismatch |= var_18 != (unsigned char)51;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_15, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
