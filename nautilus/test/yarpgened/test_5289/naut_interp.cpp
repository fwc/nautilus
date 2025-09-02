/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5289
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5289
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
void test(val<short> var_0, val<unsigned short> var_3, val<int> var_4, val<short> var_6, val<signed char> var_9, val<unsigned long long int> var_10, val<unsigned int> var_11, val<bool> var_13, val<int> zero, val<unsigned long long int*> var_19, val<unsigned char*> var_20, val<unsigned short*> var_21, val<signed char*> var_22, val<short*> var_23, val<unsigned long long int*> var_24, val<bool*> var_25) {
    if (((/* implicit */val<bool>) var_0))
    {
        *var_19 += ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (-(var_10))))));
        *var_20 = ((/* implicit */val<unsigned char>) max((((val<int>) (+(var_11)))), (((/* implicit */val<int>) var_3))));
        *var_21 = ((/* implicit */val<unsigned short>) (+(((var_13) ? ((-(-32054122))) : (((/* implicit */val<int>) var_9))))));
        *var_22 = ((/* implicit */val<signed char>) min((*var_22), (((/* implicit */val<signed char>) ((val<unsigned int>) (+(((/* implicit */val<int>) (val<bool>)1))))))));
    }

    *var_23 = ((/* implicit */val<short>) min((*var_23), (((/* implicit */val<short>) (-(((/* implicit */val<int>) ((val<unsigned short>) min((var_4), (var_4))))))))));
    *var_24 = ((/* implicit */val<unsigned long long int>) min((var_11), (((/* implicit */val<unsigned int>) var_6))));
    *var_25 -= ((/* implicit */val<bool>) (-((-(var_4)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5626;
unsigned short var_3 = (unsigned short)3627;
int var_4 = 63179118;
short var_6 = (short)23742;
signed char var_9 = (signed char)-126;
unsigned long long int var_10 = 3834977209237251373ULL;
unsigned int var_11 = 579815413U;
bool var_13 = (bool)1;
int zero = 0;
unsigned long long int var_19 = 1558694025742533000ULL;
unsigned char var_20 = (unsigned char)12;
unsigned short var_21 = (unsigned short)28475;
signed char var_22 = (signed char)94;
short var_23 = (short)-14052;
unsigned long long int var_24 = 16313330646718675231ULL;
bool var_25 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 1558694025742533000ULL;
    value_mismatch |= var_20 != (unsigned char)245;
    value_mismatch |= var_21 != (unsigned short)7018;
    value_mismatch |= var_22 != (signed char)1;
    value_mismatch |= var_23 != (short)-14052;
    value_mismatch |= var_24 != 23742ULL;
    value_mismatch |= var_25 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_9, var_10, var_11, var_13, zero, &var_19, &var_20, &var_21, &var_22, &var_23, &var_24, &var_25);
  checksum();
  assert(!value_mismatch);
}
