/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 444
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=444
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
void test(val<signed char> var_13, val<unsigned long long int> var_15, val<int> zero, val<bool*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<bool>) 1950315943);
    *var_21 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_15)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<bool>) var_15)))) : (((val<unsigned long long int>) 6407530167677694767LL)))) % (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)-71;
unsigned long long int var_15 = 2891690701330714490ULL;
int zero = 0;
bool var_20 = (bool)1;
long long int var_21 = -1239869836155175465LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_15, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
