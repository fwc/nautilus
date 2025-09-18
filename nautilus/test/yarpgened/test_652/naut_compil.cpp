/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 652
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=652
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
void test(val<signed char> var_0, val<short> var_5, val<bool> var_7, val<unsigned short> var_9, val<unsigned char> var_12, val<bool> var_15, val<int> zero, val<unsigned short*> var_16, val<short*> var_17, val<unsigned short*> var_18, val<bool*> var_19) {
    *var_16 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<short>) (+(1300240991)))))) >= (min((3825491831264669658LL), (((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_12)))))))));
    *var_17 &= ((/* implicit */val<short>) ((val<int>) ((val<unsigned short>) var_0)));
    *var_18 = ((/* implicit */val<unsigned short>) min((*var_18), (((/* implicit */val<unsigned short>) var_5))));
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned short>)0))))) ? (((/* implicit */val<int>) ((val<unsigned short>) ((var_7) && (((/* implicit */val<bool>) var_9)))))) : ((-(((((/* implicit */val<int>) (val<short>)32764)) * (((/* implicit */val<int>) var_15))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)39;
short var_5 = (short)-24770;
bool var_7 = (bool)0;
unsigned short var_9 = (unsigned short)17811;
unsigned char var_12 = (unsigned char)40;
bool var_15 = (bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)60204;
short var_17 = (short)4774;
unsigned short var_18 = (unsigned short)60945;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)1;
    value_mismatch |= var_17 != (short)38;
    value_mismatch |= var_18 != (unsigned short)40766;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_7, var_9, var_12, var_15, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
