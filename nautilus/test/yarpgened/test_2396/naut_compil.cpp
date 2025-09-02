/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2396
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2396
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
void test(val<unsigned char> var_0, val<int> zero, val<unsigned int*> var_18, val<unsigned short*> var_19) {
    *var_18 = ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (val<unsigned char>)90)) ? (((/* implicit */val<int>) (val<unsigned char>)82)) : (-1081651348)));
    *var_19 = ((/* implicit */val<unsigned short>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
int zero = 0;
unsigned int var_18 = 4141840969U;
unsigned short var_19 = (unsigned short)3245;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 82U;
    value_mismatch |= var_19 != (unsigned short)162;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
