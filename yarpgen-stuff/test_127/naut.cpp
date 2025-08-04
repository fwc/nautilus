/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 127
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=127
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
void test(val<unsigned long long int> var_3, val<unsigned int> var_7, val<signed char> var_10, val<long long int> var_12, val<int> zero, val<unsigned short*> var_13, val<short*> var_14) {
    *var_13 *= ((/* implicit */val<unsigned short>) (-(-5671408489092813236LL)));
    *var_14 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((((/* implicit */val<long long int>) var_7)) + (2396146961674511223LL))) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) max(((val<unsigned short>)9956), ((val<unsigned short>)55579)))))))) ? (((((/* implicit */val<bool>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)55579))) / (var_12)))) ? (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned short>)55555)) + (((/* implicit */val<int>) var_10))))) : (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) / (var_3))))) : (((/* implicit */val<unsigned long long int>) 4294967295U))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4069743113294792016ULL;
unsigned int var_7 = 3415997485U;
signed char var_10 = (signed char)12;
long long int var_12 = -8230521556958733319LL;
int zero = 0;
unsigned short var_13 = (unsigned short)62217;
short var_14 = (short)20472;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)31572;
    value_mismatch |= var_14 != (short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_7, var_10, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
