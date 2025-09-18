/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3949
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3949
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
void test(val<unsigned char> var_0, val<unsigned char> var_1, val<unsigned char> var_3, val<unsigned char> var_4, val<unsigned char> var_6, val<unsigned char> var_7, val<unsigned char> var_8, val<unsigned char> var_11, val<unsigned char> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<unsigned char*> var_16, val<unsigned char*> var_17, val<unsigned char*> var_18, val<unsigned char*> var_19) {
    *var_14 = var_0;
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((val<unsigned char>) max((var_13), ((val<unsigned char>)179))))) < (((/* implicit */val<int>) ((val<unsigned char>) max((var_6), (var_4)))))));
    *var_16 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)243)))))) ? (((/* implicit */val<int>) ((val<unsigned char>) ((val<unsigned char>) var_1)))) : (((((/* implicit */val<bool>) ((val<unsigned char>) (val<unsigned char>)190))) ? (((/* implicit */val<int>) var_8)) : (((((/* implicit */val<int>) (val<unsigned char>)77)) - (((/* implicit */val<int>) (val<unsigned char>)173))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)75)) ? (((/* implicit */val<int>) (val<unsigned char>)128)) : (((/* implicit */val<int>) (val<unsigned char>)103)))))
    {
        *var_17 = ((/* implicit */val<unsigned char>) max((*var_17), (max((var_7), (min(((val<unsigned char>)15), (var_3)))))));
        *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) var_4)) / (((/* implicit */val<int>) var_11))));
    }

    *var_19 += ((/* implicit */val<unsigned char>) (((!(((/* implicit */val<bool>) (val<unsigned char>)252)))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned char>)11)) ? (((/* implicit */val<int>) (val<unsigned char>)255)) : (((/* implicit */val<int>) (val<unsigned char>)255)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
unsigned char var_1 = (unsigned char)180;
unsigned char var_3 = (unsigned char)179;
unsigned char var_4 = (unsigned char)81;
unsigned char var_6 = (unsigned char)34;
unsigned char var_7 = (unsigned char)137;
unsigned char var_8 = (unsigned char)142;
unsigned char var_11 = (unsigned char)13;
unsigned char var_13 = (unsigned char)171;
int zero = 0;
unsigned char var_14 = (unsigned char)173;
unsigned char var_15 = (unsigned char)20;
unsigned char var_16 = (unsigned char)208;
unsigned char var_17 = (unsigned char)196;
unsigned char var_18 = (unsigned char)236;
unsigned char var_19 = (unsigned char)99;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)20;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != (unsigned char)180;
    value_mismatch |= var_17 != (unsigned char)196;
    value_mismatch |= var_18 != (unsigned char)6;
    value_mismatch |= var_19 != (unsigned char)100;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_4, var_6, var_7, var_8, var_11, var_13, zero, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19);
  checksum();
}
