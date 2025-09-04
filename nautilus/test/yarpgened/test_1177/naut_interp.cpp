/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1177
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1177
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<bool> var_4, val<long long int> var_6, val<int> zero, val<long long int*> var_13, val<unsigned short*> var_14) {
    *var_13 |= ((((/* implicit */val<bool>) (val<unsigned short>)30379)) ? (((((16887015405397939650ULL) > (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))) ? (var_6) : (((/* implicit */val<long long int>) var_1)))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_4))));
    *var_14 = ((/* implicit */val<unsigned short>) max((*var_14), (((/* implicit */val<unsigned short>) (+((~(((/* implicit */val<int>) min(((val<unsigned char>)62), ((val<unsigned char>)170)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)221;
unsigned int var_1 = 453537039U;
bool var_4 = (bool)0;
long long int var_6 = 1923578342735996919LL;
int zero = 0;
long long int var_13 = -8885570299530718540LL;
unsigned short var_14 = (unsigned short)4755;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != -7011545037418924041LL;
    value_mismatch |= var_14 != (unsigned short)65473;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_6, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
