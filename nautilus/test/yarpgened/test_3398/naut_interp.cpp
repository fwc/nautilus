/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3398
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3398
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
void test(val<bool> var_7, val<unsigned long long int> var_10, val<int> zero, val<unsigned long long int*> var_15, val<unsigned int*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_16 |= ((/* implicit */val<unsigned int>) var_7);
    *var_17 = ((/* implicit */val<short>) min((*var_17), (((/* implicit */val<short>) ((((val<unsigned int>) (~(var_10)))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)13027))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)1;
unsigned long long int var_10 = 14707727061398078857ULL;
int zero = 0;
unsigned long long int var_15 = 15674883481869920701ULL;
unsigned int var_16 = 1082073123U;
short var_17 = (short)-28147;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1ULL;
    value_mismatch |= var_16 != 1082073123U;
    value_mismatch |= var_17 != (short)-28147;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, var_10, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
