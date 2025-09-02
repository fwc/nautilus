/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9787
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9787
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
void test(val<unsigned int> var_1, val<short> var_3, val<short> var_4, val<unsigned char> var_7, val<unsigned char> var_13, val<int> zero, val<long long int*> var_15, val<unsigned int*> var_16) {
    *var_15 = ((/* implicit */val<long long int>) max((*var_15), (((/* implicit */val<long long int>) ((((/* implicit */val<int>) var_13)) << (((var_1) - (4114287670U))))))));
    *var_16 &= ((/* implicit */val<unsigned int>) max((((((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_3)) : (((/* implicit */val<int>) (val<short>)-26928)))) * (((/* implicit */val<int>) var_4)))), (((/* implicit */val<int>) min((((/* implicit */val<short>) (!(((/* implicit */val<bool>) (val<unsigned short>)13587))))), ((val<short>)26938))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4114287687U;
short var_3 = (short)5723;
short var_4 = (short)6274;
unsigned char var_7 = (unsigned char)25;
unsigned char var_13 = (unsigned char)181;
int zero = 0;
long long int var_15 = 7873882837484975489LL;
unsigned int var_16 = 1460866181U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 7873882837484975489LL;
    value_mismatch |= var_16 != 33751044U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_7, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
