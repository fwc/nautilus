/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6704
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6704
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<bool> var_0, val<unsigned long long int> var_2, val<unsigned short> var_5, val<bool> var_8, val<int> zero, val<int*> var_16, val<unsigned long long int*> var_17) {
    *var_16 = ((/* implicit */val<int>) var_0);
    *var_17 = ((/* implicit */val<unsigned long long int>) max((*var_17), (((/* implicit */val<unsigned long long int>) (((~(max((var_2), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)16832)))))) != (((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<int>) var_8)) >> (((((/* implicit */val<int>) (val<short>)9386)) - (9356))))), (((/* implicit */val<int>) var_5))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned long long int var_2 = 17309943525701934878ULL;
unsigned short var_5 = (unsigned short)23483;
bool var_8 = (bool)1;
int zero = 0;
int var_16 = 1815398880;
unsigned long long int var_17 = 3977759548488738990ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != 3977759548488738990ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_8, zero, &var_16, &var_17);
  checksum();
}
