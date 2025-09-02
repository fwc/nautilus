/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5945
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5945
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_2, val<int> var_3, val<unsigned int> var_4, val<unsigned long long int> var_6, val<long long int> var_8, val<int> var_10, val<short> var_13, val<short> var_16, val<short> var_17, val<int> var_18, val<int> zero, val<bool*> var_19, val<long long int*> var_20, val<unsigned int*> var_21, val<signed char*> var_22) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_18)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((val<unsigned int>) var_4))) ? (min((0), (var_18))) : (((var_10) << (((((var_18) + (2140634132))) - (16)))))))) : (min((((/* implicit */val<long long int>) (~(3460333263U)))), ((+(-7688315397421571119LL))))))))
    {
        *var_19 = ((/* implicit */val<bool>) var_2);
        *var_20 = ((((/* implicit */val<long long int>) var_3)) & (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 834634032U)) ? (var_0) : (((/* implicit */val<unsigned long long int>) 8911295432660144234LL))))) ? (var_8) : (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_17))))))));
    }

    *var_21 = ((/* implicit */val<unsigned int>) var_13);
    *var_22 = ((/* implicit */val<signed char>) (+(((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_16))))) ? (max((var_6), (((/* implicit */val<unsigned long long int>) var_18)))) : ((~(15729539670295947084ULL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15756002821202554230ULL;
unsigned char var_2 = (unsigned char)28;
int var_3 = -1591685434;
unsigned int var_4 = 3376005277U;
unsigned long long int var_6 = 759327977903682318ULL;
long long int var_8 = 2114248478714190273LL;
int var_10 = 422232882;
short var_13 = (short)2872;
short var_16 = (short)14517;
short var_17 = (short)-10115;
int var_18 = -2140634113;
int zero = 0;
bool var_19 = (bool)1;
long long int var_20 = 845288651011445081LL;
unsigned int var_21 = 109192322U;
signed char var_22 = (signed char)82;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != 2114248478637967552LL;
    value_mismatch |= var_21 != 2872U;
    value_mismatch |= var_22 != (signed char)-1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_8, var_10, var_13, var_16, var_17, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
