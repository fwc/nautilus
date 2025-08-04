/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 264
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=264
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
void test(val<short> var_1, val<int> var_2, val<long long int> var_6, val<short> var_16, val<int> zero, val<unsigned short*> var_17, val<unsigned short*> var_18) {
    *var_17 = ((/* implicit */val<unsigned short>) var_6);
    *var_18 = ((/* implicit */val<unsigned short>) min((*var_18), (((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) (~(min((((/* implicit */val<int>) var_1)), (var_2)))))) ? (((/* implicit */val<int>) ((val<signed char>) var_16))) : ((~(((/* implicit */val<int>) var_1)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24873;
int var_2 = 90182661;
long long int var_6 = -1695608401595550325LL;
short var_16 = (short)-7655;
int zero = 0;
unsigned short var_17 = (unsigned short)55709;
unsigned short var_18 = (unsigned short)21924;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned short)46475;
    value_mismatch |= var_18 != (unsigned short)25;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
