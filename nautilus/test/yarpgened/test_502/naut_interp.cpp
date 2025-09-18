/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 502
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=502
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
void test(val<int> var_0, val<int> var_3, val<int> var_4, val<unsigned short> var_6, val<unsigned long long int> var_9, val<signed char> var_10, val<long long int> var_12, val<int> var_15, val<short> var_17, val<bool> var_18, val<int> zero, val<int*> var_20, val<unsigned long long int*> var_21, val<bool*> var_22) {
    *var_20 = (-(((/* implicit */val<int>) var_10)));
    if (((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) var_12)) * (((((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0))) : (var_9))) << (((var_12) - (860908975028581356LL))))))))
    {
        *var_21 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) var_15)) & (((((/* implicit */val<bool>) var_17)) ? (8242716645005728152LL) : (((/* implicit */val<long long int>) var_0))))))) ? (((((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) ? (((/* implicit */val<int>) (val<unsigned char>)0)) : (var_4))) << (((var_3) - (878925416))))) : (((/* implicit */val<int>) var_18))));
        *var_22 = ((/* implicit */val<bool>) (-(((((/* implicit */val<int>) (val<bool>)0)) << (((/* implicit */val<int>) var_18))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1383534847;
int var_3 = 878925416;
int var_4 = 1916992974;
unsigned short var_6 = (unsigned short)36088;
unsigned long long int var_9 = 16896190391481623083ULL;
signed char var_10 = (signed char)-111;
long long int var_12 = 860908975028581365LL;
int var_15 = -674705572;
short var_17 = (short)32149;
bool var_18 = (bool)1;
int zero = 0;
int var_20 = 686124014;
unsigned long long int var_21 = 128446439885031826ULL;
bool var_22 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 111;
    value_mismatch |= var_21 != 128446439885031826ULL;
    value_mismatch |= var_22 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_9, var_10, var_12, var_15, var_17, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
}
