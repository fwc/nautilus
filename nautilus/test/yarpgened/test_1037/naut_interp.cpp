/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1037
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1037
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
void test(val<short> var_0, val<short> var_1, val<unsigned char> var_2, val<unsigned long long int> var_3, val<long long int> var_4, val<unsigned int> var_5, val<bool> var_6, val<bool> var_7, val<unsigned short> var_9, val<int> zero, val<int*> var_10, val<unsigned short*> var_11, val<long long int*> var_12, val<unsigned long long int*> var_13, val<unsigned int*> var_14) {
    *var_10 = ((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) != ((~(((/* implicit */val<int>) var_7))))));
    *var_11 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<unsigned long long int>) var_5)) == (var_3))) ? ((((-(((/* implicit */val<int>) var_9)))) + (((/* implicit */val<int>) min((var_9), (((/* implicit */val<unsigned short>) (val<signed char>)-122))))))) : (((/* implicit */val<int>) max((min((var_2), (((/* implicit */val<unsigned char>) var_7)))), (var_2))))));
    if (((/* implicit */val<bool>) max((((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) ((val<short>) var_4))) : (17))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_1))))))))
    {
        *var_12 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) ? (min((((((/* implicit */val<bool>) -18)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) : (623929660U))), (((/* implicit */val<unsigned int>) (val<bool>)1)))) : (((/* implicit */val<unsigned int>) ((11) - (((/* implicit */val<int>) ((val<unsigned char>) (val<short>)15220))))))));
        *var_13 ^= ((/* implicit */val<unsigned long long int>) var_5);
    }

    *var_14 = ((/* implicit */val<unsigned int>) (((val<bool>)1) ? (26ULL) : (((/* implicit */val<unsigned long long int>) var_5))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18884;
short var_1 = (short)-4670;
unsigned char var_2 = (unsigned char)56;
unsigned long long int var_3 = 4631815684551369475ULL;
long long int var_4 = -7672257853428370290LL;
unsigned int var_5 = 3535990378U;
bool var_6 = (bool)1;
bool var_7 = (bool)1;
unsigned short var_9 = (unsigned short)59782;
int zero = 0;
int var_10 = -1987054037;
unsigned short var_11 = (unsigned short)54431;
long long int var_12 = -6064256046768426859LL;
unsigned long long int var_13 = 5198543048949447320ULL;
unsigned int var_14 = 3207155589U;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1;
    value_mismatch |= var_11 != (unsigned short)56;
    value_mismatch |= var_12 != -6064256046768426860LL;
    value_mismatch |= var_13 != 5198543052418307314ULL;
    value_mismatch |= var_14 != 26U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, var_6, var_7, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
