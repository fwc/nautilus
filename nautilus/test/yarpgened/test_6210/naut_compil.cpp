/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6210
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6210
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
void test(val<signed char> var_7, val<int> zero, val<short*> var_11, val<unsigned short*> var_12, val<unsigned short*> var_13) {
    *var_11 = ((/* implicit */val<short>) ((val<bool>) (val<unsigned char>)221));
    *var_12 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7))) < (((((/* implicit */val<bool>) 12397967507830494164ULL)) ? (((((/* implicit */val<bool>) 1325932710758444449ULL)) ? (((/* implicit */val<unsigned long long int>) 1152921367167893504LL)) : (12397967507830494166ULL))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 785036490273778264LL)) ? (1152921367167893493LL) : (((/* implicit */val<long long int>) 0U)))))))));
    *var_13 = ((/* implicit */val<unsigned short>) (~(((6048776565879057452ULL) << (((3270867634U) - (3270867586U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-15;
int zero = 0;
short var_11 = (short)-11901;
unsigned short var_12 = (unsigned short)60920;
unsigned short var_13 = (unsigned short)32849;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)1;
    value_mismatch |= var_12 != (unsigned short)0;
    value_mismatch |= var_13 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_11, &var_12, &var_13);
  checksum();
}
