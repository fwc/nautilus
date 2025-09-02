/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8403
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8403
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
void test(val<short> var_1, val<unsigned long long int> var_2, val<short> var_3, val<unsigned int> var_5, val<long long int> var_6, val<long long int> var_7, val<unsigned char> var_8, val<int> zero, val<unsigned char*> var_11, val<unsigned short*> var_12, val<unsigned char*> var_13) {
    *var_11 ^= ((/* implicit */val<unsigned char>) (-(((((/* implicit */val<bool>) ((var_2) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)8)))))) ? (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_1)), (var_7)))) : (var_2)))));
    *var_12 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((((/* implicit */val<int>) var_3)) > (((/* implicit */val<int>) var_1)))))))), (max((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) + (var_6))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_5))))))));
    *var_13 = ((/* implicit */val<unsigned char>) max((((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))) != (var_2)))), (var_7)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7226;
unsigned long long int var_2 = 15848370290265028204ULL;
short var_3 = (short)-32451;
unsigned int var_5 = 2995542806U;
long long int var_6 = -701813040528343519LL;
long long int var_7 = -6971822298468082179LL;
unsigned char var_8 = (unsigned char)137;
int zero = 0;
unsigned char var_11 = (unsigned char)55;
unsigned short var_12 = (unsigned short)51963;
unsigned char var_13 = (unsigned char)233;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned char)13;
    value_mismatch |= var_12 != (unsigned short)65535;
    value_mismatch |= var_13 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_5, var_6, var_7, var_8, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
