/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9331
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9331
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
void test(val<unsigned short> var_0, val<unsigned short> var_7, val<unsigned short> var_8, val<int> zero, val<bool*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<bool>) var_8);
    *var_16 = ((/* implicit */val<unsigned long long int>) max((*var_16), (((/* implicit */val<unsigned long long int>) max(((((-(((/* implicit */val<int>) var_7)))) < (((/* implicit */val<int>) min(((val<unsigned short>)53099), (((/* implicit */val<unsigned short>) (val<unsigned char>)164))))))), (((((/* implicit */val<bool>) (val<short>)13403)) || (((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<unsigned short>)46223)) - (((/* implicit */val<int>) var_0))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41323;
unsigned short var_7 = (unsigned short)13757;
unsigned short var_8 = (unsigned short)29067;
int zero = 0;
bool var_15 = (bool)0;
unsigned long long int var_16 = 17780667921141742415ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 17780667921141742415ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_8, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
