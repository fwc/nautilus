/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4638
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4638
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
void test(val<unsigned long long int> var_1, val<unsigned long long int> var_3, val<unsigned long long int> var_6, val<short> var_7, val<unsigned long long int> var_8, val<unsigned long long int> var_11, val<short> var_15, val<int> zero, val<bool*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18, val<short*> var_19) {
    *var_16 = ((/* implicit */val<bool>) ((((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 0ULL)) ? (((/* implicit */val<int>) (val<short>)31)) : (((/* implicit */val<int>) (val<short>)27))))) ^ (((((/* implicit */val<bool>) (val<short>)-28)) ? (var_8) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_15))))))) & (max((((/* implicit */val<unsigned long long int>) min(((val<short>)(-32767 - 1)), ((val<short>)(-32767 - 1))))), (min((var_11), (((/* implicit */val<unsigned long long int>) (val<bool>)1))))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) min((*var_17), ((((!(((/* implicit */val<bool>) (-(0ULL)))))) ? (var_3) : (((((/* implicit */val<bool>) ((val<unsigned long long int>) 3640515246478551547ULL))) ? (((val<unsigned long long int>) var_1)) : (min((((/* implicit */val<unsigned long long int>) var_7)), (var_6)))))))));
    *var_18 |= ((/* implicit */val<long long int>) min(((-(((/* implicit */val<int>) min(((val<signed char>)107), ((val<signed char>)-122)))))), (((/* implicit */val<int>) (val<signed char>)-108))));
    *var_19 = ((/* implicit */val<short>) ((val<int>) var_7));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1418056954593085049ULL;
unsigned long long int var_3 = 9563913246915251505ULL;
unsigned long long int var_6 = 11891268917879177342ULL;
short var_7 = (short)-411;
unsigned long long int var_8 = 10678248922823311174ULL;
unsigned long long int var_11 = 8209372510132426793ULL;
short var_15 = (short)-23302;
int zero = 0;
bool var_16 = (bool)0;
unsigned long long int var_17 = 6506666890362303877ULL;
long long int var_18 = -6811191297267552707LL;
short var_19 = (short)-23757;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 6506666890362303877ULL;
    value_mismatch |= var_18 != -67LL;
    value_mismatch |= var_19 != (short)-411;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_7, var_8, var_11, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
