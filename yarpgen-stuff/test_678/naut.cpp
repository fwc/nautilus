/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 678
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=678
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
void test(val<signed char> var_0, val<unsigned long long int> var_1, val<long long int> var_2, val<signed char> var_3, val<bool> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned char> var_7, val<unsigned int> var_9, val<int> zero, val<long long int*> var_10, val<long long int*> var_11, val<long long int*> var_12, val<long long int*> var_13, val<unsigned char*> var_14) {
    *var_10 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_5))));
    if (((/* implicit */val<bool>) var_9))
    {
        *var_11 = ((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_6))));
        *var_12 = ((/* implicit */val<long long int>) ((((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) min((var_4), (var_4))))) == (var_9))) ? (((/* implicit */val<unsigned long long int>) var_9)) : (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_3)), (var_9)))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_3))) : (var_1)))));
    }
    else
    {
        *var_13 = ((/* implicit */val<long long int>) min((*var_13), (((/* implicit */val<long long int>) var_3))));
        *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_0))))) ? ((+(var_1))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))))))))) ? (min((min((((/* implicit */val<unsigned long long int>) var_7)), (var_1))), (((/* implicit */val<unsigned long long int>) var_7)))) : (((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (!(var_4)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
unsigned long long int var_1 = 8351981369881453604ULL;
long long int var_2 = -1472003655363507766LL;
signed char var_3 = (signed char)18;
bool var_4 = (bool)0;
unsigned char var_5 = (unsigned char)219;
unsigned char var_6 = (unsigned char)235;
unsigned char var_7 = (unsigned char)202;
unsigned int var_9 = 3011390719U;
int zero = 0;
long long int var_10 = 8350774185420508LL;
long long int var_11 = 6549699740566806069LL;
long long int var_12 = -839012086154209199LL;
long long int var_13 = 2151014516415798047LL;
unsigned char var_14 = (unsigned char)195;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0LL;
    value_mismatch |= var_11 != -235LL;
    value_mismatch |= var_12 != 18LL;
    value_mismatch |= var_13 != 2151014516415798047LL;
    value_mismatch |= var_14 != (unsigned char)195;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
