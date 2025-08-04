/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 723
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=723
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
void test(val<bool> var_0, val<unsigned char> var_8, val<bool> var_9, val<int> zero, val<int*> var_12, val<int*> var_13, val<short*> var_14) {
    *var_12 = ((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) <= (((/* implicit */val<int>) max((((/* implicit */val<short>) var_0)), (((val<short>) (val<unsigned short>)45040)))))));
    *var_13 = (-(((/* implicit */val<int>) var_9)));
    *var_14 = ((/* implicit */val<short>) max((*var_14), (((/* implicit */val<short>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_8 = (unsigned char)171;
bool var_9 = (bool)0;
int zero = 0;
int var_12 = 601279686;
int var_13 = 1822195739;
short var_14 = (short)-888;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 0;
    value_mismatch |= var_13 != 0;
    value_mismatch |= var_14 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_9, zero, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
