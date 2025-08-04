/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 679
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=679
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
void test(val<short> var_1, val<long long int> var_5, val<int> var_7, val<signed char> var_10, val<int> zero, val<unsigned int*> var_13, val<short*> var_14) {
    *var_13 = ((/* implicit */val<unsigned int>) ((val<short>) (((!(((/* implicit */val<bool>) var_7)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((((/* implicit */val<short>) var_10)), (var_1))))) : (var_5))));
    *var_14 = ((/* implicit */val<short>) var_10);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31899;
long long int var_5 = 2412534560044163645LL;
int var_7 = 908257541;
signed char var_10 = (signed char)-73;
int zero = 0;
unsigned int var_13 = 1151753000U;
short var_14 = (short)-8606;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 8765U;
    value_mismatch |= var_14 != (short)-73;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_5, var_7, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
