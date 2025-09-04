/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8190
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8190
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
void test(val<bool> var_6, val<unsigned int> var_11, val<bool> var_12, val<unsigned char> var_13, val<int> var_15, val<int> zero, val<unsigned short*> var_16, val<long long int*> var_17, val<signed char*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) var_6);
    *var_17 = ((/* implicit */val<long long int>) ((((((/* implicit */val<int>) var_13)) * ((((val<bool>)1) ? (((/* implicit */val<int>) var_6)) : (var_15))))) > (((val<int>) var_11))));
    *var_18 = ((/* implicit */val<signed char>) ((var_12) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) 1152921504605798400LL)) ? (-4039579503540603585LL) : (((/* implicit */val<long long int>) 0U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
unsigned int var_11 = 4016704814U;
bool var_12 = (bool)1;
unsigned char var_13 = (unsigned char)171;
int var_15 = -1088041352;
int zero = 0;
unsigned short var_16 = (unsigned short)4860;
long long int var_17 = 7538516478754477972LL;
signed char var_18 = (signed char)65;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)0;
    value_mismatch |= var_17 != 1LL;
    value_mismatch |= var_18 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_12, var_13, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
