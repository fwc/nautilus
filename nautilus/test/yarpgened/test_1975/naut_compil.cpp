/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1975
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1975
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
void test(val<long long int> var_0, val<unsigned char> var_1, val<bool> var_5, val<long long int> var_7, val<long long int> var_8, val<long long int> var_10, val<bool> var_12, val<long long int> var_13, val<int> zero, val<long long int*> var_14, val<long long int*> var_15, val<long long int*> var_16, val<unsigned char*> var_17, val<long long int*> var_18) {
    if (var_12)
    {
        *var_14 = ((/* implicit */val<long long int>) (val<signed char>)-21);
        *var_15 = ((((/* implicit */val<bool>) (+(var_10)))) ? (((((/* implicit */val<bool>) var_0)) ? ((-(var_7))) : (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_5))))))) : (((9223372036854775805LL) + (((val<long long int>) var_13)))));
        *var_16 = ((((/* implicit */val<bool>) ((val<long long int>) 126100789566373888LL))) ? (((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) : (var_8))) ^ (((val<long long int>) var_5)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<signed char>) max((((/* implicit */val<long long int>) var_1)), (var_0)))))));
        *var_17 |= ((/* implicit */val<unsigned char>) -9223372036854775806LL);
    }

    *var_18 = (~(var_10));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2442553568902728793LL;
unsigned char var_1 = (unsigned char)211;
bool var_5 = (bool)1;
long long int var_7 = -7386655925352907012LL;
long long int var_8 = -2123596673347103534LL;
long long int var_10 = 2298445261515247240LL;
bool var_12 = (bool)1;
long long int var_13 = -8262201523586745957LL;
int zero = 0;
long long int var_14 = 6996736502546324944LL;
long long int var_15 = 3531149549023632396LL;
long long int var_16 = 7471897382954979316LL;
unsigned char var_17 = (unsigned char)126;
long long int var_18 = 810659906838166705LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -21LL;
    value_mismatch |= var_15 != 7386655925352907012LL;
    value_mismatch |= var_16 != 0LL;
    value_mismatch |= var_17 != (unsigned char)126;
    value_mismatch |= var_18 != -2298445261515247241LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_7, var_8, var_10, var_12, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
