/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5380
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5380
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
void test(val<unsigned long long int> var_1, val<bool> var_6, val<short> var_10, val<int> zero, val<unsigned char*> var_20, val<unsigned int*> var_21, val<int*> var_22, val<unsigned int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned char>) (~(((((var_1) << (((((/* implicit */val<int>) (val<unsigned char>)71)) - (51))))) + (((/* implicit */val<unsigned long long int>) max((-2598875375137624519LL), (((/* implicit */val<long long int>) -1169355088)))))))));
    *var_21 &= ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (8621904466661537219ULL)));
    *var_22 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)511))) <= (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) -7347037139849127947LL)) || (((/* implicit */val<bool>) -1712970813)))))) * (1292494294648983347ULL)))));
    *var_23 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~((~(((/* implicit */val<int>) (val<bool>)1))))))) || (((/* implicit */val<bool>) ((var_6) ? ((~(((/* implicit */val<int>) var_10)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 536870911U))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2476886711850409222ULL;
bool var_6 = (bool)0;
short var_10 = (short)22112;
int zero = 0;
unsigned char var_20 = (unsigned char)187;
unsigned int var_21 = 2475026418U;
int var_22 = -206755198;
unsigned int var_23 = 3273514102U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)79;
    value_mismatch |= var_21 != 0U;
    value_mismatch |= var_22 != 1;
    value_mismatch |= var_23 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_10, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
