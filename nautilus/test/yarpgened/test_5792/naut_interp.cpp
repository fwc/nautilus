/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5792
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5792
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
void test(val<unsigned char> var_4, val<signed char> var_8, val<signed char> var_18, val<signed char> var_19, val<int> zero, val<unsigned short*> var_20, val<short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned short>) ((val<long long int>) var_19));
    *var_21 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) 4294967295U)) ? (((/* implicit */val<unsigned long long int>) ((((val<bool>) (val<bool>)1)) ? (((/* implicit */val<int>) min((var_4), (((/* implicit */val<unsigned char>) var_8))))) : (((/* implicit */val<int>) var_18))))) : ((((val<bool>)1) ? (17905708695109472871ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)215;
signed char var_8 = (signed char)-12;
signed char var_18 = (signed char)61;
signed char var_19 = (signed char)0;
int zero = 0;
unsigned short var_20 = (unsigned short)52688;
short var_21 = (short)-9504;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)0;
    value_mismatch |= var_21 != (short)215;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_8, var_18, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
