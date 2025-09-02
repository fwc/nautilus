/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3254
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3254
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
void test(val<unsigned char> var_0, val<long long int> var_1, val<long long int> var_2, val<bool> var_3, val<short> var_4, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<int> zero, val<unsigned long long int*> var_11, val<unsigned short*> var_12, val<unsigned short*> var_13, val<signed char*> var_14, val<unsigned long long int*> var_15) {
    *var_11 = ((/* implicit */val<unsigned long long int>) 7464875470783491817LL);
    if (((/* implicit */val<bool>) (-(max((min((var_6), (var_5))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_3))))))))))
    {
        *var_12 = ((/* implicit */val<unsigned short>) ((min((var_7), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_4)) * (((/* implicit */val<int>) (val<bool>)1))))))) % (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) ((13158597655916578268ULL) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-123)))))))))));
        *var_13 = ((/* implicit */val<unsigned short>) var_1);
    }

    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) var_2))));
    *var_15 = ((/* implicit */val<unsigned long long int>) (val<short>)21279);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
long long int var_1 = 2152909702686282629LL;
long long int var_2 = -3815879659696032902LL;
bool var_3 = (bool)0;
short var_4 = (short)20085;
unsigned long long int var_5 = 12454409166068619147ULL;
unsigned long long int var_6 = 16439819161577344566ULL;
unsigned long long int var_7 = 4083045432090514068ULL;
int zero = 0;
unsigned long long int var_11 = 16910039600660003097ULL;
unsigned short var_12 = (unsigned short)47976;
unsigned short var_13 = (unsigned short)65234;
signed char var_14 = (signed char)-95;
unsigned long long int var_15 = 10688101110722074206ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 7464875470783491817ULL;
    value_mismatch |= var_12 != (unsigned short)20085;
    value_mismatch |= var_13 != (unsigned short)37765;
    value_mismatch |= var_14 != (signed char)122;
    value_mismatch |= var_15 != 21279ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, zero, &var_11, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
