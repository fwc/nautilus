/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9103
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9103
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
void test(val<int> var_0, val<signed char> var_1, val<unsigned char> var_2, val<int> var_3, val<long long int> var_5, val<unsigned int> var_6, val<int> var_7, val<unsigned long long int> var_9, val<int> var_10, val<unsigned int> var_11, val<int> var_13, val<unsigned int> var_14, val<int> zero, val<unsigned short*> var_15, val<unsigned int*> var_16, val<bool*> var_17, val<unsigned char*> var_18, val<signed char*> var_19, val<signed char*> var_20, val<unsigned long long int*> var_21, val<unsigned int*> var_22) {
    *var_15 -= ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))) - ((~(min((((/* implicit */val<long long int>) var_11)), ((-9223372036854775807LL - 1LL))))))));
    if (((/* implicit */val<bool>) var_14))
    {
        *var_16 = ((/* implicit */val<unsigned int>) (-(((((/* implicit */val<bool>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<signed char>)6)) : (((/* implicit */val<int>) (val<unsigned short>)3))))) ? (((/* implicit */val<long long int>) var_7)) : (((val<long long int>) 6648869915769985991LL))))));
        *var_17 = ((/* implicit */val<bool>) var_9);
    }
    else
    {
        if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<unsigned long long int>) (-(3738216143147127651LL)))) : (min((2078957410396905608ULL), (((/* implicit */val<unsigned long long int>) var_6))))))) ? ((-(((((/* implicit */val<bool>) var_1)) ? (16367786663312646016ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))))))) : (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<long long int>) var_10)) : (var_5))) - (((/* implicit */val<long long int>) var_3))))))))
        {
            *var_18 = ((/* implicit */val<unsigned char>) (val<signed char>)76);
            *var_19 = ((/* implicit */val<signed char>) var_13);
            *var_20 ^= ((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) var_6)) ? (var_13) : (((/* implicit */val<int>) var_2)))), (var_0)));
        }

        *var_21 = 14554263474777648522ULL;
        *var_22 = ((/* implicit */val<unsigned int>) var_10);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 816914752;
signed char var_1 = (signed char)-24;
unsigned char var_2 = (unsigned char)77;
int var_3 = 995760239;
long long int var_5 = -997814137617326695LL;
unsigned int var_6 = 1533062971U;
int var_7 = 913038468;
unsigned long long int var_9 = 8594117367723415310ULL;
int var_10 = 1350841675;
unsigned int var_11 = 1676589911U;
int var_13 = 1334472706;
unsigned int var_14 = 1752755788U;
int zero = 0;
unsigned short var_15 = (unsigned short)27751;
unsigned int var_16 = 3245599246U;
bool var_17 = (bool)1;
unsigned char var_18 = (unsigned char)0;
signed char var_19 = (signed char)26;
signed char var_20 = (signed char)125;
unsigned long long int var_21 = 15696610131046713771ULL;
unsigned int var_22 = 3064182098U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (unsigned short)27673;
    value_mismatch |= var_16 != 3381928828U;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != (signed char)26;
    value_mismatch |= var_20 != (signed char)125;
    value_mismatch |= var_21 != 15696610131046713771ULL;
    value_mismatch |= var_22 != 3064182098U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_9, var_10, var_11, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
}
