/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4695
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4695
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
void test(val<unsigned char> var_1, val<unsigned short> var_2, val<bool> var_3, val<short> var_5, val<unsigned char> var_7, val<bool> var_8, val<unsigned char> var_10, val<unsigned char> var_12, val<int> zero, val<unsigned short*> var_13, val<bool*> var_14, val<bool*> var_15, val<unsigned char*> var_16) {
    if (((/* implicit */val<bool>) var_12))
    {
        *var_13 = ((/* implicit */val<unsigned short>) ((var_8) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_1))));
        *var_14 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_8)) | (min((((/* implicit */val<int>) ((val<unsigned char>) (val<bool>)1))), ((~(((/* implicit */val<int>) var_2))))))));
        *var_15 = ((/* implicit */val<bool>) ((((/* implicit */val<int>) var_3)) * (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) max(((val<unsigned short>)44143), (((/* implicit */val<unsigned short>) var_10))))) : (((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) var_1))))))));
    }

    *var_16 = var_1;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
unsigned short var_2 = (unsigned short)23193;
bool var_3 = (bool)0;
short var_5 = (short)14649;
unsigned char var_7 = (unsigned char)220;
bool var_8 = (bool)0;
unsigned char var_10 = (unsigned char)191;
unsigned char var_12 = (unsigned char)144;
int zero = 0;
unsigned short var_13 = (unsigned short)48655;
bool var_14 = (bool)1;
bool var_15 = (bool)0;
unsigned char var_16 = (unsigned char)105;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)215;
    value_mismatch |= var_14 != (bool)1;
    value_mismatch |= var_15 != (bool)0;
    value_mismatch |= var_16 != (unsigned char)215;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_7, var_8, var_10, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
}
