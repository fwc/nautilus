/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5414
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5414
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
void test(val<signed char> var_1, val<bool> var_2, val<unsigned short> var_3, val<unsigned char> var_4, val<signed char> var_5, val<unsigned int> var_8, val<short> var_9, val<signed char> var_10, val<unsigned int> var_11, val<signed char> var_12, val<unsigned char> var_13, val<unsigned short> var_15, val<unsigned int> var_16, val<bool> var_17, val<int> zero, val<signed char*> var_18, val<long long int*> var_19, val<short*> var_20) {
    *var_18 *= ((/* implicit */val<signed char>) (((!(((var_2) && (((/* implicit */val<bool>) var_11)))))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_1))));
    if (((((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_12)) > (((/* implicit */val<int>) var_4))))) : (((/* implicit */val<int>) ((var_16) >= (var_8)))))) >= (((/* implicit */val<int>) var_10))))
    {
        *var_19 = ((/* implicit */val<long long int>) (+(((((/* implicit */val<bool>) max((((/* implicit */val<signed char>) var_17)), (var_5)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3))) : (((((/* implicit */val<bool>) var_4)) ? (var_11) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13)))))))));
        *var_20 = ((/* implicit */val<short>) min((*var_20), (((/* implicit */val<short>) var_15))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
bool var_2 = (bool)0;
unsigned short var_3 = (unsigned short)13107;
unsigned char var_4 = (unsigned char)83;
signed char var_5 = (signed char)56;
unsigned int var_8 = 2990681605U;
short var_9 = (short)-28848;
signed char var_10 = (signed char)30;
unsigned int var_11 = 755819957U;
signed char var_12 = (signed char)-43;
unsigned char var_13 = (unsigned char)83;
unsigned short var_15 = (unsigned short)58803;
unsigned int var_16 = 368747772U;
bool var_17 = (bool)1;
int zero = 0;
signed char var_18 = (signed char)-123;
long long int var_19 = 4445029800316538851LL;
short var_20 = (short)-9496;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)-112;
    value_mismatch |= var_19 != 4445029800316538851LL;
    value_mismatch |= var_20 != (short)-9496;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_5, var_8, var_9, var_10, var_11, var_12, var_13, var_15, var_16, var_17, zero, &var_18, &var_19, &var_20);
  checksum();
}
