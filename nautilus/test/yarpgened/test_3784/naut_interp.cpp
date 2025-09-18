/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3784
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3784
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
void test(val<unsigned short> var_1, val<int> var_3, val<unsigned long long int> var_5, val<unsigned long long int> var_7, val<unsigned short> var_8, val<long long int> var_10, val<short> var_15, val<unsigned short> var_16, val<int> var_17, val<int> zero, val<signed char*> var_19, val<signed char*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22, val<unsigned long long int*> var_23) {
    *var_19 = ((/* implicit */val<signed char>) var_17);
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(var_3))))))) : (var_17))))
    {
        *var_20 &= ((/* implicit */val<signed char>) ((val<unsigned long long int>) min((((/* implicit */val<unsigned long long int>) ((val<signed char>) var_10))), (var_5))));
        *var_21 = ((/* implicit */val<bool>) var_8);
    }

    *var_22 |= ((/* implicit */val<unsigned long long int>) var_15);
    *var_23 = ((/* implicit */val<unsigned long long int>) min((*var_23), ((-(min((((/* implicit */val<unsigned long long int>) var_1)), (var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5685;
int var_3 = -1245131034;
unsigned long long int var_5 = 8982506775693665282ULL;
unsigned long long int var_7 = 7798685329255744748ULL;
unsigned short var_8 = (unsigned short)1535;
long long int var_10 = 4411839420623835287LL;
short var_15 = (short)30738;
unsigned short var_16 = (unsigned short)34424;
int var_17 = 1678951229;
int zero = 0;
signed char var_19 = (signed char)119;
signed char var_20 = (signed char)-119;
bool var_21 = (bool)1;
unsigned long long int var_22 = 5846686246684457229ULL;
unsigned long long int var_23 = 3771605714971106123ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)61;
    value_mismatch |= var_20 != (signed char)-119;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 5846686246684457247ULL;
    value_mismatch |= var_23 != 3771605714971106123ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_7, var_8, var_10, var_15, var_16, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
