/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1550
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1550
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
void test(val<bool> var_0, val<bool> var_1, val<short> var_4, val<int> zero, val<short*> var_16, val<unsigned long long int*> var_17, val<bool*> var_18) {
    *var_16 = min((var_4), (((/* implicit */val<short>) var_1)));
    *var_17 = ((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))) | ((((val<bool>)1) ? (4642241092871316048ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)14160))))))) << (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4))))));
    *var_18 = ((/* implicit */val<bool>) 1323420724570039030LL);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
bool var_1 = (bool)0;
short var_4 = (short)21812;
int zero = 0;
short var_16 = (short)23405;
unsigned long long int var_17 = 4462560873843498392ULL;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)0;
    value_mismatch |= var_17 != 4642241092871316049ULL;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
