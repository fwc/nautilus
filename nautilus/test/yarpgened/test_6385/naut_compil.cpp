/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6385
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6385
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
void test(val<signed char> var_0, val<signed char> var_1, val<short> var_3, val<long long int> var_6, val<bool> var_10, val<signed char> var_11, val<int> var_13, val<signed char> var_14, val<int> zero, val<unsigned short*> var_16, val<bool*> var_17, val<unsigned long long int*> var_18, val<short*> var_19, val<unsigned char*> var_20, val<bool*> var_21, val<unsigned long long int*> var_22) {
    if (((/* implicit */val<bool>) ((val<short>) (-((+(var_13)))))))
    {
        *var_16 |= ((/* implicit */val<unsigned short>) (+(((/* implicit */val<int>) var_11))));
        *var_17 = (!((val<bool>)1));
        *var_18 = ((/* implicit */val<unsigned long long int>) min((min((((/* implicit */val<long long int>) var_10)), (((val<long long int>) 1667899495)))), (((/* implicit */val<long long int>) max((max((var_3), (((/* implicit */val<short>) (val<signed char>)8)))), (((/* implicit */val<short>) max((((/* implicit */val<signed char>) var_10)), ((val<signed char>)-27)))))))));
        *var_19 = ((/* implicit */val<short>) (!(((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_1))))) || (((/* implicit */val<bool>) ((val<unsigned short>) var_14)))))));
    }

    *var_20 = ((/* implicit */val<unsigned char>) (-((~(((/* implicit */val<int>) (val<bool>)1))))));
    if (((/* implicit */val<bool>) var_13))
    {
        *var_21 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) ((val<unsigned char>) (+(((/* implicit */val<int>) var_0)))))) : ((-(((((/* implicit */val<bool>) (val<unsigned char>)9)) ? (((/* implicit */val<int>) var_14)) : (((/* implicit */val<int>) var_11))))))));
        *var_22 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned short>) (val<unsigned char>)0)), ((val<unsigned short>)46571)));
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
signed char var_1 = (signed char)-17;
short var_3 = (short)5048;
long long int var_6 = -6149074268121629429LL;
bool var_10 = (bool)1;
signed char var_11 = (signed char)-29;
int var_13 = -825079934;
signed char var_14 = (signed char)61;
int zero = 0;
unsigned short var_16 = (unsigned short)18110;
bool var_17 = (bool)1;
unsigned long long int var_18 = 9376085526347965958ULL;
short var_19 = (short)3954;
unsigned char var_20 = (unsigned char)95;
bool var_21 = (bool)1;
unsigned long long int var_22 = 1655220689953847849ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)65535;
    value_mismatch |= var_17 != (bool)0;
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != (short)0;
    value_mismatch |= var_20 != (unsigned char)2;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != 46571ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_10, var_11, var_13, var_14, zero, &var_16, &var_17, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
