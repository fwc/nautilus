/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8037
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8037
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
void test(val<unsigned short> var_15, val<int> zero, val<int*> var_16, val<bool*> var_17, val<unsigned long long int*> var_18) {
    *var_16 &= ((/* implicit */val<int>) ((((-4232502761712446913LL) + (9223372036854775807LL))) >> (((min((4232502761712446886LL), (((/* implicit */val<long long int>) (+(((/* implicit */val<int>) (val<unsigned char>)161))))))) - (102LL)))));
    *var_17 |= ((/* implicit */val<bool>) var_15);
    *var_18 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (!(((-7145158278289595155LL) != (4232502761712446901LL)))))) >> (((min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)55383)) ^ (((/* implicit */val<int>) (val<unsigned short>)10))))), (10641750120268229784ULL))) - (55379ULL)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_15 = (unsigned short)31161;
int zero = 0;
int var_16 = 1243364848;
bool var_17 = (bool)0;
unsigned long long int var_18 = 7543268121883272991ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 0;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
