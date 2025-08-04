/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 833
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=833
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
void test(val<short> var_6, val<long long int> var_11, val<unsigned short> var_14, val<int> zero, val<long long int*> var_19, val<bool*> var_20, val<unsigned int*> var_21) {
    *var_19 = max((((/* implicit */val<long long int>) var_6)), (var_11));
    *var_20 ^= ((/* implicit */val<bool>) ((val<unsigned int>) 536862720U));
    *var_21 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) var_14)) < (((val<int>) min((((/* implicit */val<long long int>) (val<unsigned char>)118)), (-4227440441182149445LL))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-21204;
long long int var_11 = 6033340533692114669LL;
unsigned short var_14 = (unsigned short)50630;
int zero = 0;
long long int var_19 = -7419239225839441020LL;
bool var_20 = (bool)0;
unsigned int var_21 = 927112690U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 6033340533692114669LL;
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != 1U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_11, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
