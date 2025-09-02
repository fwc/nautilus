/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7989
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7989
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned int> var_6, val<bool> var_7, val<int> zero, val<short*> var_10, val<int*> var_11, val<unsigned char*> var_12, val<unsigned short*> var_13) {
    *var_10 = ((/* implicit */val<short>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) ((val<unsigned short>) (val<short>)(-32767 - 1)))) >= (((/* implicit */val<int>) ((val<unsigned short>) (val<signed char>)-11)))))), (var_6)));
    *var_11 = ((/* implicit */val<int>) (+(((max((4294967274U), (((/* implicit */val<unsigned int>) (val<unsigned char>)63)))) * (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 824044842U))))))))));
    *var_12 = ((/* implicit */val<unsigned char>) max((*var_12), (((/* implicit */val<unsigned char>) ((val<int>) (val<signed char>)-62)))));
    *var_13 = ((/* implicit */val<unsigned short>) min((*var_13), (((/* implicit */val<unsigned short>) ((((/* implicit */val<int>) var_7)) > ((~((~(((/* implicit */val<int>) (val<unsigned char>)201)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4015761704U;
bool var_7 = (bool)1;
int zero = 0;
short var_10 = (short)20800;
int var_11 = 215159642;
unsigned char var_12 = (unsigned char)53;
unsigned short var_13 = (unsigned short)56773;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)0;
    value_mismatch |= var_11 != 0;
    value_mismatch |= var_12 != (unsigned char)194;
    value_mismatch |= var_13 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, zero, &var_10, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
