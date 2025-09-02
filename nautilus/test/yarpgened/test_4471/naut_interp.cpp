/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4471
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4471
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
void test(val<int> var_1, val<unsigned short> var_5, val<unsigned short> var_12, val<unsigned int> var_14, val<bool> var_17, val<int> var_18, val<unsigned int> var_19, val<int> zero, val<unsigned long long int*> var_20, val<unsigned int*> var_21, val<bool*> var_22, val<bool*> var_23, val<signed char*> var_24, val<unsigned short*> var_25) {
    if (((/* implicit */val<bool>) ((((((/* implicit */val<unsigned int>) var_18)) * (((((/* implicit */val<bool>) (val<signed char>)115)) ? (2031616U) : (((/* implicit */val<unsigned int>) -1458812520)))))) % (4292935680U))))
    {
        *var_20 = ((/* implicit */val<unsigned long long int>) (+(((/* implicit */val<int>) (((+(((/* implicit */val<int>) var_12)))) >= (((/* implicit */val<int>) var_5)))))));
        *var_21 = 3909594468U;
    }

    *var_22 |= var_17;
    *var_23 = ((/* implicit */val<bool>) var_14);
    *var_24 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<signed char>) -1085648113)))) + (var_19)));
    *var_25 = ((/* implicit */val<unsigned short>) ((val<int>) var_1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1697391787;
unsigned short var_5 = (unsigned short)38839;
unsigned short var_12 = (unsigned short)33475;
unsigned int var_14 = 489492556U;
bool var_17 = (bool)0;
int var_18 = 909677883;
unsigned int var_19 = 3853504539U;
int zero = 0;
unsigned long long int var_20 = 3122338648898625756ULL;
unsigned int var_21 = 46298212U;
bool var_22 = (bool)1;
bool var_23 = (bool)1;
signed char var_24 = (signed char)-120;
unsigned short var_25 = (unsigned short)14500;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != 3909594468U;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (bool)1;
    value_mismatch |= var_24 != (signed char)42;
    value_mismatch |= var_25 != (unsigned short)9387;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_12, var_14, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
