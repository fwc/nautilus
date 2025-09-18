/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3871
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3871
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
void test(val<short> var_3, val<unsigned char> var_4, val<bool> var_6, val<unsigned char> var_8, val<unsigned char> var_9, val<unsigned char> var_10, val<unsigned long long int> var_11, val<int> zero, val<short*> var_15, val<unsigned char*> var_16, val<unsigned long long int*> var_17, val<unsigned char*> var_18, val<signed char*> var_19, val<signed char*> var_20) {
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<unsigned char>)255))))) || (((/* implicit */val<bool>) var_11))));
    if (((/* implicit */val<bool>) ((val<unsigned long long int>) (val<unsigned char>)248)))
    {
        *var_16 = var_9;
        *var_17 = ((/* implicit */val<unsigned long long int>) var_3);
        *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (var_10)));
        *var_19 *= ((/* implicit */val<signed char>) ((min((((/* implicit */val<unsigned long long int>) var_8)), (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)122))) : (var_11))))) <= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) min((((/* implicit */val<short>) (val<unsigned char>)255)), (var_3)))) != (((/* implicit */val<int>) (!(var_6))))))))));
    }

    *var_20 = ((/* implicit */val<signed char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28750;
unsigned char var_4 = (unsigned char)78;
bool var_6 = (bool)0;
unsigned char var_8 = (unsigned char)70;
unsigned char var_9 = (unsigned char)168;
unsigned char var_10 = (unsigned char)68;
unsigned long long int var_11 = 13864988987907682852ULL;
int zero = 0;
short var_15 = (short)10188;
unsigned char var_16 = (unsigned char)232;
unsigned long long int var_17 = 14173784686525323476ULL;
unsigned char var_18 = (unsigned char)143;
signed char var_19 = (signed char)43;
signed char var_20 = (signed char)-90;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)1;
    value_mismatch |= var_16 != (unsigned char)168;
    value_mismatch |= var_17 != 18446744073709522866ULL;
    value_mismatch |= var_18 != (unsigned char)143;
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (signed char)-88;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_6, var_8, var_9, var_10, var_11, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
