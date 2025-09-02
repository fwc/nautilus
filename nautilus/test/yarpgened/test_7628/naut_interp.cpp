/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7628
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7628
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<int> var_0, val<short> var_3, val<unsigned char> var_4, val<unsigned short> var_5, val<short> var_6, val<bool> var_10, val<int> zero, val<long long int*> var_11, val<unsigned int*> var_12, val<short*> var_13) {
    *var_11 ^= ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) var_3)), (var_0)))) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) ((val<bool>) var_0)))));
    *var_12 = ((/* implicit */val<unsigned int>) min((*var_12), (((/* implicit */val<unsigned int>) min((min((((/* implicit */val<int>) var_6)), (((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_5)) : (((/* implicit */val<int>) var_4)))))), (((/* implicit */val<int>) ((val<short>) max((-2997930049107172477LL), (((/* implicit */val<long long int>) var_10)))))))))));
    *var_13 = ((/* implicit */val<short>) (+(((val<int>) ((((/* implicit */val<bool>) 494146618)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) (val<unsigned char>)212)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 675643790;
short var_3 = (short)24118;
unsigned char var_4 = (unsigned char)202;
unsigned short var_5 = (unsigned short)51057;
short var_6 = (short)24518;
bool var_10 = (bool)1;
int zero = 0;
long long int var_11 = -1692586011059896502LL;
unsigned int var_12 = 588296940U;
short var_13 = (short)32184;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != -1692586011059896501LL;
    value_mismatch |= var_12 != 1U;
    value_mismatch |= var_13 != (short)24518;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_6, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
