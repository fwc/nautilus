/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1090
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1090
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
void test(val<long long int> var_0, val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned int> var_4, val<unsigned long long int> var_5, val<short> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_9, val<int> zero, val<short*> var_10, val<signed char*> var_11, val<unsigned char*> var_12, val<int*> var_13, val<unsigned int*> var_14, val<unsigned char*> var_15) {
    if (((/* implicit */val<bool>) var_0))
    {
        *var_10 = ((/* implicit */val<short>) (-(((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_2)), (0U)))) ? (((/* implicit */val<int>) ((val<signed char>) 8388607))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_3)))))))));
        *var_11 = ((/* implicit */val<signed char>) min((*var_11), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) (val<short>)-31835)) * (((/* implicit */val<int>) (val<unsigned char>)12)))))));
        *var_12 = ((/* implicit */val<unsigned char>) var_7);
        *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) min((32256U), (((/* implicit */val<unsigned int>) 1330873465))))) | (max((min((var_7), (((/* implicit */val<unsigned long long int>) var_3)))), (var_9)))));
        *var_14 = ((/* implicit */val<unsigned int>) (+(max((min((var_5), (11481636807345065952ULL))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<unsigned char>)181)))))))));
    }

    *var_15 ^= ((/* implicit */val<unsigned char>) ((var_4) << (((((/* implicit */val<int>) ((val<unsigned char>) var_6))) - (189)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 821321572571044273LL;
unsigned char var_2 = (unsigned char)141;
unsigned char var_3 = (unsigned char)182;
unsigned int var_4 = 532242036U;
unsigned long long int var_5 = 12465773285385734273ULL;
short var_6 = (short)22232;
unsigned long long int var_7 = 8599302143176007320ULL;
unsigned long long int var_9 = 4560526164571896666ULL;
int zero = 0;
short var_10 = (short)12780;
signed char var_11 = (signed char)41;
unsigned char var_12 = (unsigned char)158;
int var_13 = 739642183;
unsigned int var_14 = 1393132081U;
unsigned char var_15 = (unsigned char)88;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-1;
    value_mismatch |= var_11 != (signed char)-68;
    value_mismatch |= var_12 != (unsigned char)152;
    value_mismatch |= var_13 != 1278148442;
    value_mismatch |= var_14 != 232411104U;
    value_mismatch |= var_15 != (unsigned char)88;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
