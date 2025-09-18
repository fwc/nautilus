/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4943
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4943
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
void test(val<short> var_2, val<unsigned long long int> var_4, val<int> zero, val<short*> var_18, val<short*> var_19) {
    *var_18 = ((/* implicit */val<short>) max((15949229002919223124ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned char>)81))));
    *var_19 = ((/* implicit */val<short>) min(((+(((((/* implicit */val<bool>) 12904223164743228740ULL)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2))) : (11008379438145758966ULL))))), (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32139;
unsigned long long int var_4 = 13796464915966412774ULL;
int zero = 0;
short var_18 = (short)21615;
short var_19 = (short)-21173;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (short)-24748;
    value_mismatch |= var_19 != (short)18406;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, zero, &var_18, &var_19);
  checksum();
}
