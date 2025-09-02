/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3326
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3326
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
void test(val<unsigned long long int> var_2, val<int> zero, val<unsigned short*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) ((val<unsigned char>) (val<unsigned short>)63662));
    *var_18 ^= ((/* implicit */val<unsigned short>) max((var_2), (((/* implicit */val<unsigned long long int>) ((min((-3427169682912497975LL), (((/* implicit */val<long long int>) (val<unsigned short>)0)))) + (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)63655)) + (((/* implicit */val<int>) (val<unsigned short>)33804))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10867383214504196759ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)28606;
unsigned short var_18 = (unsigned short)22183;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)174;
    value_mismatch |= var_18 != (unsigned short)64987;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
