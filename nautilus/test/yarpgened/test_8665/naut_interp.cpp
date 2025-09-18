/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8665
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8665
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
void test(val<short> var_2, val<unsigned short> var_3, val<unsigned short> var_4, val<long long int> var_6, val<int> var_8, val<bool> var_10, val<bool> var_12, val<unsigned long long int> var_13, val<int> zero, val<int*> var_14, val<unsigned short*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) -879306870)) : (var_13)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(var_10))))) : ((-(126100789566373888LL))))) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_3), (((/* implicit */val<unsigned short>) (val<bool>)0))))))));
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1))))) ? (((((/* implicit */val<bool>) var_2)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 2145386496LL)) ? (var_8) : (((/* implicit */val<int>) var_4)))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) : ((-((-(var_13)))))));
    *var_16 &= var_8;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22839;
unsigned short var_3 = (unsigned short)22232;
unsigned short var_4 = (unsigned short)33749;
long long int var_6 = 8556926720298509764LL;
int var_8 = -2139387672;
bool var_10 = (bool)0;
bool var_12 = (bool)0;
unsigned long long int var_13 = 803698873419395344ULL;
int zero = 0;
int var_14 = -1841082068;
unsigned short var_15 = (unsigned short)48053;
int var_16 = -799017216;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 22232;
    value_mismatch |= var_15 != (unsigned short)0;
    value_mismatch |= var_16 != -2141487104;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_4, var_6, var_8, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
