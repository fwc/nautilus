/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 964
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=964
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
void test(val<long long int> var_0, val<unsigned int> var_2, val<bool> var_4, val<long long int> var_6, val<long long int> var_7, val<unsigned int> var_10, val<unsigned short> var_12, val<bool> var_13, val<int> zero, val<long long int*> var_20, val<long long int*> var_21, val<long long int*> var_22, val<int*> var_23, val<bool*> var_24) {
    *var_20 = ((/* implicit */val<long long int>) min((*var_20), (((min(((~(var_6))), (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) var_12))))))) >> (((((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_13))))) ? (var_0) : (((/* implicit */val<long long int>) var_10)))) + (5780642254084750488LL)))))));
    *var_21 = ((/* implicit */val<long long int>) min((*var_21), (var_7)));
    *var_22 = ((/* implicit */val<long long int>) max((*var_22), (((/* implicit */val<long long int>) var_4))));
    *var_23 = ((/* implicit */val<int>) max((*var_23), (((/* implicit */val<int>) max((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<bool>)1))))), (var_7))))));
    *var_24 *= ((/* implicit */val<bool>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5780642254084750452LL;
unsigned int var_2 = 4279640486U;
bool var_4 = (bool)1;
long long int var_6 = -6141201686181646869LL;
long long int var_7 = 6937366474163931072LL;
unsigned int var_10 = 2798353113U;
unsigned short var_12 = (unsigned short)1904;
bool var_13 = (bool)0;
int zero = 0;
long long int var_20 = -7363140654144757007LL;
long long int var_21 = -3502841438868870898LL;
long long int var_22 = -558149827424029478LL;
int var_23 = 559141216;
bool var_24 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != -7363140654144757007LL;
    value_mismatch |= var_21 != -3502841438868870898LL;
    value_mismatch |= var_22 != 1LL;
    value_mismatch |= var_23 != 1899939776;
    value_mismatch |= var_24 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_7, var_10, var_12, var_13, zero, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
