/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 906
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=906
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
void test(val<unsigned short> var_5, val<unsigned short> var_13, val<int> var_14, val<bool> var_16, val<int> zero, val<signed char*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<signed char>) ((val<int>) var_16));
    *var_18 = ((/* implicit */val<short>) max((*var_18), (((/* implicit */val<short>) min((max(((-(((/* implicit */val<int>) var_13)))), ((~(var_14))))), (((/* implicit */val<int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)10608;
unsigned short var_13 = (unsigned short)43164;
int var_14 = -888028865;
bool var_16 = (bool)0;
int zero = 0;
signed char var_17 = (signed char)21;
short var_18 = (short)4339;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (signed char)0;
    value_mismatch |= var_18 != (short)10608;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_13, var_14, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
