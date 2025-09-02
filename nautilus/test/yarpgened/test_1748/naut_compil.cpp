/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1748
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1748
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
void test(val<signed char> var_1, val<signed char> var_3, val<bool> var_4, val<signed char> var_5, val<signed char> var_6, val<unsigned int> var_8, val<bool> var_9, val<bool> var_10, val<signed char> var_11, val<bool> var_12, val<long long int> var_13, val<int> var_15, val<unsigned int> var_16, val<bool> var_17, val<bool> var_18, val<unsigned short> var_19, val<int> zero, val<bool*> var_20, val<bool*> var_21, val<unsigned int*> var_22, val<long long int*> var_23, val<signed char*> var_24, val<short*> var_25) {
    *var_20 *= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((var_9) ? (((var_15) ^ (((/* implicit */val<int>) (val<unsigned short>)20)))) : (((((/* implicit */val<int>) (val<bool>)1)) | (((/* implicit */val<int>) (val<bool>)1))))))) ? (((/* implicit */val<int>) var_18)) : (((/* implicit */val<int>) (val<unsigned char>)145))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) min(((val<short>)-756), (((/* implicit */val<short>) (val<bool>)1))))), (min((1785474564U), (4294967295U)))))) ? (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned int>) (val<bool>)1)), (((val<unsigned int>) var_13))))) : (max((((((/* implicit */val<bool>) 2U)) ? (((/* implicit */val<unsigned long long int>) var_13)) : (18446744073441116160ULL))), (((/* implicit */val<unsigned long long int>) ((var_16) | (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1)))))))))))
    {
        if (((/* implicit */val<bool>) min((((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) (+(0U))))))), (var_11))))
        {
            *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_1)) == (((/* implicit */val<int>) (val<bool>)1))))), (((((/* implicit */val<bool>) var_19)) ? (var_13) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)0)))))))) ? ((-((((val<bool>)1) ? (((/* implicit */val<int>) var_12)) : (((/* implicit */val<int>) var_11)))))) : (((/* implicit */val<int>) var_3))));
            *var_22 = ((/* implicit */val<unsigned int>) var_9);
        }

        *var_23 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (-(((((/* implicit */val<int>) (val<bool>)1)) ^ (((/* implicit */val<int>) (val<bool>)1))))))) ? (((((/* implicit */val<bool>) min((var_8), (var_16)))) ? (((/* implicit */val<int>) ((var_13) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3)))))) : (((/* implicit */val<int>) var_17)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) var_18)) : (var_15)))) || (((/* implicit */val<bool>) var_5)))))));
        *var_24 = ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_18))))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) max((((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_4)) < (((/* implicit */val<int>) var_1))))), (var_1))))) : (min((((/* implicit */val<unsigned int>) var_15)), ((-(490360597U)))))));
        *var_25 = ((/* implicit */val<short>) ((((/* implicit */val<int>) var_11)) == (((/* implicit */val<int>) ((((((/* implicit */val<int>) var_6)) < (((/* implicit */val<int>) var_10)))) || (((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_18)), (15U)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
signed char var_3 = (signed char)23;
bool var_4 = (bool)0;
signed char var_5 = (signed char)7;
signed char var_6 = (signed char)21;
unsigned int var_8 = 4293665994U;
bool var_9 = (bool)1;
bool var_10 = (bool)0;
signed char var_11 = (signed char)-75;
bool var_12 = (bool)0;
long long int var_13 = -2717093206928364173LL;
int var_15 = 95825066;
unsigned int var_16 = 2473031716U;
bool var_17 = (bool)1;
bool var_18 = (bool)0;
unsigned short var_19 = (unsigned short)5474;
int zero = 0;
bool var_20 = (bool)0;
bool var_21 = (bool)0;
unsigned int var_22 = 1412396139U;
long long int var_23 = 912062101662754628LL;
signed char var_24 = (signed char)-75;
short var_25 = (short)24450;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != 1U;
    value_mismatch |= var_23 != 1LL;
    value_mismatch |= var_24 != (signed char)-86;
    value_mismatch |= var_25 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_5, var_6, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_16, var_17, var_18, var_19, zero, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
