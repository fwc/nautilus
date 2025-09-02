/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6945
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6945
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
void test(val<unsigned long long int> var_0, val<unsigned short> var_2, val<unsigned char> var_6, val<signed char> var_8, val<unsigned char> var_9, val<int> var_10, val<unsigned int> var_11, val<int> var_12, val<int> zero, val<long long int*> var_13, val<unsigned char*> var_14, val<unsigned short*> var_15, val<signed char*> var_16, val<unsigned short*> var_17, val<bool*> var_18, val<unsigned short*> var_19, val<short*> var_20, val<unsigned long long int*> var_21, val<unsigned char*> var_22) {
    if (((/* implicit */val<bool>) min((var_8), (((/* implicit */val<signed char>) ((((/* implicit */val<int>) ((val<unsigned char>) var_9))) >= (((/* implicit */val<int>) (!((val<bool>)1))))))))))
    {
        *var_13 = ((/* implicit */val<long long int>) var_0);
        *var_14 = ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_8))));
    }

    *var_15 = ((/* implicit */val<unsigned short>) max((*var_15), (var_2)));
    if (((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) ((val<unsigned char>) (val<unsigned char>)230))), (((val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned char>)32)) == (((/* implicit */val<int>) var_6))))))))
    {
        *var_16 = ((/* implicit */val<signed char>) ((val<short>) var_8));
        *var_17 = ((/* implicit */val<unsigned short>) ((val<short>) (!((val<bool>)0))));
        if (((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_0))))) : (var_10))) * (((((/* implicit */val<int>) (val<unsigned char>)123)) / (8388480))))))
        {
            *var_18 ^= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) 3758290534U)) ? (((/* implicit */val<int>) (val<unsigned short>)32092)) : (1106453061)));
            *var_19 += ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) (val<unsigned char>)0))))), (var_11)));
            *var_20 &= ((/* implicit */val<short>) var_8);
            *var_21 ^= ((((/* implicit */val<bool>) max((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<unsigned char>)37)), ((val<unsigned short>)6512)))), (((val<int>) (val<signed char>)120))))) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((((/* implicit */val<short>) (!(((/* implicit */val<bool>) var_2))))), (((val<short>) var_12)))))));
        }

    }

    *var_22 = ((/* implicit */val<unsigned char>) ((val<unsigned short>) (val<unsigned char>)52));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14796981050421411868ULL;
unsigned short var_2 = (unsigned short)5794;
unsigned char var_6 = (unsigned char)49;
signed char var_8 = (signed char)-89;
unsigned char var_9 = (unsigned char)225;
int var_10 = 1965373809;
unsigned int var_11 = 3067578452U;
int var_12 = -227576817;
int zero = 0;
long long int var_13 = 2654907534046343107LL;
unsigned char var_14 = (unsigned char)90;
unsigned short var_15 = (unsigned short)8481;
signed char var_16 = (signed char)125;
unsigned short var_17 = (unsigned short)17111;
bool var_18 = (bool)0;
unsigned short var_19 = (unsigned short)21575;
short var_20 = (short)24120;
unsigned long long int var_21 = 3986926220315828810ULL;
unsigned char var_22 = (unsigned char)221;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -3649763023288139748LL;
    value_mismatch |= var_14 != (unsigned char)88;
    value_mismatch |= var_15 != (unsigned short)8481;
    value_mismatch |= var_16 != (signed char)125;
    value_mismatch |= var_17 != (unsigned short)17111;
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != (unsigned short)21575;
    value_mismatch |= var_20 != (short)24120;
    value_mismatch |= var_21 != 3986926220315828810ULL;
    value_mismatch |= var_22 != (unsigned char)52;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_6, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
