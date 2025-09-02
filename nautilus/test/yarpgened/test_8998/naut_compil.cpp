/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8998
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8998
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
void test(val<unsigned short> var_0, val<int> var_1, val<int> var_3, val<long long int> var_6, val<unsigned long long int> var_8, val<bool> var_10, val<int> zero, val<bool*> var_11, val<unsigned short*> var_12) {
    *var_11 ^= ((/* implicit */val<bool>) (+(var_6)));
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_10))))) ? (((((/* implicit */val<unsigned long long int>) ((-1791379404) % (var_3)))) - (max((((/* implicit */val<unsigned long long int>) var_0)), (var_8))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24653;
int var_1 = -2133428388;
int var_3 = -1999774156;
long long int var_6 = -8079497390980788924LL;
unsigned long long int var_8 = 1331626617541357830ULL;
bool var_10 = (bool)1;
int zero = 0;
bool var_11 = (bool)1;
unsigned short var_12 = (unsigned short)48390;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)0;
    value_mismatch |= var_12 != (unsigned short)50990;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_8, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
