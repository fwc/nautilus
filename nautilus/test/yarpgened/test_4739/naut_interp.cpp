/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4739
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4739
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
void test(val<unsigned char> var_7, val<int> zero, val<long long int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) (val<bool>)1);
    *var_21 = ((/* implicit */val<long long int>) ((val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)18012)) ? (-22LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) || (((/* implicit */val<bool>) (-(((/* implicit */val<int>) var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)102;
int zero = 0;
long long int var_20 = -6576153585210856170LL;
long long int var_21 = 8505441963477458203LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 1LL;
    value_mismatch |= var_21 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_20, &var_21);
  checksum();
}
