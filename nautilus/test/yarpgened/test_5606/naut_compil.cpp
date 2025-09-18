/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5606
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5606
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
void test(val<unsigned long long int> var_3, val<int> zero, val<unsigned int*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<unsigned int>) min((var_3), (min((0ULL), (((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (val<unsigned short>)1)))))))));
    *var_16 |= ((/* implicit */val<short>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15263698237570204312ULL;
int zero = 0;
unsigned int var_15 = 890538038U;
short var_16 = (short)21451;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0U;
    value_mismatch |= var_16 != (short)-11301;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_15, &var_16);
  checksum();
}
