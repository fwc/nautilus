/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3821
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3821
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
void test(val<unsigned char> var_1, val<int> zero, val<long long int*> var_17, val<short*> var_18) {
    *var_17 |= ((/* implicit */val<long long int>) (~(min(((~(13304775847648899629ULL))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) 144252377403696910ULL)))))))));
    *var_18 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
int zero = 0;
long long int var_17 = -3341682166718053422LL;
short var_18 = (short)-26205;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1LL;
    value_mismatch |= var_18 != (short)-57;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
