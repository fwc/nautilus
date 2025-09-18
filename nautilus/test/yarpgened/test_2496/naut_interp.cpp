/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2496
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2496
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
void test(val<long long int> var_2, val<short> var_10, val<int> zero, val<long long int*> var_11, val<unsigned short*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) var_10);
    *var_12 = ((/* implicit */val<unsigned short>) var_2);
    *var_13 = ((((/* implicit */val<int>) ((((/* implicit */val<bool>) max(((val<unsigned char>)252), (((/* implicit */val<unsigned char>) (val<bool>)1))))) && (((/* implicit */val<bool>) max(((-2147483647 - 1)), (((/* implicit */val<int>) (val<bool>)1)))))))) >> (((/* implicit */val<int>) (!((val<bool>)0)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4723602871278410053LL;
short var_10 = (short)17453;
int zero = 0;
long long int var_11 = 2816453719776384310LL;
unsigned short var_12 = (unsigned short)53894;
int var_13 = 1574483367;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 17453LL;
    value_mismatch |= var_12 != (unsigned short)26299;
    value_mismatch |= var_13 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
}
