/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8142
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8142
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
void test(val<unsigned char> var_0, val<signed char> var_2, val<unsigned int> var_3, val<unsigned short> var_5, val<unsigned short> var_8, val<int> var_10, val<signed char> var_12, val<int> var_13, val<int> var_15, val<int> zero, val<unsigned char*> var_16, val<unsigned short*> var_17, val<unsigned char*> var_18, val<unsigned short*> var_19, val<unsigned short*> var_20) {
    *var_16 += ((/* implicit */val<unsigned char>) ((val<unsigned short>) max((((((/* implicit */val<bool>) var_0)) ? (-1218606883) : (((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) min((((/* implicit */val<unsigned short>) var_2)), (var_5)))))));
    *var_17 -= ((/* implicit */val<unsigned short>) var_3);
    *var_18 = ((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((val<unsigned char>) ((var_13) / (var_15)))))));
    *var_19 = ((/* implicit */val<unsigned short>) ((val<int>) var_12));
    *var_20 = ((/* implicit */val<unsigned short>) ((val<signed char>) min((max((var_10), (((/* implicit */val<int>) (val<unsigned char>)142)))), (275792262))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
signed char var_2 = (signed char)18;
unsigned int var_3 = 1409453633U;
unsigned short var_5 = (unsigned short)34180;
unsigned short var_8 = (unsigned short)9301;
int var_10 = -288131953;
signed char var_12 = (signed char)4;
int var_13 = -1703852107;
int var_15 = 2075437260;
int zero = 0;
unsigned char var_16 = (unsigned char)68;
unsigned short var_17 = (unsigned short)51335;
unsigned char var_18 = (unsigned char)210;
unsigned short var_19 = (unsigned short)12005;
unsigned short var_20 = (unsigned short)16730;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned char)86;
    value_mismatch |= var_17 != (unsigned short)14918;
    value_mismatch |= var_18 != (unsigned char)1;
    value_mismatch |= var_19 != (unsigned short)4;
    value_mismatch |= var_20 != (unsigned short)65422;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_8, var_10, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
}
