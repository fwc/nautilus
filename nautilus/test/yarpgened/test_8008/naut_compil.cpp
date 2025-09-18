/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8008
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8008
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<bool> var_3, val<unsigned char> var_6, val<unsigned char> var_7, val<signed char> var_8, val<unsigned char> var_14, val<unsigned int> var_15, val<short> var_17, val<int> zero, val<unsigned int*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_7))) + ((+(min((var_15), (((/* implicit */val<unsigned int>) var_14)))))));
    *var_19 = ((/* implicit */val<unsigned int>) max((min(((~(((/* implicit */val<int>) var_17)))), (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_8)), (var_6)))))), (((((/* implicit */val<bool>) max((((/* implicit */val<unsigned char>) var_3)), (var_14)))) ? (((var_3) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) var_0)))) : (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<int>) var_17)) : (((/* implicit */val<int>) var_8))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned int var_1 = 427310950U;
bool var_3 = (bool)0;
unsigned char var_6 = (unsigned char)219;
unsigned char var_7 = (unsigned char)79;
signed char var_8 = (signed char)15;
unsigned char var_14 = (unsigned char)91;
unsigned int var_15 = 3787945575U;
short var_17 = (short)32408;
int zero = 0;
unsigned int var_18 = 376393910U;
unsigned int var_19 = 3043083412U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 170U;
    value_mismatch |= var_19 != 19U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_6, var_7, var_8, var_14, var_15, var_17, zero, &var_18, &var_19);
  checksum();
}
