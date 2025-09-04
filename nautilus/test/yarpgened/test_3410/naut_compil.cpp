/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3410
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3410
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
void test(val<long long int> var_0, val<unsigned char> var_2, val<unsigned char> var_4, val<int> var_5, val<signed char> var_6, val<int> var_7, val<bool> var_8, val<signed char> var_9, val<signed char> var_10, val<unsigned int> var_11, val<unsigned char> var_12, val<int> zero, val<unsigned int*> var_13, val<signed char*> var_14, val<unsigned int*> var_15, val<unsigned int*> var_16, val<int*> var_17) {
    *var_13 &= ((/* implicit */val<unsigned int>) (~(((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_6))))) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_8)))) : (((/* implicit */val<int>) ((((/* implicit */val<long long int>) var_11)) >= (var_0))))))));
    *var_14 = ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) max((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_12)) ? (var_5) : (((/* implicit */val<int>) var_2))))), (var_11))))));
    *var_15 = ((/* implicit */val<unsigned int>) ((val<long long int>) var_4));
    *var_16 = (((!(((((/* implicit */val<int>) var_9)) >= (((/* implicit */val<int>) var_4)))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_12))) : (((((/* implicit */val<bool>) (-(var_11)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<int>) var_12)) : (203988627)))) : (var_11))));
    *var_17 = max((((/* implicit */val<int>) var_8)), (var_7));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1256004576439185082LL;
unsigned char var_2 = (unsigned char)139;
unsigned char var_4 = (unsigned char)42;
int var_5 = 1343321954;
signed char var_6 = (signed char)111;
int var_7 = -1671039397;
bool var_8 = (bool)0;
signed char var_9 = (signed char)26;
signed char var_10 = (signed char)-5;
unsigned int var_11 = 3596785161U;
unsigned char var_12 = (unsigned char)68;
int zero = 0;
unsigned int var_13 = 1004581474U;
signed char var_14 = (signed char)105;
unsigned int var_15 = 2187426199U;
unsigned int var_16 = 4245814701U;
int var_17 = 1780526838;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0U;
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != 42U;
    value_mismatch |= var_16 != 68U;
    value_mismatch |= var_17 != 0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_7, var_8, var_9, var_10, var_11, var_12, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
