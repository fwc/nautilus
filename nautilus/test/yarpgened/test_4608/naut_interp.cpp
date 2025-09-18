/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4608
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4608
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
void test(val<signed char> var_0, val<bool> var_2, val<unsigned int> var_7, val<unsigned int> var_8, val<signed char> var_10, val<long long int> var_11, val<int> zero, val<signed char*> var_12, val<unsigned char*> var_13, val<short*> var_14) {
    if (((/* implicit */val<bool>) max((((/* implicit */val<long long int>) max((((var_7) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)896))))), (((((/* implicit */val<int>) var_10)) != (((/* implicit */val<int>) var_2))))))), (max((((/* implicit */val<long long int>) min((var_8), (((/* implicit */val<unsigned int>) var_2))))), (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) / (var_11))))))))
    {
        *var_12 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) | (((var_11) % (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10)))))));
        *var_13 = ((/* implicit */val<unsigned char>) var_0);
    }

    *var_14 = ((/* implicit */val<short>) ((var_8) >= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
bool var_2 = (bool)0;
unsigned int var_7 = 2047153048U;
unsigned int var_8 = 54022274U;
signed char var_10 = (signed char)-75;
long long int var_11 = -6280048885692644341LL;
int zero = 0;
signed char var_12 = (signed char)65;
unsigned char var_13 = (unsigned char)6;
short var_14 = (short)24964;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (signed char)-16;
    value_mismatch |= var_13 != (unsigned char)12;
    value_mismatch |= var_14 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_7, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
}
