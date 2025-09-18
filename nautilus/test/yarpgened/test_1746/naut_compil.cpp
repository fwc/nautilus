/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1746
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1746
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
void test(val<bool> var_4, val<unsigned long long int> var_5, val<bool> var_7, val<bool> var_11, val<signed char> var_13, val<int> var_16, val<int> zero, val<unsigned short*> var_19, val<signed char*> var_20, val<bool*> var_21, val<unsigned char*> var_22) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) max((((((/* implicit */val<int>) var_13)) * (((/* implicit */val<int>) var_7)))), (((var_4) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) var_4))))))) ? (((/* implicit */val<unsigned long long int>) -1819047664)) : (((((/* implicit */val<bool>) (val<unsigned short>)49132)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)-50))) : (12203784477078999134ULL)))));
    *var_20 |= ((/* implicit */val<signed char>) max((((val<unsigned long long int>) ((14431750063869757167ULL) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))))), (var_5)));
    if (((/* implicit */val<bool>) max(((val<signed char>)-25), ((val<signed char>)-50))))
    {
        *var_21 = ((/* implicit */val<bool>) var_16);
        *var_22 = ((/* implicit */val<unsigned char>) (+(((/* implicit */val<int>) ((((/* implicit */val<int>) ((((/* implicit */val<int>) (val<signed char>)-64)) > (((/* implicit */val<int>) var_4))))) < (((var_7) ? (var_16) : (((/* implicit */val<int>) var_11)))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)1;
unsigned long long int var_5 = 9301378228598199612ULL;
bool var_7 = (bool)1;
bool var_11 = (bool)1;
signed char var_13 = (signed char)74;
int var_16 = 936610525;
int zero = 0;
unsigned short var_19 = (unsigned short)56034;
signed char var_20 = (signed char)-122;
bool var_21 = (bool)1;
unsigned char var_22 = (unsigned char)155;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)35088;
    value_mismatch |= var_20 != (signed char)-66;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_11, var_13, var_16, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
