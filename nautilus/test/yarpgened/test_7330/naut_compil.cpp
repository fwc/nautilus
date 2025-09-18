/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7330
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7330
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
void test(val<int> zero, val<unsigned long long int*> var_19, val<unsigned int*> var_20) {
    *var_19 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)21519)) % (((/* implicit */val<int>) (val<unsigned short>)44016))));
    *var_20 = ((/* implicit */val<unsigned int>) min(((val<unsigned short>)21519), ((val<unsigned short>)44016)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_19 = 14952949083827673443ULL;
unsigned int var_20 = 568130066U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 4099ULL;
    value_mismatch |= var_20 != 21519U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_19, &var_20);
  checksum();
}
