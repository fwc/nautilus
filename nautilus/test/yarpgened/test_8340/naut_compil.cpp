/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8340
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8340
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
void test(val<bool> var_2, val<int> var_4, val<unsigned char> var_6, val<unsigned char> var_7, val<long long int> var_8, val<unsigned char> var_9, val<unsigned int> var_12, val<int> var_14, val<unsigned long long int> var_16, val<int> zero, val<short*> var_17, val<unsigned int*> var_18, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned int*> var_21, val<long long int*> var_22, val<unsigned char*> var_23) {
    *var_17 -= ((/* implicit */val<short>) (-(((/* implicit */val<int>) var_2))));
    if (((/* implicit */val<bool>) max((var_14), (((/* implicit */val<int>) var_9)))))
    {
        *var_18 = ((/* implicit */val<unsigned int>) max((*var_18), (var_12)));
        *var_19 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_16))))), (min((var_4), (((/* implicit */val<int>) min((var_6), (var_7))))))));
        *var_20 -= ((/* implicit */val<unsigned char>) ((var_16) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)18)))));
        *var_21 = ((/* implicit */val<unsigned int>) min((*var_21), (((/* implicit */val<unsigned int>) ((val<unsigned char>) var_14)))));
        *var_22 -= ((/* implicit */val<long long int>) var_16);
    }

    *var_23 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_4)) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)1;
int var_4 = 1099937330;
unsigned char var_6 = (unsigned char)67;
unsigned char var_7 = (unsigned char)34;
long long int var_8 = 7225043870770876782LL;
unsigned char var_9 = (unsigned char)63;
unsigned int var_12 = 3798027147U;
int var_14 = -1944253188;
unsigned long long int var_16 = 3641318465829718796ULL;
int zero = 0;
short var_17 = (short)19778;
unsigned int var_18 = 2863606267U;
unsigned char var_19 = (unsigned char)186;
unsigned char var_20 = (unsigned char)126;
unsigned int var_21 = 2687112633U;
long long int var_22 = 6639701995885257392LL;
unsigned char var_23 = (unsigned char)215;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)19779;
    value_mismatch |= var_18 != 3798027147U;
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != (unsigned char)125;
    value_mismatch |= var_21 != 252U;
    value_mismatch |= var_22 != 2998383530055538596LL;
    value_mismatch |= var_23 != (unsigned char)110;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, var_8, var_9, var_12, var_14, var_16, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
