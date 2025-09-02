/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7547
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7547
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
void test(val<unsigned short> var_2, val<short> var_3, val<int> var_7, val<long long int> var_11, val<int> zero, val<bool*> var_17, val<unsigned short*> var_18, val<short*> var_19) {
    if (((/* implicit */val<bool>) min((((/* implicit */val<long long int>) var_7)), (((val<long long int>) ((var_11) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))))))
    {
        *var_17 = ((/* implicit */val<bool>) var_3);
        *var_18 *= ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) ((val<signed char>) (val<short>)-8700))) - (((/* implicit */val<int>) (val<short>)-8700))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (((val<long long int>) (!((val<bool>)1))))));
    }

    *var_19 = ((/* implicit */val<short>) ((val<unsigned short>) var_2));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17714;
short var_3 = (short)2958;
int var_7 = -47184218;
long long int var_11 = 5029925225884742347LL;
int zero = 0;
bool var_17 = (bool)1;
unsigned short var_18 = (unsigned short)2822;
short var_19 = (short)-19002;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned short)0;
    value_mismatch |= var_19 != (short)17714;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_11, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
