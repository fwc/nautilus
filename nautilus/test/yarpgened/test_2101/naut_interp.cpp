/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2101
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2101
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<unsigned short> var_2, val<bool> var_3, val<unsigned short> var_4, val<unsigned int> var_5, val<unsigned long long int> var_14, val<unsigned long long int> var_15, val<long long int> var_17, val<unsigned int> var_19, val<int> zero, val<long long int*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22, val<unsigned long long int*> var_23, val<unsigned int*> var_24, val<signed char*> var_25) {
    *var_20 = ((/* implicit */val<long long int>) (~((~(1595510383801984981ULL)))));
    *var_21 = ((/* implicit */val<bool>) var_15);
    if (((/* implicit */val<bool>) 16851233689907566620ULL))
    {
        *var_22 = var_14;
        *var_23 = ((/* implicit */val<unsigned long long int>) max((*var_23), (((/* implicit */val<unsigned long long int>) ((1595510383801984992ULL) > (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((var_0) / (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))) ? (var_17) : (4856147742400076161LL)))))))));
        *var_24 = ((min((((/* implicit */val<unsigned int>) (~(735458968)))), (var_5))) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))));
    }

    *var_25 += ((/* implicit */val<signed char>) max((5036145965428896873ULL), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_1)) ? (var_19) : (min((var_19), (((/* implicit */val<unsigned int>) var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2719926544U;
signed char var_1 = (signed char)-17;
unsigned short var_2 = (unsigned short)52186;
bool var_3 = (bool)1;
unsigned short var_4 = (unsigned short)226;
unsigned int var_5 = 665946574U;
unsigned long long int var_14 = 16768846664219519488ULL;
unsigned long long int var_15 = 12247967452881185266ULL;
long long int var_17 = -3769785131406974859LL;
unsigned int var_19 = 2621701130U;
int zero = 0;
long long int var_20 = 590892976234818238LL;
bool var_21 = (bool)0;
unsigned long long int var_22 = 14403981470430426408ULL;
unsigned long long int var_23 = 6828097123136201317ULL;
unsigned int var_24 = 14511689U;
signed char var_25 = (signed char)71;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1595510383801984981LL;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 16768846664219519488ULL;
    value_mismatch |= var_23 != 6828097123136201317ULL;
    value_mismatch |= var_24 != 58U;
    value_mismatch |= var_25 != (signed char)-80;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_14, var_15, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
