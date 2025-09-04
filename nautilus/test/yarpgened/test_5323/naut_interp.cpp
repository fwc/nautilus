/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5323
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5323
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
void test(val<unsigned short> var_0, val<unsigned long long int> var_1, val<int> var_3, val<long long int> var_9, val<long long int> var_11, val<int> var_12, val<int> zero, val<signed char*> var_15, val<unsigned int*> var_16, val<int*> var_17, val<unsigned short*> var_18) {
    *var_15 += ((/* implicit */val<signed char>) (val<short>)-21695);
    *var_16 = ((/* implicit */val<unsigned int>) (-(max((((((/* implicit */val<long long int>) 2147483643)) ^ (var_9))), (var_11)))));
    *var_17 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) min((1152921504472629248LL), (((/* implicit */val<long long int>) var_12))))) * (((val<unsigned long long int>) var_11))))) && (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (max((((/* implicit */val<long long int>) var_0)), (var_9))) : (((/* implicit */val<long long int>) max(((-2147483647 - 1)), (var_3)))))))));
    *var_18 = ((/* implicit */val<unsigned short>) (-(var_9)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27839;
unsigned long long int var_1 = 12440438366137139486ULL;
int var_3 = -1351038839;
long long int var_9 = -4843220360212153454LL;
long long int var_11 = 4706188778822378046LL;
int var_12 = 1655579233;
int zero = 0;
signed char var_15 = (signed char)-22;
unsigned int var_16 = 868124196U;
int var_17 = -1502289029;
unsigned short var_18 = (unsigned short)37874;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)43;
    value_mismatch |= var_16 != 2019352002U;
    value_mismatch |= var_17 != 1;
    value_mismatch |= var_18 != (unsigned short)33902;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_9, var_11, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
