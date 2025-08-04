/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 321
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=321
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
void test(val<int> zero, val<unsigned int*> var_10, val<unsigned long long int*> var_11, val<int*> var_12, val<int*> var_13, val<bool*> var_14) {
    *var_10 = ((/* implicit */val<unsigned int>) min((*var_10), (((/* implicit */val<unsigned int>) min((max((-863868529), (((/* implicit */val<int>) (val<short>)5192)))), (max((((/* implicit */val<int>) (val<short>)-5200)), (min((((/* implicit */val<int>) (val<unsigned char>)193)), (1610612736))))))))));
    *var_11 = ((/* implicit */val<unsigned long long int>) min((*var_11), (((/* implicit */val<unsigned long long int>) -637895192))));
    *var_12 += ((/* implicit */val<int>) (val<unsigned short>)65535);
    *var_13 -= ((/* implicit */val<int>) (val<unsigned short>)43320);
    *var_14 &= ((/* implicit */val<bool>) (val<unsigned short>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned int var_10 = 1760878271U;
unsigned long long int var_11 = 987733978345237004ULL;
int var_12 = -1213855028;
int var_13 = 690468705;
bool var_14 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 193U;
    value_mismatch |= var_11 != 987733978345237004ULL;
    value_mismatch |= var_12 != -1213789493;
    value_mismatch |= var_13 != 690425385;
    value_mismatch |= var_14 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
