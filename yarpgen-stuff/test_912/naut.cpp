/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 912
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=912
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
void test(val<int> var_4, val<short> var_7, val<unsigned char> var_14, val<long long int> var_16, val<int> zero, val<short*> var_17, val<int*> var_18) {
    *var_17 = ((/* implicit */val<short>) (-(max((((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_7))))), (var_4)))));
    *var_18 = ((/* implicit */val<int>) min((*var_18), (((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) -1230944974)) ? (18446744073709551615ULL) : (15ULL)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) max((var_7), (var_7))))) : (((((/* implicit */val<bool>) var_14)) ? (var_16) : (((/* implicit */val<long long int>) var_4))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 759148868;
short var_7 = (short)4106;
unsigned char var_14 = (unsigned char)220;
long long int var_16 = 2411340304896916405LL;
int zero = 0;
short var_17 = (short)30915;
int var_18 = -79899056;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (short)20156;
    value_mismatch |= var_18 != -79899056;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_7, var_14, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
