/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2825
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2825
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
void test(val<bool> var_0, val<unsigned long long int> var_1, val<unsigned int> var_2, val<bool> var_4, val<unsigned int> var_7, val<unsigned char> var_8, val<unsigned char> var_9, val<short> var_10, val<short> var_11, val<unsigned int> var_12, val<unsigned long long int> var_13, val<bool> var_14, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned int*> var_17, val<unsigned int*> var_18, val<unsigned int*> var_19, val<signed char*> var_20, val<long long int*> var_21, val<short*> var_22) {
    *var_15 += ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) 497831974U)) ? (max((((/* implicit */val<unsigned int>) var_9)), (3797135322U))) : (((((/* implicit */val<bool>) var_7)) ? (21U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)-24508))))))) << (((/* implicit */val<int>) ((val<bool>) ((((/* implicit */val<bool>) var_12)) ? (var_1) : (((/* implicit */val<unsigned long long int>) 680877823U))))))));
    *var_16 -= min((((/* implicit */val<unsigned long long int>) var_7)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1559085446U)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10))) : (var_12)))) ? (((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)271))) : (var_13))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))));
    *var_17 -= max((((/* implicit */val<unsigned int>) ((val<signed char>) max((((/* implicit */val<unsigned int>) (val<short>)-23893)), (3797135322U))))), (((min((2069091700U), (401178248U))) + (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max(((val<short>)23899), ((val<short>)-23881))))))));
    if (((/* implicit */val<bool>) 2147418112U))
    {
        *var_18 = ((/* implicit */val<unsigned int>) max((var_10), (((/* implicit */val<short>) (!((!(((/* implicit */val<bool>) var_1)))))))));
        *var_19 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_11)) <= ((+(((/* implicit */val<int>) max((((/* implicit */val<short>) var_0)), (var_11))))))));
        if (((/* implicit */val<bool>) var_13))
        {
            *var_20 = ((/* implicit */val<signed char>) 22LL);
            *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) (!((!(var_14)))))) / ((~(((((/* implicit */val<int>) var_8)) * (((/* implicit */val<int>) var_4))))))));
            *var_22 = ((/* implicit */val<short>) max((((((/* implicit */val<unsigned long long int>) (~(-23LL)))) | (14815110203064906469ULL))), (((/* implicit */val<unsigned long long int>) var_10))));
        }

    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned long long int var_1 = 8769975510180431723ULL;
unsigned int var_2 = 3811377637U;
bool var_4 = (bool)0;
unsigned int var_7 = 1633121925U;
unsigned char var_8 = (unsigned char)230;
unsigned char var_9 = (unsigned char)181;
short var_10 = (short)24398;
short var_11 = (short)11917;
unsigned int var_12 = 4275994273U;
unsigned long long int var_13 = 15098618562174026117ULL;
bool var_14 = (bool)1;
int zero = 0;
long long int var_15 = -8340530323229015314LL;
unsigned long long int var_16 = 4704505150096949189ULL;
unsigned int var_17 = 2180201017U;
unsigned int var_18 = 1787260435U;
unsigned int var_19 = 386553386U;
signed char var_20 = (signed char)-102;
long long int var_21 = -4296117395269322639LL;
short var_22 = (short)30454;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -8340530319929711966LL;
    value_mismatch |= var_16 != 4704505150096948918ULL;
    value_mismatch |= var_17 != 2180201102U;
    value_mismatch |= var_18 != 24398U;
    value_mismatch |= var_19 != 1U;
    value_mismatch |= var_20 != (signed char)22;
    value_mismatch |= var_21 != -1LL;
    value_mismatch |= var_22 != (short)-3337;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_7, var_8, var_9, var_10, var_11, var_12, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
