/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3354
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3354
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
void test(val<unsigned long long int> var_0, val<signed char> var_1, val<unsigned int> var_2, val<short> var_3, val<signed char> var_7, val<signed char> var_8, val<bool> var_11, val<long long int> var_13, val<int> zero, val<long long int*> var_16, val<short*> var_17) {
    *var_16 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) var_8)) ? (((/* implicit */val<int>) var_11)) : (((/* implicit */val<int>) var_3)))), (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_2)) || (((/* implicit */val<bool>) var_3)))))))) ? (((/* implicit */val<unsigned long long int>) var_13)) : (max((((((/* implicit */val<bool>) var_7)) ? (var_0) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1))))), (((/* implicit */val<unsigned long long int>) var_3))))));
    *var_17 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<signed char>)-32)) ? (-1110997231) : (((/* implicit */val<int>) (val<unsigned char>)0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4176301277679278053ULL;
signed char var_1 = (signed char)-39;
unsigned int var_2 = 3238805848U;
short var_3 = (short)14809;
signed char var_7 = (signed char)-3;
signed char var_8 = (signed char)99;
bool var_11 = (bool)1;
long long int var_13 = -8434741683137128539LL;
int zero = 0;
long long int var_16 = 4266623707740151947LL;
short var_17 = (short)25666;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -8434741683137128539LL;
    value_mismatch |= var_17 != (short)-30959;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_7, var_8, var_11, var_13, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
