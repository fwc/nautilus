/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1568
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1568
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
void test(val<bool> var_1, val<unsigned long long int> var_2, val<signed char> var_6, val<unsigned int> var_8, val<unsigned long long int> var_9, val<long long int> var_10, val<int> zero, val<signed char*> var_12, val<unsigned long long int*> var_13, val<int*> var_14, val<unsigned short*> var_15, val<long long int*> var_16) {
    *var_12 = ((/* implicit */val<signed char>) ((val<unsigned int>) (val<signed char>)0));
    *var_13 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_1) ? (((/* implicit */val<int>) ((var_1) || (((/* implicit */val<bool>) var_8))))) : (((/* implicit */val<int>) ((var_9) >= (((/* implicit */val<unsigned long long int>) 2324802482U)))))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) & (var_2)))))))) : (((((/* implicit */val<bool>) (val<unsigned short>)0)) ? (var_10) : (((/* implicit */val<long long int>) 1970164813U))))));
    *var_14 = ((/* implicit */val<int>) var_8);
    *var_15 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) max((5824126524978983046ULL), (((/* implicit */val<unsigned long long int>) (val<signed char>)-1)))))));
    *var_16 = ((/* implicit */val<long long int>) (val<unsigned short>)27199);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
unsigned long long int var_2 = 14053486261005113046ULL;
signed char var_6 = (signed char)-51;
unsigned int var_8 = 4238082721U;
unsigned long long int var_9 = 12262101290981898752ULL;
long long int var_10 = 3511155703875206708LL;
int zero = 0;
signed char var_12 = (signed char)-71;
unsigned long long int var_13 = 18395866870541831208ULL;
int var_14 = 1699154501;
unsigned short var_15 = (unsigned short)49188;
long long int var_16 = 5581278751840772472LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)0;
    value_mismatch |= var_13 != 0ULL;
    value_mismatch |= var_14 != -56884575;
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != 27199LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_8, var_9, var_10, zero, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
