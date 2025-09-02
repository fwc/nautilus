/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9020
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9020
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
void test(val<unsigned char> var_13, val<unsigned short> var_14, val<int> zero, val<unsigned short*> var_16, val<unsigned short*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned short>) 852163190616058054ULL);
    *var_17 = ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_13))));
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((/* implicit */val<unsigned long long int>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)160;
unsigned short var_14 = (unsigned short)52698;
int zero = 0;
unsigned short var_16 = (unsigned short)1322;
unsigned short var_17 = (unsigned short)65280;
unsigned long long int var_18 = 16460497461002127575ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)26822;
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != 16460497461002127575ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_14, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
