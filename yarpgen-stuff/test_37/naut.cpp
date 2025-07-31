/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 37
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=37
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
void test(val<int> zero, val<unsigned long long int*> var_12, val<int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned long long int>) -20LL);
    *var_13 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned short>)9723)) ? (min((((/* implicit */val<unsigned long long int>) (val<signed char>)15)), (17880481599521383948ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<signed char>)13)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned long long int var_12 = 9605183344229651853ULL;
int var_13 = 1247940384;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 18446744073709551596ULL;
    value_mismatch |= var_13 != 15;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
