/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 599
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=599
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
void test(val<unsigned int> var_2, val<short> var_8, val<unsigned short> var_9, val<short> var_10, val<unsigned int> var_11, val<int> zero, val<unsigned short*> var_14, val<unsigned long long int*> var_15) {
    *var_14 = ((/* implicit */val<unsigned short>) var_11);
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((max((var_2), (((/* implicit */val<unsigned int>) (val<short>)-238)))) & (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_10))))) == (min((((/* implicit */val<unsigned int>) var_8)), (var_2)))))) : (((/* implicit */val<int>) var_9))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 671063669U;
short var_8 = (short)-9323;
unsigned short var_9 = (unsigned short)28406;
short var_10 = (short)17830;
unsigned int var_11 = 4016591808U;
int zero = 0;
unsigned short var_14 = (unsigned short)52551;
unsigned long long int var_15 = 16217507530414206093ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned short)21440;
    value_mismatch |= var_15 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_8, var_9, var_10, var_11, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
