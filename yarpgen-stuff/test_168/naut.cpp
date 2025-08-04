/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 168
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=168
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<bool> var_8, val<int> zero, val<bool*> var_13, val<bool*> var_14) {
    *var_13 = ((/* implicit */val<bool>) (val<unsigned short>)61034);
    *var_14 = (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) * (((((/* implicit */val<bool>) (val<short>)-29200)) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8))) : (var_1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned int var_1 = 1225152412U;
bool var_8 = (bool)1;
int zero = 0;
bool var_13 = (bool)0;
bool var_14 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_8, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
