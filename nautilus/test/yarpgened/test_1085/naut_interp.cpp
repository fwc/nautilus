/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1085
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1085
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_4, val<unsigned short> var_5, val<unsigned char> var_7, val<short> var_12, val<unsigned char> var_13, val<int> zero, val<unsigned char*> var_17, val<unsigned long long int*> var_18, val<signed char*> var_19, val<unsigned long long int*> var_20, val<bool*> var_21) {
    if (((/* implicit */val<bool>) var_13))
    {
        *var_17 = var_7;
        *var_18 = ((/* implicit */val<unsigned long long int>) var_0);
        *var_19 = ((/* implicit */val<signed char>) ((val<int>) 524370720));
    }

    *var_20 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_5)) >= (((/* implicit */val<int>) var_12))));
    *var_21 = ((/* implicit */val<bool>) (+((-(min((((/* implicit */val<unsigned long long int>) var_12)), (var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53441;
unsigned long long int var_4 = 12334093212743717736ULL;
unsigned short var_5 = (unsigned short)43739;
unsigned char var_7 = (unsigned char)17;
short var_12 = (short)-5356;
unsigned char var_13 = (unsigned char)0;
int zero = 0;
unsigned char var_17 = (unsigned char)202;
unsigned long long int var_18 = 15006852821674911026ULL;
signed char var_19 = (signed char)48;
unsigned long long int var_20 = 4038538152168812572ULL;
bool var_21 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)202;
    value_mismatch |= var_18 != 15006852821674911026ULL;
    value_mismatch |= var_19 != (signed char)48;
    value_mismatch |= var_20 != 1ULL;
    value_mismatch |= var_21 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_7, var_12, var_13, zero, &var_17, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
