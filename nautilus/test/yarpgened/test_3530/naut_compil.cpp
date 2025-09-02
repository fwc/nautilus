/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3530
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3530
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_1, val<int> var_2, val<unsigned short> var_3, val<unsigned short> var_5, val<long long int> var_6, val<unsigned short> var_7, val<bool> var_8, val<unsigned short> var_11, val<long long int> var_12, val<int> zero, val<bool*> var_13, val<unsigned long long int*> var_14, val<unsigned long long int*> var_15, val<unsigned short*> var_16, val<signed char*> var_17) {
    if (((/* implicit */val<bool>) min((((var_0) ^ (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<unsigned short>)23))))))), (((/* implicit */val<unsigned long long int>) max((var_2), (((/* implicit */val<int>) ((val<bool>) var_6)))))))))
    {
        *var_13 = ((/* implicit */val<bool>) var_0);
        *var_14 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) var_11)))) ? (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_0)) && (((/* implicit */val<bool>) var_1))))) : (((/* implicit */val<int>) var_5)))))));
        *var_15 = ((/* implicit */val<unsigned long long int>) min((*var_15), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) (val<unsigned short>)65520)), (((var_8) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) max(((val<unsigned short>)65502), ((val<unsigned short>)19)))))))))));
    }

    *var_16 -= ((/* implicit */val<unsigned short>) (-(((/* implicit */val<int>) (val<unsigned char>)197))));
    *var_17 &= ((/* implicit */val<signed char>) min((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))) : (var_12)))) ? (((/* implicit */val<long long int>) max((((/* implicit */val<int>) (val<unsigned short>)29917)), (0)))) : (min((((/* implicit */val<long long int>) var_5)), (var_12))))), (((/* implicit */val<long long int>) max((max(((val<unsigned short>)22), ((val<unsigned short>)37))), (((/* implicit */val<unsigned short>) (val<unsigned char>)59)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8824067482253254565ULL;
unsigned char var_1 = (unsigned char)79;
int var_2 = 372878828;
unsigned short var_3 = (unsigned short)10667;
unsigned short var_5 = (unsigned short)31844;
long long int var_6 = 6069828245759857492LL;
unsigned short var_7 = (unsigned short)17679;
bool var_8 = (bool)1;
unsigned short var_11 = (unsigned short)60871;
long long int var_12 = -2660910228652506520LL;
int zero = 0;
bool var_13 = (bool)0;
unsigned long long int var_14 = 6596927507091705693ULL;
unsigned long long int var_15 = 4945415014931631694ULL;
unsigned short var_16 = (unsigned short)8500;
signed char var_17 = (signed char)83;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 0ULL;
    value_mismatch |= var_15 != 17679ULL;
    value_mismatch |= var_16 != (unsigned short)8697;
    value_mismatch |= var_17 != (signed char)19;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_7, var_8, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
