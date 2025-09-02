/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2172
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2172
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
void test(val<long long int> var_2, val<unsigned long long int> var_8, val<short> var_9, val<unsigned char> var_10, val<int> var_11, val<unsigned char> var_13, val<unsigned int> var_14, val<short> var_15, val<unsigned int> var_16, val<long long int> var_17, val<int> zero, val<signed char*> var_18, val<unsigned short*> var_19, val<unsigned long long int*> var_20, val<short*> var_21, val<short*> var_22, val<unsigned long long int*> var_23) {
    if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_15)))) << (((((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_9)), (-4184142905248539471LL)))) : (((((/* implicit */val<bool>) var_11)) ? (var_8) : (1921581614622774270ULL))))) - (4881ULL))))))
    {
        *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((1653800214378996026ULL) - (16792943859330555590ULL))) == (((/* implicit */val<unsigned long long int>) 573522811U)))))) ^ (var_17))))));
        *var_19 |= ((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) (val<unsigned short>)10600)) - (((/* implicit */val<int>) (val<short>)-12741))));
        *var_20 = ((/* implicit */val<unsigned long long int>) var_13);
        *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_2)) && (((/* implicit */val<bool>) min((1653800214378996025ULL), (((/* implicit */val<unsigned long long int>) ((16792943859330555590ULL) >= (16792943859330555576ULL)))))))));
    }

    *var_22 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_16)), (var_17)))) / ((+(max((1653800214378996051ULL), (((/* implicit */val<unsigned long long int>) (val<bool>)0))))))));
    *var_23 = ((/* implicit */val<unsigned long long int>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2548245673960102603LL;
unsigned long long int var_8 = 17527954076222097268ULL;
short var_9 = (short)4885;
unsigned char var_10 = (unsigned char)96;
int var_11 = -65841303;
unsigned char var_13 = (unsigned char)149;
unsigned int var_14 = 3614180459U;
short var_15 = (short)-28220;
unsigned int var_16 = 98491438U;
long long int var_17 = -3412189785322016752LL;
int zero = 0;
signed char var_18 = (signed char)105;
unsigned short var_19 = (unsigned short)6038;
unsigned long long int var_20 = 17608925656793308182ULL;
short var_21 = (short)-15155;
short var_22 = (short)-5587;
unsigned long long int var_23 = 6401207195671571410ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)105;
    value_mismatch |= var_19 != (unsigned short)24511;
    value_mismatch |= var_20 != 149ULL;
    value_mismatch |= var_21 != (short)1;
    value_mismatch |= var_22 != (short)0;
    value_mismatch |= var_23 != 96ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, var_10, var_11, var_13, var_14, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
