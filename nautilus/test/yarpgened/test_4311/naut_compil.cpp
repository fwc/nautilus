/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4311
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4311
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
void test(val<bool> var_1, val<signed char> var_4, val<long long int> var_5, val<short> var_6, val<bool> var_8, val<unsigned int> var_10, val<signed char> var_11, val<unsigned long long int> var_12, val<int> var_13, val<int> zero, val<long long int*> var_15, val<unsigned int*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_11)) ? (min((((/* implicit */val<unsigned int>) (!(var_8)))), (max((((/* implicit */val<unsigned int>) (val<unsigned char>)120)), (2827728685U))))) : (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) ((var_10) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))))))));
    *var_16 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<unsigned long long int>) var_13)) + (var_12))), (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<bool>)1)))))))) ? (((max(((val<bool>)1), (var_1))) ? (max((((/* implicit */val<int>) (val<signed char>)0)), (8))) : (((/* implicit */val<int>) (val<unsigned char>)244)))) : (var_13)));
    *var_17 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_11)) >> (((min((max((var_5), (((/* implicit */val<long long int>) var_4)))), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_6)) * (((/* implicit */val<int>) var_1))))))) + (101LL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
signed char var_4 = (signed char)-98;
long long int var_5 = -5850114910034530234LL;
short var_6 = (short)20020;
bool var_8 = (bool)0;
unsigned int var_10 = 1829989504U;
signed char var_11 = (signed char)19;
unsigned long long int var_12 = 7820793502755016161ULL;
int var_13 = -1842483156;
int zero = 0;
long long int var_15 = 5810517059917090015LL;
unsigned int var_16 = 4011308191U;
long long int var_17 = 4132285313029705947LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 1LL;
    value_mismatch |= var_16 != 8U;
    value_mismatch |= var_17 != 2LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_5, var_6, var_8, var_10, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
