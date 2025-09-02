/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3999
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3999
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
void test(val<unsigned int> var_0, val<short> var_1, val<unsigned char> var_6, val<unsigned char> var_10, val<long long int> var_11, val<int> zero, val<long long int*> var_12, val<unsigned short*> var_13, val<unsigned char*> var_14) {
    *var_12 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)-31049)) ? (((/* implicit */val<int>) var_6)) : (-343800783)))) ? (6679974176715273933LL) : (-6924375222346103293LL))) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_10)))));
    *var_13 = ((/* implicit */val<unsigned short>) ((14605464212386445881ULL) != (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)152)) || (((/* implicit */val<bool>) var_1))))))));
    *var_14 = ((/* implicit */val<unsigned char>) max(((-((+(var_11))))), (((/* implicit */val<long long int>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4131289049U;
short var_1 = (short)-30387;
unsigned char var_6 = (unsigned char)135;
unsigned char var_10 = (unsigned char)77;
long long int var_11 = -4889979229818192427LL;
int zero = 0;
long long int var_12 = 117773142887549528LL;
unsigned short var_13 = (unsigned short)2920;
unsigned char var_14 = (unsigned char)215;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1LL;
    value_mismatch |= var_13 != (unsigned short)1;
    value_mismatch |= var_14 != (unsigned char)43;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, var_10, var_11, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
