/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8225
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8225
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
void test(val<unsigned char> var_1, val<unsigned short> var_4, val<unsigned char> var_10, val<long long int> var_14, val<int> zero, val<unsigned long long int*> var_17, val<unsigned long long int*> var_18) {
    *var_17 = ((/* implicit */val<unsigned long long int>) ((val<bool>) (!(((/* implicit */val<bool>) max((((/* implicit */val<long long int>) var_4)), (var_14)))))));
    *var_18 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<unsigned char>) (!(((/* implicit */val<bool>) ((val<unsigned char>) var_10)))))), (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)95;
unsigned short var_4 = (unsigned short)1769;
unsigned char var_10 = (unsigned char)127;
long long int var_14 = 8354714724608484383LL;
int zero = 0;
unsigned long long int var_17 = 6430395914626007167ULL;
unsigned long long int var_18 = 8385768834379450436ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0ULL;
    value_mismatch |= var_18 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_10, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
