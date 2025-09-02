/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8683
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8683
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
void test(val<long long int> var_0, val<int> var_2, val<unsigned int> var_4, val<unsigned short> var_7, val<bool> var_9, val<unsigned long long int> var_10, val<long long int> var_12, val<unsigned int> var_14, val<long long int> var_16, val<int> var_18, val<int> zero, val<int*> var_19, val<unsigned int*> var_20, val<short*> var_21, val<unsigned short*> var_22, val<long long int*> var_23) {
    if ((!(((/* implicit */val<bool>) var_7))))
    {
        *var_19 = ((/* implicit */val<int>) var_12);
        *var_20 = var_4;
        if (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) (~(min((((/* implicit */val<unsigned int>) (val<bool>)1)), (2230722154U)))))) & (((((/* implicit */val<bool>) var_14)) ? (((((/* implicit */val<bool>) (val<unsigned short>)32767)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (var_16))) : (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_14)) ? (var_14) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)32760)))))))))))
        {
            *var_21 = ((/* implicit */val<short>) var_10);
            *var_22 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) var_2)) ^ (((-3243151463122326546LL) / (var_0)))));
        }

    }

    *var_23 = ((/* implicit */val<long long int>) var_18);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6192205318789015991LL;
int var_2 = 1308723030;
unsigned int var_4 = 2301053007U;
unsigned short var_7 = (unsigned short)20141;
bool var_9 = (bool)0;
unsigned long long int var_10 = 17895898169205985557ULL;
long long int var_12 = 7116825177175451381LL;
unsigned int var_14 = 1216755271U;
long long int var_16 = -9092689639586648690LL;
int var_18 = 860411415;
int zero = 0;
int var_19 = -747297866;
unsigned int var_20 = 2776620962U;
short var_21 = (short)14534;
unsigned short var_22 = (unsigned short)18577;
long long int var_23 = -2126564866100517236LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -747297866;
    value_mismatch |= var_20 != 2776620962U;
    value_mismatch |= var_21 != (short)14534;
    value_mismatch |= var_22 != (unsigned short)18577;
    value_mismatch |= var_23 != 860411415LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_7, var_9, var_10, var_12, var_14, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
