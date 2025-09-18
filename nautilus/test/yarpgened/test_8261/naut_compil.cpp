/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8261
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8261
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
void test(val<unsigned int> var_1, val<long long int> var_6, val<signed char> var_13, val<int> var_15, val<int> var_16, val<bool> var_17, val<int> zero, val<signed char*> var_18, val<unsigned int*> var_19, val<unsigned char*> var_20, val<long long int*> var_21, val<long long int*> var_22) {
    *var_18 = ((/* implicit */val<signed char>) min((*var_18), (((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) -3394681950024578702LL)) ? (((var_1) ^ (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))))) : (((/* implicit */val<unsigned int>) var_15)))) >> (((max((var_15), (((/* implicit */val<int>) (val<signed char>)105)))) - (89))))))));
    if (((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<unsigned char>)0)))))
    {
        *var_19 = ((/* implicit */val<unsigned int>) var_16);
        *var_20 = ((/* implicit */val<unsigned char>) (val<signed char>)44);
        *var_21 -= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (((val<bool>)1) ? (70368743129088LL) : (((/* implicit */val<long long int>) -1908810720))))) ? (min((((/* implicit */val<unsigned int>) -1908810692)), ((~(3210309551U))))) : (((/* implicit */val<unsigned int>) (-(((((/* implicit */val<int>) (val<signed char>)-93)) - (((/* implicit */val<int>) var_13)))))))));
    }

    *var_22 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) ((((-1864377843) + (2147483647))) >> (((1908810720) - (1908810700)))))) ? (((/* implicit */val<long long int>) min((var_15), (((/* implicit */val<int>) var_13))))) : (((((/* implicit */val<bool>) var_15)) ? (var_6) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17))))))) < (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) -1908810699)) ? (1908810719) : (1908810719))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 552135093U;
long long int var_6 = 8190218220099201414LL;
signed char var_13 = (signed char)-54;
int var_15 = -307899356;
int var_16 = 332546574;
bool var_17 = (bool)0;
int zero = 0;
signed char var_18 = (signed char)75;
unsigned int var_19 = 2798376464U;
unsigned char var_20 = (unsigned char)149;
long long int var_21 = 4691016438252329546LL;
long long int var_22 = 1961357522053854180LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-24;
    value_mismatch |= var_19 != 2798376464U;
    value_mismatch |= var_20 != (unsigned char)149;
    value_mismatch |= var_21 != 4691016438252329546LL;
    value_mismatch |= var_22 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
