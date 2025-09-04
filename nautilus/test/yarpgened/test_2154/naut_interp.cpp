/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2154
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2154
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
void test(val<unsigned long long int> var_0, val<bool> var_4, val<short> var_8, val<short> var_9, val<long long int> var_10, val<unsigned int> var_11, val<int> var_13, val<unsigned char> var_18, val<int> zero, val<unsigned int*> var_19, val<short*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned int>) ((((((/* implicit */val<bool>) (~(var_10)))) || (((var_11) > (var_11))))) ? (((((/* implicit */val<bool>) ((val<signed char>) (val<short>)-7867))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_13)) ? (var_11) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_18)))))) : (var_0))) : (((/* implicit */val<unsigned long long int>) -1534753445))));
    *var_20 = ((/* implicit */val<short>) ((val<int>) (+(((/* implicit */val<int>) var_8)))));
    *var_21 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)219)) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (((/* implicit */val<int>) var_4)) : (var_13))))))), ((-(((/* implicit */val<int>) (val<bool>)1))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10498220527513900323ULL;
bool var_4 = (bool)0;
short var_8 = (short)-15050;
short var_9 = (short)-2777;
long long int var_10 = -3832455002040429959LL;
unsigned int var_11 = 3257043995U;
int var_13 = -10882649;
unsigned char var_18 = (unsigned char)254;
int zero = 0;
unsigned int var_19 = 221587820U;
short var_20 = (short)25389;
long long int var_21 = 8365931687261647012LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 3257043995U;
    value_mismatch |= var_20 != (short)-15050;
    value_mismatch |= var_21 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_9, var_10, var_11, var_13, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
