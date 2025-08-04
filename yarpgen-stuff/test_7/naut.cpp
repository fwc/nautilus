/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 7
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=7
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
void test(val<long long int> var_0, val<short> var_3, val<short> var_9, val<bool> var_13, val<int> zero, val<unsigned int*> var_15, val<bool*> var_16, val<unsigned long long int*> var_17, val<signed char*> var_18) {
    *var_15 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<int>) var_3)), (((((/* implicit */val<bool>) max(((val<unsigned short>)52946), (((/* implicit */val<unsigned short>) var_3))))) ? ((-(((/* implicit */val<int>) (val<signed char>)-76)))) : (((/* implicit */val<int>) var_13))))));
    *var_16 = ((/* implicit */val<bool>) (((-(((/* implicit */val<int>) max(((val<unsigned short>)27669), (((/* implicit */val<unsigned short>) (val<signed char>)-7))))))) - (((/* implicit */val<int>) ((val<bool>) (val<unsigned char>)223)))));
    *var_17 = ((/* implicit */val<unsigned long long int>) max((((/* implicit */val<int>) ((val<signed char>) ((((/* implicit */val<bool>) var_3)) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) var_3)))))), (((((/* implicit */val<int>) ((val<bool>) (val<unsigned short>)37839))) << (((((/* implicit */val<int>) var_9)) - (26160)))))));
    *var_18 = ((/* implicit */val<signed char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1675417075584030847LL;
short var_3 = (short)-25555;
short var_9 = (short)26173;
bool var_13 = (bool)0;
int zero = 0;
unsigned int var_15 = 4210879878U;
bool var_16 = (bool)1;
unsigned long long int var_17 = 16490942912387196886ULL;
signed char var_18 = (signed char)116;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 76U;
    value_mismatch |= var_16 != (bool)1;
    value_mismatch |= var_17 != 8192ULL;
    value_mismatch |= var_18 != (signed char)-127;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
