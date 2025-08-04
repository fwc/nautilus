/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 406
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=406
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned long long int> var_0, val<unsigned char> var_1, val<short> var_2, val<int> var_8, val<signed char> var_9, val<long long int> var_10, val<short> var_11, val<unsigned int> var_15, val<int> zero, val<int*> var_17, val<unsigned int*> var_18, val<long long int*> var_19) {
    *var_17 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_15)) ? (var_8) : (((/* implicit */val<int>) var_9)))) / (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<int>) (val<short>)10834)) : (((/* implicit */val<int>) var_2))))))), (((((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_11))))) ? (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-10820))) : (0LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2)))))));
    *var_18 = ((/* implicit */val<unsigned int>) 0);
    *var_19 = ((/* implicit */val<long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9499165593494145150ULL;
unsigned char var_1 = (unsigned char)152;
short var_2 = (short)-32316;
int var_8 = 565109409;
signed char var_9 = (signed char)59;
long long int var_10 = 7722722886190454458LL;
short var_11 = (short)2472;
unsigned int var_15 = 1625337869U;
int zero = 0;
int var_17 = -1698621232;
unsigned int var_18 = 449819184U;
long long int var_19 = -270538998618882522LL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 52160;
    value_mismatch |= var_18 != 0U;
    value_mismatch |= var_19 != 152LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_8, var_9, var_10, var_11, var_15, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
