/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7225
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7225
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
void test(val<short> var_1, val<unsigned int> var_2, val<unsigned long long int> var_3, val<unsigned short> var_6, val<short> var_8, val<unsigned short> var_9, val<unsigned int> var_10, val<unsigned int> var_11, val<int> zero, val<unsigned long long int*> var_12, val<bool*> var_13, val<signed char*> var_14, val<short*> var_15) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((val<bool>) var_10))), (((val<unsigned int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)1536))) | (var_2)))))))
    {
        *var_12 = ((/* implicit */val<unsigned long long int>) var_9);
        *var_13 = ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6))) - (var_11)))) ? (min((((/* implicit */val<unsigned long long int>) var_8)), (var_3))) : (((/* implicit */val<unsigned long long int>) min((var_10), (((/* implicit */val<unsigned int>) (val<unsigned char>)93))))))), (var_3)));
    }

    *var_14 = ((/* implicit */val<signed char>) var_6);
    *var_15 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7287;
unsigned int var_2 = 3135782845U;
unsigned long long int var_3 = 6292366541243370997ULL;
unsigned short var_6 = (unsigned short)2620;
short var_8 = (short)21579;
unsigned short var_9 = (unsigned short)10634;
unsigned int var_10 = 1405976831U;
unsigned int var_11 = 2442955384U;
int zero = 0;
unsigned long long int var_12 = 5166817154423711167ULL;
bool var_13 = (bool)0;
signed char var_14 = (signed char)-96;
short var_15 = (short)-7107;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 10634ULL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (signed char)60;
    value_mismatch |= var_15 != (short)-7287;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_8, var_9, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
