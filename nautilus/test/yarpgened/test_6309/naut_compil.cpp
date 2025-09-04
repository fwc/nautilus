/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6309
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6309
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
void test(val<unsigned long long int> var_0, val<long long int> var_1, val<short> var_2, val<unsigned char> var_3, val<unsigned char> var_5, val<bool> var_6, val<signed char> var_8, val<signed char> var_9, val<signed char> var_10, val<int> zero, val<unsigned char*> var_11, val<long long int*> var_12, val<bool*> var_13, val<long long int*> var_14, val<signed char*> var_15, val<long long int*> var_16, val<short*> var_17, val<short*> var_18) {
    *var_11 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<unsigned long long int>) 2626786172U)) * (((var_0) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))))))) / (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))));
    *var_12 += ((((((/* implicit */val<bool>) min((var_5), (((/* implicit */val<unsigned char>) var_10))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_10)) ^ (((/* implicit */val<int>) var_2))))) : (((var_6) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_9))) : (6294495328145979946LL))))) * (min((((/* implicit */val<long long int>) min(((val<bool>)1), ((val<bool>)1)))), (var_1))));
    *var_13 = ((/* implicit */val<bool>) var_2);
    if (((/* implicit */val<bool>) ((val<unsigned short>) max((((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (var_0))), (((/* implicit */val<unsigned long long int>) min((var_9), (var_9))))))))
    {
        *var_14 = ((/* implicit */val<long long int>) max((((/* implicit */val<signed char>) (val<bool>)1)), ((val<signed char>)29)));
        *var_15 += ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_5)) * (((/* implicit */val<int>) (val<short>)-2836))));
    }
    else
    {
        *var_16 = ((/* implicit */val<long long int>) min((*var_16), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) != (((/* implicit */val<int>) (val<short>)2836)))))))) ? (min(((((val<bool>)1) ? (((/* implicit */val<unsigned long long int>) 1668181124U)) : (5181497146978043686ULL))), (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) var_8)), ((val<unsigned short>)2745)))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) min((max(((val<unsigned short>)2745), ((val<unsigned short>)0))), (((/* implicit */val<unsigned short>) var_8)))))))))));
        *var_17 = ((/* implicit */val<short>) min((var_3), (var_5)));
    }

    *var_18 = ((/* implicit */val<short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535))) == (var_0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2911202374675710293ULL;
long long int var_1 = 522526267310924766LL;
short var_2 = (short)18969;
unsigned char var_3 = (unsigned char)224;
unsigned char var_5 = (unsigned char)210;
bool var_6 = (bool)0;
signed char var_8 = (signed char)120;
signed char var_9 = (signed char)2;
signed char var_10 = (signed char)-39;
int zero = 0;
unsigned char var_11 = (unsigned char)46;
long long int var_12 = -4737309602434024815LL;
bool var_13 = (bool)0;
long long int var_14 = -274276979391259395LL;
signed char var_15 = (signed char)-58;
long long int var_16 = -2640374677448766319LL;
short var_17 = (short)7071;
short var_18 = (short)-1512;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)0;
    value_mismatch |= var_12 != -4737309602434043823LL;
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 29LL;
    value_mismatch |= var_15 != (signed char)94;
    value_mismatch |= var_16 != -2640374677448766319LL;
    value_mismatch |= var_17 != (short)7071;
    value_mismatch |= var_18 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_6, var_8, var_9, var_10, zero, &var_11, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
