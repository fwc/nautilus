/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 188
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=188
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
void test(val<unsigned char> var_8, val<long long int> var_9, val<int> var_15, val<int> zero, val<signed char*> var_16, val<signed char*> var_17) {
    *var_16 &= ((/* implicit */val<signed char>) ((val<unsigned long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)7)) || (((/* implicit */val<bool>) var_15))))) << (((max((((/* implicit */val<long long int>) (val<unsigned short>)7)), (6465705057772094257LL))) - (6465705057772094228LL))))));
    *var_17 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) var_9)) ? (var_15) : (((/* implicit */val<int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)184;
long long int var_9 = -570384236160678441LL;
int var_15 = 315635999;
int zero = 0;
signed char var_16 = (signed char)71;
signed char var_17 = (signed char)-120;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)0;
    value_mismatch |= var_17 != (signed char)105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, var_15, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
