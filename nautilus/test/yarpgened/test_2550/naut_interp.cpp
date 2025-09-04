/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2550
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2550
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
void test(val<bool> var_3, val<int> var_7, val<short> var_9, val<long long int> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned long long int*> var_12, val<short*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) ^ (2894753940U)))) ? (var_10) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))))))));
    *var_13 = ((/* implicit */val<short>) (~(min((((/* implicit */val<int>) var_11)), (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) (val<unsigned char>)150))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
int var_7 = -1897558237;
short var_9 = (short)-31813;
long long int var_10 = -4880101991204234219LL;
unsigned char var_11 = (unsigned char)132;
int zero = 0;
unsigned long long int var_12 = 1412086117028533564ULL;
short var_13 = (short)32348;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0ULL;
    value_mismatch |= var_13 != (short)31812;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_9, var_10, var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
