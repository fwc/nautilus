/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7511
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7511
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
void test(val<int> var_1, val<unsigned short> var_4, val<int> zero, val<unsigned char*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) max((((((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1))))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) max(((val<unsigned short>)1), ((val<unsigned short>)50982)))))), (((/* implicit */val<int>) var_4))));
    *var_18 = ((/* implicit */val<unsigned long long int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1532544555;
unsigned short var_4 = (unsigned short)5242;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
unsigned long long int var_18 = 1048465687652259441ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)122;
    value_mismatch |= var_18 != 18446744072177007061ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
