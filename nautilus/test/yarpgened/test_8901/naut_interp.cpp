/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8901
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8901
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
void test(val<unsigned int> var_1, val<int> var_2, val<unsigned char> var_4, val<unsigned char> var_6, val<unsigned int> var_8, val<bool> var_10, val<bool> var_11, val<int> zero, val<unsigned char*> var_18, val<unsigned int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))) : (11126128258960353806ULL)))) ? ((~(var_8))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))))) < (max((0LL), (((/* implicit */val<long long int>) var_1))))));
    *var_19 = ((/* implicit */val<unsigned int>) ((((((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) * (9223372036854775803LL))) - (((/* implicit */val<long long int>) min((((/* implicit */val<int>) var_4)), (var_2)))))) + (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_10)) / (var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1037373113U;
int var_2 = -2091806344;
unsigned char var_4 = (unsigned char)27;
unsigned char var_6 = (unsigned char)97;
unsigned int var_8 = 774881599U;
bool var_10 = (bool)1;
bool var_11 = (bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)119;
unsigned int var_19 = 1165783349U;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != 2091806344U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_4, var_6, var_8, var_10, var_11, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
