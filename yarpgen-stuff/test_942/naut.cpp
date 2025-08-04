/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 942
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=942
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
void test(val<short> var_0, val<signed char> var_11, val<int> zero, val<short*> var_20, val<unsigned short*> var_21) {
    *var_20 ^= ((/* implicit */val<short>) min((((((/* implicit */val<bool>) -1167799207)) ? (((/* implicit */val<int>) (val<signed char>)22)) : (1167799207))), (((/* implicit */val<int>) var_0))));
    *var_21 = ((/* implicit */val<unsigned short>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6730;
signed char var_11 = (signed char)-111;
int zero = 0;
short var_20 = (short)-12277;
unsigned short var_21 = (unsigned short)53501;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)-12259;
    value_mismatch |= var_21 != (unsigned short)65425;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_11, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
