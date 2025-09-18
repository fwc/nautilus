/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9821
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9821
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
void test(val<int> var_2, val<unsigned short> var_5, val<bool> var_6, val<unsigned char> var_8, val<short> var_10, val<unsigned short> var_11, val<int> zero, val<unsigned short*> var_12, val<signed char*> var_13, val<short*> var_14, val<signed char*> var_15) {
    *var_12 |= ((/* implicit */val<unsigned short>) var_8);
    *var_13 += ((/* implicit */val<signed char>) ((val<int>) var_11));
    *var_14 = ((/* implicit */val<short>) min((*var_14), (((/* implicit */val<short>) (~(var_2))))));
    *var_15 -= ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((/* implicit */val<int>) var_6)) >= (((/* implicit */val<int>) var_10)))))) ^ ((-(((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_5))) * (3149115700U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1331951179;
unsigned short var_5 = (unsigned short)2495;
bool var_6 = (bool)0;
unsigned char var_8 = (unsigned char)165;
short var_10 = (short)-29272;
unsigned short var_11 = (unsigned short)39042;
int zero = 0;
unsigned short var_12 = (unsigned short)7966;
signed char var_13 = (signed char)-38;
short var_14 = (short)-964;
signed char var_15 = (signed char)35;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)8127;
    value_mismatch |= var_13 != (signed char)92;
    value_mismatch |= var_14 != (short)-964;
    value_mismatch |= var_15 != (signed char)-18;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_8, var_10, var_11, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
}
