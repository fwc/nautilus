/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1526
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1526
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<unsigned char> var_5, val<int> var_6, val<unsigned long long int> var_8, val<unsigned char> var_9, val<short> var_10, val<unsigned char> var_12, val<short> var_13, val<int> var_15, val<int> zero, val<unsigned long long int*> var_17, val<signed char*> var_18, val<unsigned char*> var_19, val<int*> var_20, val<bool*> var_21, val<signed char*> var_22, val<unsigned long long int*> var_23) {
    *var_17 = ((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) ((((/* implicit */val<int>) var_1)) < (((/* implicit */val<int>) var_0)))))));
    if (((((/* implicit */val<bool>) (~(var_8)))) || (((/* implicit */val<bool>) var_15))))
    {
        *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) (+(((8657273322445168191LL) >> (((((/* implicit */val<int>) (val<unsigned short>)61730)) - (61696))))))))));
        *var_19 = ((/* implicit */val<unsigned char>) (-((+(((var_8) << (((var_6) + (529938394)))))))));
        *var_20 = ((/* implicit */val<int>) ((var_8) - (((/* implicit */val<unsigned long long int>) var_15))));
    }

    if (((/* implicit */val<bool>) (-(((/* implicit */val<int>) ((((((/* implicit */val<int>) var_12)) - (((/* implicit */val<int>) var_9)))) <= ((+(((/* implicit */val<int>) var_12))))))))))
    {
        *var_21 -= ((/* implicit */val<bool>) (+((-((+(((/* implicit */val<int>) var_10))))))));
        *var_22 = ((/* implicit */val<signed char>) (+((-((+(((/* implicit */val<int>) var_13))))))));
        *var_23 = ((/* implicit */val<unsigned long long int>) (+((-(((/* implicit */val<int>) var_5))))));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-2;
unsigned char var_1 = (unsigned char)167;
unsigned char var_5 = (unsigned char)49;
int var_6 = -529938358;
unsigned long long int var_8 = 6155623813606467954ULL;
unsigned char var_9 = (unsigned char)200;
short var_10 = (short)12387;
unsigned char var_12 = (unsigned char)217;
short var_13 = (short)-9773;
int var_15 = -349906413;
int zero = 0;
unsigned long long int var_17 = 13717023690382769955ULL;
signed char var_18 = (signed char)46;
unsigned char var_19 = (unsigned char)157;
int var_20 = 559096544;
bool var_21 = (bool)1;
signed char var_22 = (signed char)-36;
unsigned long long int var_23 = 9265043159106012031ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != (signed char)46;
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != -1311895713;
    value_mismatch |= var_21 != (bool)0;
    value_mismatch |= var_22 != (signed char)45;
    value_mismatch |= var_23 != 18446744073709551567ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_8, var_9, var_10, var_12, var_13, var_15, zero, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
