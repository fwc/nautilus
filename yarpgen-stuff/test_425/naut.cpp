/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 425
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=425
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
void test(val<unsigned char> var_3, val<short> var_9, val<int> zero, val<short*> var_14, val<short*> var_15, val<signed char*> var_16) {
    *var_14 = ((/* implicit */val<short>) 3266618344U);
    *var_15 += ((/* implicit */val<short>) ((((/* implicit */val<bool>) (val<short>)32215)) ? (((/* implicit */val<int>) (val<signed char>)47)) : (((/* implicit */val<int>) (val<signed char>)-71))));
    *var_16 = ((/* implicit */val<signed char>) ((min((((/* implicit */val<unsigned long long int>) var_9)), (((val<unsigned long long int>) (val<signed char>)46)))) == (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) var_3)), (2518318599U))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)146;
short var_9 = (short)4817;
int zero = 0;
short var_14 = (short)-18242;
short var_15 = (short)-14005;
signed char var_16 = (signed char)-88;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (short)-23576;
    value_mismatch |= var_15 != (short)-13958;
    value_mismatch |= var_16 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
