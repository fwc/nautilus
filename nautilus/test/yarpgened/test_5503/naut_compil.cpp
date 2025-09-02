/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5503
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5503
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
void test(val<short> var_6, val<long long int> var_9, val<bool> var_11, val<unsigned long long int> var_17, val<int> zero, val<unsigned char*> var_18, val<unsigned long long int*> var_19, val<unsigned short*> var_20, val<int*> var_21, val<long long int*> var_22) {
    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<short>)32767)))))
    {
        *var_18 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) 4294967295U))));
        *var_19 = ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (-(-2068954462)))) ? (((/* implicit */val<int>) (val<short>)-1775)) : (((/* implicit */val<int>) ((val<signed char>) var_17)))))) * (((val<unsigned long long int>) var_9)));
        *var_20 = ((/* implicit */val<unsigned short>) var_11);
        *var_21 = ((/* implicit */val<int>) var_6);
    }

    *var_22 = ((/* implicit */val<long long int>) (((~(min((((/* implicit */val<unsigned long long int>) (val<signed char>)-25)), (6853156349537127538ULL))))) % (((val<unsigned long long int>) (val<signed char>)47))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-8781;
long long int var_9 = 2867924489997738202LL;
bool var_11 = (bool)0;
unsigned long long int var_17 = 7698620236475916119ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)27;
unsigned long long int var_19 = 4105565768588323679ULL;
unsigned short var_20 = (unsigned short)12128;
int var_21 = -1812318292;
long long int var_22 = -1118633478842650726LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != 735394597850937466ULL;
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != -8781;
    value_mismatch |= var_22 != 27LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_11, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
