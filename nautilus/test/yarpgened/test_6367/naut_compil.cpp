/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6367
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6367
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
void test(val<signed char> var_8, val<unsigned char> var_9, val<long long int> var_10, val<short> var_11, val<long long int> var_17, val<int> zero, val<unsigned char*> var_20, val<int*> var_21, val<short*> var_22, val<long long int*> var_23) {
    *var_20 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<int>) var_9)), (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 389624766)) ? (389624766) : (((/* implicit */val<int>) (val<unsigned char>)81))))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)12)) || (((/* implicit */val<bool>) (val<unsigned char>)188)))))))));
    *var_21 = ((((/* implicit */val<bool>) ((val<int>) var_10))) ? (((/* implicit */val<int>) ((val<unsigned char>) var_17))) : ((~((~(-389624742))))));
    *var_22 ^= ((/* implicit */val<short>) (((~(((/* implicit */val<int>) ((val<unsigned short>) var_11))))) + (((/* implicit */val<int>) var_11))));
    *var_23 = ((/* implicit */val<long long int>) var_8);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-49;
unsigned char var_9 = (unsigned char)38;
long long int var_10 = 6761566676698115538LL;
short var_11 = (short)30526;
long long int var_17 = -4913512059974502009LL;
int zero = 0;
unsigned char var_20 = (unsigned char)126;
int var_21 = -606365765;
short var_22 = (short)8040;
long long int var_23 = -1196563006182202468LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)38;
    value_mismatch |= var_21 != 135;
    value_mismatch |= var_22 != (short)-8041;
    value_mismatch |= var_23 != -49LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_10, var_11, var_17, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
  assert(!value_mismatch);
}
