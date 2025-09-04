/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6813
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6813
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
void test(val<int> var_8, val<unsigned char> var_10, val<long long int> var_11, val<unsigned long long int> var_12, val<long long int> var_13, val<int> zero, val<unsigned int*> var_15, val<bool*> var_16, val<unsigned int*> var_17) {
    *var_15 = ((/* implicit */val<unsigned int>) var_13);
    *var_16 = (((~(max((((/* implicit */val<unsigned long long int>) (-9223372036854775807LL - 1LL))), (18446744073709551615ULL))))) >= (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((var_8) - (((/* implicit */val<int>) var_10))))) && (((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)2016))) / (562949919866880LL)))))))));
    *var_17 = ((/* implicit */val<unsigned int>) ((var_12) ^ (((/* implicit */val<unsigned long long int>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1019373172;
unsigned char var_10 = (unsigned char)79;
long long int var_11 = -7116450548449696971LL;
unsigned long long int var_12 = 17055977122287183749ULL;
long long int var_13 = -6148332198336837852LL;
int zero = 0;
unsigned int var_15 = 2505495009U;
bool var_16 = (bool)1;
unsigned int var_17 = 3999290725U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 3708372772U;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 3239593136U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_10, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
