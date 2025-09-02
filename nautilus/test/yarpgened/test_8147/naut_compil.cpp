/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8147
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8147
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
void test(val<unsigned long long int> var_0, val<unsigned char> var_1, val<bool> var_6, val<int> zero, val<unsigned long long int*> var_15, val<unsigned long long int*> var_16) {
    *var_15 = ((/* implicit */val<unsigned long long int>) (-(((val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_1))) % (144115188075331584LL))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) max((*var_16), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) var_0)) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((val<unsigned short>) var_6))) ? (144115188075331584LL) : ((+(-144115188075331584LL)))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5775960716792109598ULL;
unsigned char var_1 = (unsigned char)95;
bool var_6 = (bool)1;
int zero = 0;
unsigned long long int var_15 = 3343290742704521147ULL;
unsigned long long int var_16 = 17201551019960915019ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 18446744073709551521ULL;
    value_mismatch |= var_16 != 17201551019960915019ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_6, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
