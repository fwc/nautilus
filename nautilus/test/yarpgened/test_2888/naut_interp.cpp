/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2888
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2888
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
void test(val<bool> var_9, val<signed char> var_11, val<int> zero, val<long long int*> var_15, val<long long int*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_11)), (((((/* implicit */val<int>) max(((val<unsigned short>)0), (((/* implicit */val<unsigned short>) (val<unsigned char>)49))))) / (((/* implicit */val<int>) (val<unsigned short>)987))))));
    *var_16 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_9 = (bool)0;
signed char var_11 = (signed char)6;
int zero = 0;
long long int var_15 = 725320727918465883LL;
long long int var_16 = 4758655539347071318LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != -1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_9, var_11, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
