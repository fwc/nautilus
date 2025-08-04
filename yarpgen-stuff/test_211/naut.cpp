/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 211
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=211
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
void test(val<short> var_3, val<unsigned int> var_7, val<unsigned int> var_14, val<int> zero, val<unsigned int*> var_19, val<long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 &= var_14;
    *var_20 = ((/* implicit */val<long long int>) ((val<int>) var_3));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-31765;
unsigned int var_7 = 2722178902U;
unsigned int var_14 = 3791594421U;
int zero = 0;
unsigned int var_19 = 881946509U;
long long int var_20 = 3345873963178878349LL;
unsigned long long int var_21 = 2630155918151697967ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 546382725U;
    value_mismatch |= var_20 != -31765LL;
    value_mismatch |= var_21 != 2722178902ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
