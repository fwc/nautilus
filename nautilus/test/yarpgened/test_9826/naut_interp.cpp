/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9826
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9826
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
void test(val<long long int> var_0, val<signed char> var_1, val<int> var_3, val<int> var_5, val<short> var_6, val<unsigned long long int> var_12, val<int> var_14, val<int> var_18, val<int> zero, val<short*> var_20, val<unsigned int*> var_21, val<unsigned int*> var_22) {
    *var_20 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) ((val<short>) max(((val<signed char>)88), (var_1))))) : (((/* implicit */val<int>) ((val<unsigned char>) ((((/* implicit */val<bool>) 532080212U)) && (((/* implicit */val<bool>) var_6))))))));
    *var_21 = ((/* implicit */val<unsigned int>) ((var_12) & (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((val<unsigned char>) var_0))) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_14)) < (var_0)))) : (((var_3) ^ (var_18))))))));
    *var_22 -= ((/* implicit */val<unsigned int>) (+(var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2948306485020939933LL;
signed char var_1 = (signed char)-83;
int var_3 = -1366670807;
int var_5 = 1825879258;
short var_6 = (short)15761;
unsigned long long int var_12 = 1645785364656615172ULL;
int var_14 = -1073696455;
int var_18 = -2011118417;
int zero = 0;
short var_20 = (short)-8717;
unsigned int var_21 = 2663357228U;
unsigned int var_22 = 938284888U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)88;
    value_mismatch |= var_21 != 0U;
    value_mismatch |= var_22 != 2304955695U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_5, var_6, var_12, var_14, var_18, zero, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
