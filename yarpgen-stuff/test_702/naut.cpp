/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 702
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=702
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
void test(val<int> var_2, val<long long int> var_4, val<unsigned int> var_10, val<int> zero, val<short*> var_11, val<int*> var_12, val<signed char*> var_13) {
    *var_11 = ((/* implicit */val<short>) max((*var_11), (((/* implicit */val<short>) var_2))));
    *var_12 = ((/* implicit */val<int>) max((*var_12), (((/* implicit */val<int>) var_4))));
    *var_13 = ((/* implicit */val<signed char>) (-(var_10)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1447055532;
long long int var_4 = -6458168729306189056LL;
unsigned int var_10 = 3059722446U;
int zero = 0;
short var_11 = (short)30832;
int var_12 = 1818220129;
signed char var_13 = (signed char)51;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (short)30832;
    value_mismatch |= var_12 != 1818220129;
    value_mismatch |= var_13 != (signed char)50;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
