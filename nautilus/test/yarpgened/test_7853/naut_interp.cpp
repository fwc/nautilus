/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7853
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7853
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
void test(val<unsigned int> var_0, val<signed char> var_1, val<unsigned long long int> var_2, val<signed char> var_7, val<unsigned long long int> var_8, val<unsigned long long int> var_10, val<signed char> var_11, val<signed char> var_13, val<int> zero, val<unsigned long long int*> var_20, val<signed char*> var_21, val<signed char*> var_22, val<signed char*> var_23, val<unsigned int*> var_24, val<unsigned long long int*> var_25) {
    if (((/* implicit */val<bool>) (val<signed char>)90))
    {
        *var_20 = 2923957759077119595ULL;
        *var_21 |= ((/* implicit */val<signed char>) max(((((~(((/* implicit */val<int>) (val<signed char>)-7)))) | (((/* implicit */val<int>) ((var_10) >= (8617534749144588438ULL)))))), (((/* implicit */val<int>) var_1))));
        *var_22 = ((/* implicit */val<signed char>) min((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<signed char>)-18))))), (((((/* implicit */val<bool>) max((var_7), (var_11)))) ? (min((((/* implicit */val<unsigned int>) var_13)), (var_0))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<signed char>)5)))))));
    }

    *var_23 = (val<signed char>)6;
    *var_24 = ((/* implicit */val<unsigned int>) var_8);
    *var_25 = ((((((/* implicit */val<bool>) ((var_2) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)117)))))) && (((/* implicit */val<bool>) (~(((/* implicit */val<int>) (val<signed char>)53))))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_11))) : (min((((/* implicit */val<unsigned long long int>) (val<signed char>)1)), (7860195643908328641ULL))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1451313728U;
signed char var_1 = (signed char)-62;
unsigned long long int var_2 = 17577379532628062672ULL;
signed char var_7 = (signed char)-111;
unsigned long long int var_8 = 1960564722561414312ULL;
unsigned long long int var_10 = 17505940154468418785ULL;
signed char var_11 = (signed char)104;
signed char var_13 = (signed char)-57;
int zero = 0;
unsigned long long int var_20 = 17447449412199134976ULL;
signed char var_21 = (signed char)-88;
signed char var_22 = (signed char)-16;
signed char var_23 = (signed char)74;
unsigned int var_24 = 2581035336U;
unsigned long long int var_25 = 13250116917402175038ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 2923957759077119595ULL;
    value_mismatch |= var_21 != (signed char)-81;
    value_mismatch |= var_22 != (signed char)17;
    value_mismatch |= var_23 != (signed char)6;
    value_mismatch |= var_24 != 1198486696U;
    value_mismatch |= var_25 != 104ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_8, var_10, var_11, var_13, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
}
