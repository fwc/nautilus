/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6826
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6826
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
void test(val<int> var_4, val<int> var_6, val<unsigned long long int> var_10, val<unsigned int> var_12, val<unsigned int> var_13, val<int> var_15, val<int> var_16, val<bool> var_17, val<int> zero, val<unsigned char*> var_19, val<short*> var_20, val<bool*> var_21, val<signed char*> var_22, val<long long int*> var_23, val<unsigned short*> var_24) {
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 2477075078912722875LL)) ? (((/* implicit */val<unsigned long long int>) min((((val<int>) var_4)), (((/* implicit */val<int>) ((val<signed char>) (val<short>)-3567)))))) : (((val<unsigned long long int>) max((var_13), (((/* implicit */val<unsigned int>) var_17))))))))
    {
        *var_19 *= ((/* implicit */val<unsigned char>) ((var_16) - (-970582628)));
        *var_20 = ((/* implicit */val<short>) (~(var_6)));
        *var_21 = ((/* implicit */val<bool>) min((((((/* implicit */val<bool>) ((val<int>) (val<signed char>)-94))) ? (((/* implicit */val<unsigned long long int>) -1591770443)) : (15520895415060124213ULL))), (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_6)))));
        *var_22 = ((/* implicit */val<signed char>) var_12);
        *var_23 = ((/* implicit */val<long long int>) (~(var_15)));
    }

    *var_24 = ((/* implicit */val<unsigned short>) ((val<unsigned long long int>) ((min((((/* implicit */val<unsigned long long int>) var_13)), (12063739916082663509ULL))) + (var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 128147351;
int var_6 = 25793253;
unsigned long long int var_10 = 10786721225070007074ULL;
unsigned int var_12 = 135864600U;
unsigned int var_13 = 2078512331U;
int var_15 = -1749770738;
int var_16 = -1823783206;
bool var_17 = (bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)33;
short var_20 = (short)31089;
bool var_21 = (bool)0;
signed char var_22 = (signed char)-122;
long long int var_23 = -8728555141230301264LL;
unsigned short var_24 = (unsigned short)25387;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)254;
    value_mismatch |= var_20 != (short)27930;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (signed char)24;
    value_mismatch |= var_23 != 1749770737LL;
    value_mismatch |= var_24 != (unsigned short)26605;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_10, var_12, var_13, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
