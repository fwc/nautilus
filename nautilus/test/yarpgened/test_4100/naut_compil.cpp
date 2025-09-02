/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4100
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4100
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
void test(val<bool> var_1, val<int> var_2, val<signed char> var_3, val<bool> var_6, val<unsigned char> var_7, val<unsigned int> var_9, val<signed char> var_13, val<unsigned int> var_14, val<signed char> var_16, val<int> zero, val<int*> var_18, val<unsigned short*> var_19, val<unsigned short*> var_20, val<bool*> var_21, val<unsigned short*> var_22, val<unsigned short*> var_23) {
    if ((!((val<bool>)1)))
    {
        *var_18 = ((/* implicit */val<int>) min((max((max((((/* implicit */val<unsigned int>) (val<bool>)1)), (var_14))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) var_3))))))), (((/* implicit */val<unsigned int>) var_16))));
        *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~((~(((/* implicit */val<int>) var_1))))))) ? ((~(var_2))) : (((/* implicit */val<int>) var_3))));
        *var_20 &= ((/* implicit */val<unsigned short>) var_7);
    }

    *var_21 |= ((/* implicit */val<bool>) (-((+(((((/* implicit */val<int>) var_6)) / (((/* implicit */val<int>) var_6))))))));
    *var_22 = ((/* implicit */val<unsigned short>) var_7);
    *var_23 = ((/* implicit */val<unsigned short>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
int var_2 = -384613718;
signed char var_3 = (signed char)97;
bool var_6 = (bool)1;
unsigned char var_7 = (unsigned char)168;
unsigned int var_9 = 3463598864U;
signed char var_13 = (signed char)-82;
unsigned int var_14 = 3790783161U;
signed char var_16 = (signed char)106;
int zero = 0;
int var_18 = -1293345909;
unsigned short var_19 = (unsigned short)42082;
unsigned short var_20 = (unsigned short)45159;
bool var_21 = (bool)0;
unsigned short var_22 = (unsigned short)63367;
unsigned short var_23 = (unsigned short)48645;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1293345909;
    value_mismatch |= var_19 != (unsigned short)42082;
    value_mismatch |= var_20 != (unsigned short)45159;
    value_mismatch |= var_21 != (bool)1;
    value_mismatch |= var_22 != (unsigned short)168;
    value_mismatch |= var_23 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_6, var_7, var_9, var_13, var_14, var_16, zero, &var_18, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
