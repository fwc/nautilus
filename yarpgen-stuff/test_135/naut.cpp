/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 135
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=135
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
void test(val<short> var_0, val<unsigned char> var_1, val<unsigned long long int> var_2, val<bool> var_3, val<long long int> var_8, val<int> zero, val<bool*> var_14, val<short*> var_15) {
    *var_14 ^= ((/* implicit */val<bool>) ((((/* implicit */val<bool>) 156557707U)) ? ((+((~(((/* implicit */val<int>) (val<bool>)1)))))) : ((+((+(((/* implicit */val<int>) var_1))))))));
    *var_15 = ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) max((((/* implicit */val<short>) var_3)), ((val<short>)24106))))))) ? (min((((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_0))))), (var_2))) : (((/* implicit */val<unsigned long long int>) var_8))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22183;
unsigned char var_1 = (unsigned char)22;
unsigned long long int var_2 = 7509797191120499819ULL;
bool var_3 = (bool)1;
long long int var_8 = 8600614652736874820LL;
int zero = 0;
bool var_14 = (bool)1;
short var_15 = (short)18713;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (bool)0;
    value_mismatch |= var_15 != (short)-19349;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_8, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
