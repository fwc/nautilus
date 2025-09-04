/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9620
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9620
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
void test(val<unsigned int> var_1, val<int> var_2, val<unsigned int> var_3, val<unsigned int> var_4, val<unsigned long long int> var_5, val<int> var_6, val<unsigned int> var_8, val<long long int> var_10, val<unsigned int> var_13, val<unsigned int> var_14, val<bool> var_15, val<unsigned short> var_16, val<int> zero, val<unsigned int*> var_17, val<signed char*> var_18, val<signed char*> var_19, val<short*> var_20, val<short*> var_21, val<short*> var_22, val<signed char*> var_23, val<long long int*> var_24) {
    if (((/* implicit */val<bool>) max((var_8), (((/* implicit */val<unsigned int>) ((var_10) <= (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) 2972118350U)) ? (1322848946U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<unsigned short>)65535))))))))))))
    {
        *var_17 ^= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (-(var_13)))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) max((var_3), (((/* implicit */val<unsigned int>) var_6))))) >= (((((/* implicit */val<bool>) 0ULL)) ? (var_5) : (((/* implicit */val<unsigned long long int>) var_8))))))) : (((/* implicit */val<int>) var_16))));
        *var_18 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? (var_8) : (1218148729U)))), (min((((/* implicit */val<long long int>) var_2)), (var_10))))))));
        *var_19 = ((/* implicit */val<signed char>) ((var_2) & (var_6)));
    }
    else
    {
        *var_20 = ((/* implicit */val<short>) ((val<unsigned long long int>) var_13));
        *var_21 = ((/* implicit */val<short>) max((*var_21), (((/* implicit */val<short>) var_13))));
        *var_22 = ((/* implicit */val<short>) var_4);
    }

    *var_23 = ((/* implicit */val<signed char>) min((*var_23), (((/* implicit */val<signed char>) (~(((var_13) | (((/* implicit */val<unsigned int>) max((var_6), (((/* implicit */val<int>) (val<unsigned short>)1))))))))))));
    *var_24 ^= ((/* implicit */val<long long int>) max((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<unsigned long long int>) var_14)) : (6244487508820862386ULL)))) ? (((((/* implicit */val<bool>) 519718605)) ? (18446744073709551603ULL) : (((/* implicit */val<unsigned long long int>) -3672314631569256832LL)))) : (((/* implicit */val<unsigned long long int>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<unsigned short>)0)) : (((/* implicit */val<int>) (val<unsigned short>)0))))))), (((/* implicit */val<unsigned long long int>) min((var_1), (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_15)), (var_2)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2004532951U;
int var_2 = -1629512522;
unsigned int var_3 = 1769276099U;
unsigned int var_4 = 4042948692U;
unsigned long long int var_5 = 13442655671381559123ULL;
int var_6 = -429236350;
unsigned int var_8 = 442437469U;
long long int var_10 = 3345778634559152247LL;
unsigned int var_13 = 1821822642U;
unsigned int var_14 = 765037226U;
bool var_15 = (bool)1;
unsigned short var_16 = (unsigned short)16085;
int zero = 0;
unsigned int var_17 = 3054775844U;
signed char var_18 = (signed char)-25;
signed char var_19 = (signed char)-61;
short var_20 = (short)-21338;
short var_21 = (short)14850;
short var_22 = (short)-20079;
signed char var_23 = (signed char)33;
long long int var_24 = 8591904338023585319LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 3054775845U;
    value_mismatch |= var_18 != (signed char)0;
    value_mismatch |= var_19 != (signed char)-126;
    value_mismatch |= var_20 != (short)-21338;
    value_mismatch |= var_21 != (short)14850;
    value_mismatch |= var_22 != (short)-20079;
    value_mismatch |= var_23 != (signed char)33;
    value_mismatch |= var_24 != -8591904338023585324LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_6, var_8, var_10, var_13, var_14, var_15, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24);
  checksum();
  assert(!value_mismatch);
}
