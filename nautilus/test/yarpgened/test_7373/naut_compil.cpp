/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7373
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7373
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<int> var_2, val<long long int> var_3, val<unsigned short> var_4, val<unsigned long long int> var_5, val<bool> var_6, val<unsigned short> var_7, val<short> var_8, val<long long int> var_10, val<int> var_11, val<unsigned char> var_12, val<long long int> var_14, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned int*> var_17, val<unsigned char*> var_18, val<int*> var_19, val<long long int*> var_20) {
    *var_15 = ((/* implicit */val<long long int>) var_7);
    if ((!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_12)))) : (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_8)) : (var_11))))))))
    {
        *var_16 = ((val<unsigned long long int>) var_5);
        *var_17 = ((/* implicit */val<unsigned int>) ((max((((/* implicit */val<long long int>) ((var_11) / (((/* implicit */val<int>) var_0))))), (var_3))) >> (((((/* implicit */val<int>) var_0)) / (((((/* implicit */val<bool>) var_3)) ? (var_2) : (((/* implicit */val<int>) var_6))))))));
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_0))))))) : (var_1))))
        {
            *var_18 ^= ((val<unsigned char>) (+(var_11)));
            *var_19 = ((/* implicit */val<int>) (((!(((/* implicit */val<bool>) var_3)))) ? (var_14) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_14))))));
            *var_20 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_0)), ((+(((/* implicit */val<int>) var_6))))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
unsigned int var_1 = 1647304254U;
int var_2 = 400841376;
long long int var_3 = -8334215165723337362LL;
unsigned short var_4 = (unsigned short)12140;
unsigned long long int var_5 = 8724662105778844964ULL;
bool var_6 = (bool)0;
unsigned short var_7 = (unsigned short)12259;
short var_8 = (short)23570;
long long int var_10 = -5972343787406449964LL;
int var_11 = 967332745;
unsigned char var_12 = (unsigned char)9;
long long int var_14 = -6085032073540983860LL;
int zero = 0;
long long int var_15 = 4606929286461751595LL;
unsigned long long int var_16 = 18428332094668091860ULL;
unsigned int var_17 = 3519257023U;
unsigned char var_18 = (unsigned char)174;
int var_19 = -986140304;
long long int var_20 = 4327313646413303888LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 12259LL;
    value_mismatch |= var_16 != 18428332094668091860ULL;
    value_mismatch |= var_17 != 3519257023U;
    value_mismatch |= var_18 != (unsigned char)174;
    value_mismatch |= var_19 != -986140304;
    value_mismatch |= var_20 != 4327313646413303888LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
