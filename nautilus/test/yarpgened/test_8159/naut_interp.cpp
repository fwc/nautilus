/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8159
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8159
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
void test(val<long long int> var_0, val<unsigned int> var_1, val<int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_5, val<unsigned int> var_7, val<bool> var_8, val<int> zero, val<bool*> var_11, val<unsigned int*> var_12, val<int*> var_13) {
    *var_11 = ((/* implicit */val<bool>) max((*var_11), (((/* implicit */val<bool>) var_2))));
    *var_12 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_1)) ? (var_2) : (((/* implicit */val<int>) var_8))))), (((((/* implicit */val<bool>) var_5)) ? (var_0) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))))) ? (((((/* implicit */val<int>) ((245554172) == (-1)))) / (var_2))) : (((/* implicit */val<int>) ((((((/* implicit */val<bool>) -1340801654)) ? (var_3) : (((/* implicit */val<unsigned long long int>) 1340801654)))) == (((/* implicit */val<unsigned long long int>) (~(var_0)))))))));
    *var_13 = ((/* implicit */val<int>) max((*var_13), (((/* implicit */val<int>) (((-(var_1))) / (var_7))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4800693409128518591LL;
unsigned int var_1 = 1547494480U;
int var_2 = 1398111150;
unsigned long long int var_3 = 286083822315829439ULL;
unsigned short var_5 = (unsigned short)43920;
unsigned int var_7 = 3154011985U;
bool var_8 = (bool)1;
int zero = 0;
bool var_11 = (bool)0;
unsigned int var_12 = 1221970339U;
int var_13 = 2112970224;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != 1221970339U;
    value_mismatch |= var_13 != 2112970224;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
}
