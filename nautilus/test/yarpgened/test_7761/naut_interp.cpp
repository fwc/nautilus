/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7761
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7761
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
void test(val<short> var_0, val<unsigned long long int> var_2, val<unsigned long long int> var_4, val<unsigned char> var_5, val<unsigned long long int> var_6, val<int> zero, val<unsigned char*> var_10, val<unsigned int*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) (~(var_4)));
    *var_11 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(((/* implicit */val<int>) ((val<bool>) 32752U)))))) ? (((/* implicit */val<unsigned long long int>) (~((~(((/* implicit */val<int>) (val<unsigned short>)28510))))))) : (((((/* implicit */val<bool>) max((var_2), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)28522))))) ? (((((/* implicit */val<bool>) var_4)) ? (var_6) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)28510))))) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_0)) & (((/* implicit */val<int>) var_5)))))))));
    *var_12 = var_0;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11381;
unsigned long long int var_2 = 13754129166213441187ULL;
unsigned long long int var_4 = 3935234794001948273ULL;
unsigned char var_5 = (unsigned char)252;
unsigned long long int var_6 = 13137092846103174711ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)175;
unsigned int var_11 = 2628280980U;
short var_12 = (short)-7948;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)142;
    value_mismatch |= var_11 != 2628284382U;
    value_mismatch |= var_12 != (short)11381;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
