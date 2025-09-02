/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9533
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9533
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
void test(val<unsigned long long int> var_1, val<signed char> var_8, val<int> var_9, val<long long int> var_13, val<unsigned short> var_14, val<int> zero, val<long long int*> var_15, val<signed char*> var_16, val<unsigned char*> var_17, val<int*> var_18) {
    *var_15 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_13))));
    *var_16 ^= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) (val<bool>)1)), (var_1)))) ? (((/* implicit */val<int>) var_14)) : (var_9)));
    *var_17 = ((/* implicit */val<unsigned char>) var_8);
    *var_18 = ((/* implicit */val<int>) (val<signed char>)-33);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15508938492644840597ULL;
signed char var_8 = (signed char)25;
int var_9 = -1057836107;
long long int var_13 = 4325701689422817251LL;
unsigned short var_14 = (unsigned short)17631;
int zero = 0;
long long int var_15 = 7382015156932192701LL;
signed char var_16 = (signed char)108;
unsigned char var_17 = (unsigned char)0;
int var_18 = -2084580614;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != (signed char)-77;
    value_mismatch |= var_17 != (unsigned char)25;
    value_mismatch |= var_18 != -33;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_9, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
