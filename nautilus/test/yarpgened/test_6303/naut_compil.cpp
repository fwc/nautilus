/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6303
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6303
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
void test(val<unsigned short> var_0, val<long long int> var_2, val<int> var_3, val<int> var_4, val<short> var_5, val<bool> var_6, val<int> var_8, val<bool> var_9, val<unsigned short> var_11, val<int> zero, val<int*> var_12, val<unsigned char*> var_13, val<unsigned int*> var_14, val<unsigned short*> var_15, val<short*> var_16, val<bool*> var_17) {
    *var_12 = var_8;
    *var_13 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned int>) var_9))) ? (var_4) : ((-(((/* implicit */val<int>) (val<signed char>)35))))))) ? ((-(((/* implicit */val<int>) var_6)))) : (((((/* implicit */val<int>) max((((/* implicit */val<unsigned short>) (val<unsigned char>)203)), (var_0)))) / ((-(((/* implicit */val<int>) (val<signed char>)35))))))));
    *var_14 += ((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) min(((val<short>)21389), ((val<short>)1)))) | (((/* implicit */val<int>) var_5)))) | (((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_9)) + (((/* implicit */val<int>) var_0))))) ? ((~(var_4))) : (((/* implicit */val<int>) ((((/* implicit */val<int>) var_5)) > (((/* implicit */val<int>) (val<short>)21389)))))))));
    *var_15 = ((/* implicit */val<unsigned short>) (val<unsigned char>)255);
    if ((((-((~(((/* implicit */val<int>) var_0)))))) > (((((var_6) ? (((/* implicit */val<int>) var_9)) : (var_4))) >> (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3)))))))))
    {
        *var_16 += ((/* implicit */val<short>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) min((var_11), (((/* implicit */val<unsigned short>) (val<signed char>)-31))))))))));
        *var_17 = ((/* implicit */val<bool>) max((*var_17), ((!(((/* implicit */val<bool>) min((min((var_2), (((/* implicit */val<long long int>) -2147483646)))), (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) (val<signed char>)-35))))))))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33213;
long long int var_2 = 3474810292886486000LL;
int var_3 = -675682696;
int var_4 = -2140971404;
short var_5 = (short)-3498;
bool var_6 = (bool)1;
int var_8 = -810192482;
bool var_9 = (bool)1;
unsigned short var_11 = (unsigned short)21813;
int zero = 0;
int var_12 = -1646966769;
unsigned char var_13 = (unsigned char)249;
unsigned int var_14 = 3401972566U;
unsigned short var_15 = (unsigned short)10919;
short var_16 = (short)-21379;
bool var_17 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -810192482;
    value_mismatch |= var_13 != (unsigned char)255;
    value_mismatch |= var_14 != 3401969461U;
    value_mismatch |= var_15 != (unsigned short)255;
    value_mismatch |= var_16 != (short)-21379;
    value_mismatch |= var_17 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_5, var_6, var_8, var_9, var_11, zero, &var_12, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
