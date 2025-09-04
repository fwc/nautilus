/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9683
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9683
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
void test(val<signed char> var_1, val<unsigned char> var_4, val<long long int> var_6, val<unsigned int> var_9, val<int> zero, val<short*> var_10, val<unsigned long long int*> var_11) {
    *var_10 = ((/* implicit */val<short>) (~(((val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned short>)4223)) - (((/* implicit */val<int>) (val<short>)14)))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) min((var_6), (((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_1)) ? (var_9) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))) != (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<short>)14)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-8;
unsigned char var_4 = (unsigned char)114;
long long int var_6 = -8938637769272671532LL;
unsigned int var_9 = 4245400209U;
int zero = 0;
short var_10 = (short)-5866;
unsigned long long int var_11 = 3847705780838987773ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)-4210;
    value_mismatch |= var_11 != 9508106304436880084ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
