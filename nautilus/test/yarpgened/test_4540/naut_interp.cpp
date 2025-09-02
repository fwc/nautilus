/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4540
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4540
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
void test(val<signed char> var_0, val<unsigned long long int> var_1, val<int> var_3, val<unsigned long long int> var_6, val<short> var_8, val<int> var_9, val<int> var_11, val<unsigned long long int> var_12, val<signed char> var_14, val<unsigned int> var_15, val<unsigned long long int> var_16, val<unsigned long long int> var_18, val<int> zero, val<signed char*> var_19, val<unsigned char*> var_20, val<unsigned int*> var_21, val<signed char*> var_22, val<long long int*> var_23, val<signed char*> var_24, val<short*> var_25) {
    *var_19 |= ((/* implicit */val<signed char>) ((val<short>) max((((val<unsigned long long int>) (val<signed char>)-9)), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_1))))))));
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_15)) ? (var_3) : (max(((-(((/* implicit */val<int>) (val<signed char>)-7)))), (((/* implicit */val<int>) ((var_16) == (var_12)))))))))
    {
        *var_20 = ((/* implicit */val<unsigned char>) max((*var_20), (((/* implicit */val<unsigned char>) max(((-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)9))))))), (var_11))))));
        *var_21 |= ((/* implicit */val<unsigned int>) max((min((((/* implicit */val<unsigned long long int>) (val<signed char>)8)), (((((/* implicit */val<unsigned long long int>) var_15)) - (var_6))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (~(var_11)))))))));
        if (((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)-3)) ? (var_15) : (((/* implicit */val<unsigned int>) var_9))))) ? ((+(((/* implicit */val<int>) (val<signed char>)3)))) : (((/* implicit */val<int>) ((val<unsigned char>) var_18))))) >= (((/* implicit */val<int>) ((val<short>) (~(((/* implicit */val<int>) (val<signed char>)4))))))))
        {
            *var_22 = ((/* implicit */val<signed char>) max((*var_22), (((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) var_8)))))));
            *var_23 = ((/* implicit */val<long long int>) (-((~(((/* implicit */val<int>) (val<signed char>)9))))));
            *var_24 = ((/* implicit */val<signed char>) max((*var_24), (((/* implicit */val<signed char>) max((((/* implicit */val<unsigned long long int>) (((!(((/* implicit */val<bool>) var_14)))) ? ((~(((/* implicit */val<int>) (val<signed char>)-24)))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11)))))))), (((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_0)), (var_16)))) ? (min((var_1), (((/* implicit */val<unsigned long long int>) (val<signed char>)9)))) : (((/* implicit */val<unsigned long long int>) var_11)))))))));
        }

        *var_25 ^= ((/* implicit */val<short>) (-(var_15)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
unsigned long long int var_1 = 10880720909507156194ULL;
int var_3 = 451001378;
unsigned long long int var_6 = 8601511617018232462ULL;
short var_8 = (short)-10517;
int var_9 = 1966959170;
int var_11 = -202525218;
unsigned long long int var_12 = 4824234516476587262ULL;
signed char var_14 = (signed char)-118;
unsigned int var_15 = 730711884U;
unsigned long long int var_16 = 6438296390152496212ULL;
unsigned long long int var_18 = 6043886300620936379ULL;
int zero = 0;
signed char var_19 = (signed char)-28;
unsigned char var_20 = (unsigned char)199;
unsigned int var_21 = 2228407677U;
signed char var_22 = (signed char)97;
long long int var_23 = 4314423302309934124LL;
signed char var_24 = (signed char)108;
short var_25 = (short)21503;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)-9;
    value_mismatch |= var_20 != (unsigned char)199;
    value_mismatch |= var_21 != 2228407677U;
    value_mismatch |= var_22 != (signed char)97;
    value_mismatch |= var_23 != 10LL;
    value_mismatch |= var_24 != (signed char)108;
    value_mismatch |= var_25 != (short)27467;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_8, var_9, var_11, var_12, var_14, var_15, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
