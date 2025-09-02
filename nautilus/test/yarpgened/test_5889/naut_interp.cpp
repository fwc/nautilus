/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5889
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5889
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
void test(val<unsigned long long int> var_3, val<unsigned int> var_18, val<int> zero, val<unsigned short*> var_19, val<long long int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) (-(var_3)));
    *var_20 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<short>)-26325)) ? (((/* implicit */val<int>) (val<short>)-26325)) : (((/* implicit */val<int>) (val<short>)-26325))))) | (var_18)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16159893186896220910ULL;
unsigned int var_18 = 1969250487U;
int zero = 0;
unsigned short var_19 = (unsigned short)65122;
long long int var_20 = -3953594753352474104LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)44306;
    value_mismatch |= var_20 != 4294965695LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
