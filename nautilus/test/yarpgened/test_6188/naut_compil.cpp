/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6188
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6188
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
void test(val<signed char> var_1, val<long long int> var_3, val<unsigned int> var_4, val<unsigned char> var_7, val<signed char> var_10, val<int> var_16, val<int> zero, val<signed char*> var_19, val<unsigned int*> var_20, val<int*> var_21, val<bool*> var_22, val<short*> var_23, val<unsigned int*> var_24) {
    *var_19 = ((/* implicit */val<signed char>) (-(((/* implicit */val<int>) (!(((val<bool>) (-9223372036854775807LL - 1LL))))))));
    if (((/* implicit */val<bool>) var_10))
    {
        *var_20 ^= ((/* implicit */val<unsigned int>) -4879614173645654704LL);
        *var_21 += ((/* implicit */val<int>) (+(((((/* implicit */val<bool>) max((var_7), ((val<unsigned char>)92)))) ? (((/* implicit */val<unsigned long long int>) -1685485169)) : (((val<unsigned long long int>) (val<unsigned char>)92))))));
        *var_22 = ((/* implicit */val<bool>) var_4);
    }

    *var_23 = ((/* implicit */val<short>) min((((((((/* implicit */val<bool>) 1854033198)) ? (1099511627775ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)0))))) % (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<unsigned char>)158))))))), (((/* implicit */val<unsigned long long int>) (((((val<bool>)1) ? (var_3) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))))) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1))))))));
    *var_24 = ((/* implicit */val<unsigned int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
long long int var_3 = -333890149347791436LL;
unsigned int var_4 = 2551414668U;
unsigned char var_7 = (unsigned char)145;
signed char var_10 = (signed char)122;
int var_16 = 1817694131;
int zero = 0;
signed char var_19 = (signed char)-68;
unsigned int var_20 = 1288166127U;
int var_21 = 447385200;
bool var_22 = (bool)1;
short var_23 = (short)28531;
unsigned int var_24 = 344004558U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != 1713663935U;
    value_mismatch |= var_21 != -1238099969;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (short)-1;
    value_mismatch |= var_24 != 1817694131U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_10, var_16, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
}
