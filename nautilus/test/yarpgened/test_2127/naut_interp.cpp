/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2127
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2127
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
void test(val<unsigned long long int> var_0, val<signed char> var_1, val<short> var_2, val<unsigned int> var_4, val<unsigned short> var_6, val<long long int> var_9, val<int> zero, val<unsigned int*> var_10, val<int*> var_11, val<short*> var_12, val<int*> var_13, val<unsigned short*> var_14, val<unsigned short*> var_15, val<int*> var_16) {
    *var_10 = ((/* implicit */val<unsigned int>) (val<unsigned short>)6);
    *var_11 = ((/* implicit */val<int>) min((max((min((var_0), (((/* implicit */val<unsigned long long int>) (val<signed char>)88)))), (((/* implicit */val<unsigned long long int>) var_4)))), (((/* implicit */val<unsigned long long int>) min((max((var_9), (((/* implicit */val<long long int>) var_1)))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) var_6))))))))));
    if (((/* implicit */val<bool>) (val<signed char>)88))
    {
        *var_12 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<signed char>)-89))));
        *var_13 = ((/* implicit */val<int>) var_0);
        *var_14 &= ((/* implicit */val<unsigned short>) max((max((var_0), (((/* implicit */val<unsigned long long int>) var_4)))), (var_0)));
        *var_15 &= ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)-32749)) || ((!(((/* implicit */val<bool>) (val<signed char>)-99))))))), (var_0)));
        *var_16 = ((/* implicit */val<int>) var_2);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3815017689132652469ULL;
signed char var_1 = (signed char)-8;
short var_2 = (short)-8550;
unsigned int var_4 = 2223855249U;
unsigned short var_6 = (unsigned short)9429;
long long int var_9 = 5559000625570738338LL;
int zero = 0;
unsigned int var_10 = 36930657U;
int var_11 = -475215612;
short var_12 = (short)27426;
int var_13 = -2080270758;
unsigned short var_14 = (unsigned short)52509;
unsigned short var_15 = (unsigned short)14530;
int var_16 = 472605512;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 6U;
    value_mismatch |= var_11 != 1;
    value_mismatch |= var_12 != (short)0;
    value_mismatch |= var_13 != 479549365;
    value_mismatch |= var_14 != (unsigned short)17685;
    value_mismatch |= var_15 != (unsigned short)4224;
    value_mismatch |= var_16 != -8550;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
