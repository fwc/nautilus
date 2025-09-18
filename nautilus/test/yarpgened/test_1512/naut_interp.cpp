/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1512
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1512
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
void test(val<short> var_0, val<bool> var_8, val<bool> var_11, val<int> zero, val<bool*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<bool>) min(((val<unsigned short>)0), (((/* implicit */val<unsigned short>) (val<unsigned char>)5))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_0))) + (((((/* implicit */val<bool>) ((val<int>) var_11))) ? (min((0U), (((/* implicit */val<unsigned int>) (val<unsigned short>)12)))) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18865;
bool var_8 = (bool)1;
bool var_11 = (bool)1;
int zero = 0;
bool var_12 = (bool)1;
long long int var_13 = 538911908083814385LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != 4294948431LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_8, var_11, zero, &var_12, &var_13);
  checksum();
}
