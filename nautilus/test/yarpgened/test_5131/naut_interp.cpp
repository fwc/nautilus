/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5131
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5131
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
void test(val<signed char> var_1, val<signed char> var_2, val<signed char> var_3, val<signed char> var_5, val<signed char> var_6, val<signed char> var_7, val<signed char> var_8, val<signed char> var_9, val<signed char> var_12, val<signed char> var_13, val<signed char> var_14, val<signed char> var_15, val<int> zero, val<signed char*> var_16, val<signed char*> var_17, val<signed char*> var_18, val<signed char*> var_19, val<signed char*> var_20, val<signed char*> var_21, val<signed char*> var_22, val<signed char*> var_23) {
    *var_16 = ((/* implicit */val<signed char>) min((*var_16), (((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) var_9)) ? (((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<int>) (val<signed char>)-65)) : (((/* implicit */val<int>) var_9)))) : (((/* implicit */val<int>) var_8)))) & (((((/* implicit */val<bool>) (val<signed char>)(-127 - 1))) ? (((((/* implicit */val<int>) var_2)) ^ (((/* implicit */val<int>) (val<signed char>)-102)))) : (((/* implicit */val<int>) max((var_7), (var_12)))))))))));
    *var_17 = ((/* implicit */val<signed char>) ((((((/* implicit */val<int>) (val<signed char>)102)) ^ (((((/* implicit */val<bool>) (val<signed char>)116)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (val<signed char>)-15)))))) + (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)102)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_3))))) ? (((((/* implicit */val<bool>) (val<signed char>)-32)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) (val<signed char>)-17)))) : (((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) (val<signed char>)-112)) : (((/* implicit */val<int>) var_15))))))));
    if (((/* implicit */val<bool>) var_5))
    {
        *var_18 = var_6;
        *var_19 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)31))))) ? (((((/* implicit */val<bool>) (val<signed char>)31)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)-69)))) : ((~(((/* implicit */val<int>) var_9))))))) ? (((((/* implicit */val<int>) (val<signed char>)-1)) | (((((/* implicit */val<bool>) (val<signed char>)57)) ? (((/* implicit */val<int>) var_15)) : (((/* implicit */val<int>) var_15)))))) : (((/* implicit */val<int>) var_1))));
        *var_20 = ((/* implicit */val<signed char>) max((*var_20), (var_14)));
        *var_21 = ((/* implicit */val<signed char>) ((max((((/* implicit */val<int>) (val<signed char>)-115)), (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) (val<signed char>)1)) : (((/* implicit */val<int>) (val<signed char>)127)))))) - (((((((/* implicit */val<bool>) (val<signed char>)-97)) ? (((/* implicit */val<int>) (val<signed char>)-64)) : (((/* implicit */val<int>) (val<signed char>)59)))) - (((((/* implicit */val<bool>) (val<signed char>)-46)) ? (((/* implicit */val<int>) (val<signed char>)-110)) : (((/* implicit */val<int>) (val<signed char>)-64))))))));
    }

    *var_22 = ((/* implicit */val<signed char>) max((max((((((/* implicit */val<bool>) (val<signed char>)-1)) ? (((/* implicit */val<int>) (val<signed char>)36)) : (((/* implicit */val<int>) (val<signed char>)-92)))), ((-(((/* implicit */val<int>) (val<signed char>)24)))))), (((/* implicit */val<int>) (val<signed char>)23))));
    *var_23 *= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((((/* implicit */val<bool>) (val<signed char>)-51)) ? (((/* implicit */val<int>) (val<signed char>)110)) : (((/* implicit */val<int>) (val<signed char>)66)))) + (((((/* implicit */val<bool>) (val<signed char>)91)) ? (((/* implicit */val<int>) (val<signed char>)52)) : (((/* implicit */val<int>) var_3))))))) ? (((/* implicit */val<int>) ((((((/* implicit */val<bool>) (val<signed char>)-14)) ? (((/* implicit */val<int>) (val<signed char>)34)) : (((/* implicit */val<int>) (val<signed char>)127)))) >= ((-(((/* implicit */val<int>) (val<signed char>)-32))))))) : (((((/* implicit */val<bool>) (+(((/* implicit */val<int>) (val<signed char>)31))))) ? (((/* implicit */val<int>) var_12)) : (((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<signed char>)-42))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
signed char var_2 = (signed char)-109;
signed char var_3 = (signed char)-112;
signed char var_5 = (signed char)-61;
signed char var_6 = (signed char)-9;
signed char var_7 = (signed char)33;
signed char var_8 = (signed char)-102;
signed char var_9 = (signed char)33;
signed char var_12 = (signed char)63;
signed char var_13 = (signed char)37;
signed char var_14 = (signed char)104;
signed char var_15 = (signed char)61;
int zero = 0;
signed char var_16 = (signed char)-113;
signed char var_17 = (signed char)74;
signed char var_18 = (signed char)103;
signed char var_19 = (signed char)112;
signed char var_20 = (signed char)-69;
signed char var_21 = (signed char)43;
signed char var_22 = (signed char)125;
signed char var_23 = (signed char)83;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-113;
    value_mismatch |= var_17 != (signed char)-35;
    value_mismatch |= var_18 != (signed char)-9;
    value_mismatch |= var_19 != (signed char)-1;
    value_mismatch |= var_20 != (signed char)104;
    value_mismatch |= var_21 != (signed char)-45;
    value_mismatch |= var_22 != (signed char)36;
    value_mismatch |= var_23 != (signed char)83;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_9, var_12, var_13, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
