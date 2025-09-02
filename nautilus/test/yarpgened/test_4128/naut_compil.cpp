/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4128
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4128
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
void test(val<unsigned int> var_0, val<bool> var_1, val<unsigned char> var_2, val<unsigned char> var_3, val<unsigned char> var_5, val<int> var_7, val<short> var_8, val<unsigned char> var_9, val<int> zero, val<short*> var_10, val<bool*> var_11, val<unsigned char*> var_12, val<unsigned short*> var_13, val<short*> var_14) {
    *var_10 = ((/* implicit */val<short>) var_3);
    *var_11 |= ((/* implicit */val<bool>) var_2);
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((val<long long int>) ((val<bool>) var_5)))) ? (((/* implicit */val<int>) ((val<bool>) 16160228193983852083ULL))) : (var_7)));
    *var_13 = ((/* implicit */val<unsigned short>) -1LL);
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_1)) : (((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_3)) : (var_7)))))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2833047465U;
bool var_1 = (bool)0;
unsigned char var_2 = (unsigned char)199;
unsigned char var_3 = (unsigned char)157;
unsigned char var_5 = (unsigned char)125;
int var_7 = 1394956250;
short var_8 = (short)31429;
unsigned char var_9 = (unsigned char)31;
int zero = 0;
short var_10 = (short)22074;
bool var_11 = (bool)0;
unsigned char var_12 = (unsigned char)118;
unsigned short var_13 = (unsigned short)57183;
short var_14 = (short)2689;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)157;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)1;
    value_mismatch |= var_13 != (unsigned short)65535;
    value_mismatch |= var_14 != (short)31429;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_7, var_8, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
