/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9833
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9833
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
void test(val<long long int> var_3, val<long long int> var_7, val<short> var_10, val<int> zero, val<unsigned char*> var_12, val<unsigned long long int*> var_13, val<unsigned int*> var_14) {
    *var_12 = ((/* implicit */val<unsigned char>) var_10);
    *var_13 -= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) max(((((val<bool>)1) ? (-1012508812) : (134217727))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) (-2147483647 - 1))))))))) : (var_7)));
    *var_14 = ((/* implicit */val<unsigned int>) 210216894);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1974696265543534555LL;
long long int var_7 = 5563041106636430973LL;
short var_10 = (short)-6957;
int zero = 0;
unsigned char var_12 = (unsigned char)230;
unsigned long long int var_13 = 8876037767968253623ULL;
unsigned int var_14 = 524232417U;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)211;
    value_mismatch |= var_13 != 8876037767968253622ULL;
    value_mismatch |= var_14 != 210216894U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_10, zero, &var_12, &var_13, &var_14);
  checksum();
}
