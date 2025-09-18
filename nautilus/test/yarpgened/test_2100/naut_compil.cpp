/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2100
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2100
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
void test(val<int> var_0, val<bool> var_1, val<long long int> var_2, val<bool> var_4, val<unsigned long long int> var_5, val<int> var_6, val<long long int> var_7, val<unsigned short> var_9, val<unsigned char> var_10, val<signed char> var_11, val<unsigned int> var_12, val<int> zero, val<unsigned short*> var_13, val<signed char*> var_14, val<unsigned long long int*> var_15, val<signed char*> var_16, val<unsigned int*> var_17, val<signed char*> var_18, val<unsigned short*> var_19) {
    *var_13 = ((/* implicit */val<unsigned short>) var_2);
    if (((/* implicit */val<bool>) var_10))
    {
        *var_14 = ((/* implicit */val<signed char>) var_5);
        *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_7)) ? (var_12) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((val<unsigned short>) (!(((/* implicit */val<bool>) var_5)))))))));
        if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_4)))))
        {
            *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)35789))) == (-3214388151918769492LL)));
            *var_17 = ((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_11))));
        }

        *var_18 = ((/* implicit */val<signed char>) (((!(((/* implicit */val<bool>) ((val<unsigned short>) (val<signed char>)-71))))) ? (var_6) : (min((((/* implicit */val<int>) min((var_10), (((/* implicit */val<unsigned char>) var_4))))), (((var_1) ? (((/* implicit */val<int>) var_9)) : (var_0)))))));
    }

    *var_19 |= ((/* implicit */val<unsigned short>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1026779461;
bool var_1 = (bool)0;
long long int var_2 = -7698784423894259512LL;
bool var_4 = (bool)1;
unsigned long long int var_5 = 1620951363933862879ULL;
int var_6 = -2026115352;
long long int var_7 = 3183936812436965875LL;
unsigned short var_9 = (unsigned short)16653;
unsigned char var_10 = (unsigned char)151;
signed char var_11 = (signed char)90;
unsigned int var_12 = 3571164043U;
int zero = 0;
unsigned short var_13 = (unsigned short)42046;
signed char var_14 = (signed char)67;
unsigned long long int var_15 = 1053598544179435343ULL;
signed char var_16 = (signed char)61;
unsigned int var_17 = 3558820497U;
signed char var_18 = (signed char)9;
unsigned short var_19 = (unsigned short)9376;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)59592;
    value_mismatch |= var_14 != (signed char)-33;
    value_mismatch |= var_15 != 3571164043ULL;
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != 4294967205U;
    value_mismatch |= var_18 != (signed char)-69;
    value_mismatch |= var_19 != (unsigned short)9377;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_5, var_6, var_7, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
