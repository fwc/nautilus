/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9527
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9527
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
void test(val<int> var_6, val<unsigned short> var_9, val<unsigned long long int> var_13, val<int> zero, val<long long int*> var_19, val<short*> var_20, val<unsigned char*> var_21) {
    *var_19 = ((/* implicit */val<long long int>) var_9);
    *var_20 = ((/* implicit */val<short>) max((((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) == (5854134630527457087ULL))) ? (((/* implicit */val<unsigned int>) var_6)) : (min((4294967295U), (8388607U))))), (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<signed char>)74)) ? (-1408699426) : (((/* implicit */val<int>) (val<unsigned short>)30409))))) ? (((/* implicit */val<int>) (val<unsigned short>)15345)) : (((((/* implicit */val<int>) (val<signed char>)60)) >> (((((/* implicit */val<int>) (val<unsigned short>)24646)) - (24619))))))))));
    *var_21 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) 12377359497617745637ULL))))), (min((((/* implicit */val<unsigned long long int>) min((2688338761U), (((/* implicit */val<unsigned int>) (val<unsigned char>)123))))), (max((((/* implicit */val<unsigned long long int>) (val<unsigned char>)14)), (var_13)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -391935497;
unsigned short var_9 = (unsigned short)45247;
unsigned long long int var_13 = 15456877946327949331ULL;
int zero = 0;
long long int var_19 = 7513135480735721121LL;
short var_20 = (short)6871;
unsigned char var_21 = (unsigned char)17;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 45247LL;
    value_mismatch |= var_20 != (short)-1;
    value_mismatch |= var_21 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_13, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
