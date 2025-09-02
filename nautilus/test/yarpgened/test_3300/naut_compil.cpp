/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3300
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3300
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
void test(val<signed char> var_1, val<unsigned long long int> var_3, val<unsigned long long int> var_11, val<short> var_17, val<int> zero, val<long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) var_1);
    *var_20 = ((((/* implicit */val<bool>) var_1)) ? (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_11)) ? (637114698) : (((/* implicit */val<int>) (val<unsigned char>)253))))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 1048575)) ? (((/* implicit */val<int>) (val<unsigned short>)1022)) : (((/* implicit */val<int>) var_17))))) : (var_3))) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)44;
unsigned long long int var_3 = 8279974992759073208ULL;
unsigned long long int var_11 = 3320727101846718492ULL;
short var_17 = (short)-18109;
int zero = 0;
long long int var_19 = 6444806664099214649LL;
unsigned long long int var_20 = 3569782169319737383ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 44LL;
    value_mismatch |= var_20 != 1022ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_11, var_17, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
