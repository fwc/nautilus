/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 163
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=163
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
void test(val<unsigned char> var_2, val<unsigned char> var_5, val<unsigned short> var_7, val<unsigned char> var_8, val<unsigned short> var_10, val<int> zero, val<unsigned short*> var_12, val<unsigned int*> var_13, val<signed char*> var_14, val<unsigned char*> var_15) {
    *var_12 = ((/* implicit */val<unsigned short>) min((*var_12), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_7)) * (((/* implicit */val<int>) max((var_8), (var_2)))))))));
    *var_13 = ((/* implicit */val<unsigned int>) min((((/* implicit */val<unsigned long long int>) (~((+(((/* implicit */val<int>) var_5))))))), (((val<unsigned long long int>) ((((/* implicit */val<int>) var_10)) % (((/* implicit */val<int>) (val<unsigned short>)9163)))))));
    *var_14 *= ((/* implicit */val<signed char>) (!(((/* implicit */val<bool>) ((((/* implicit */val<int>) min((var_7), (((/* implicit */val<unsigned short>) var_2))))) - ((-(((/* implicit */val<int>) var_2)))))))));
    *var_15 += var_2;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)146;
unsigned char var_5 = (unsigned char)80;
unsigned short var_7 = (unsigned short)32831;
unsigned char var_8 = (unsigned char)208;
unsigned short var_10 = (unsigned short)23466;
int zero = 0;
unsigned short var_12 = (unsigned short)10243;
unsigned int var_13 = 1644625506U;
signed char var_14 = (signed char)80;
unsigned char var_15 = (unsigned char)20;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)10243;
    value_mismatch |= var_13 != 5140U;
    value_mismatch |= var_14 != (signed char)0;
    value_mismatch |= var_15 != (unsigned char)166;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_10, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
