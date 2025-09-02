/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 777
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=777
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
void test(val<long long int> var_0, val<signed char> var_2, val<unsigned long long int> var_4, val<unsigned long long int> var_6, val<long long int> var_12, val<int> zero, val<bool*> var_13, val<short*> var_14, val<signed char*> var_15, val<int*> var_16) {
    *var_13 = ((/* implicit */val<bool>) (+((+(((/* implicit */val<int>) var_2))))));
    *var_14 = ((/* implicit */val<short>) max((*var_14), (((/* implicit */val<short>) var_12))));
    *var_15 = ((/* implicit */val<signed char>) var_0);
    *var_16 = ((/* implicit */val<int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<unsigned long long int>) (-(max((((/* implicit */val<int>) (val<short>)8192)), (-1422669641)))))) : (var_4)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7149861661844101848LL;
signed char var_2 = (signed char)15;
unsigned long long int var_4 = 10266325765518302684ULL;
unsigned long long int var_6 = 10346103449292283037ULL;
long long int var_12 = -9063517683507445938LL;
int zero = 0;
bool var_13 = (bool)1;
short var_14 = (short)-16328;
signed char var_15 = (signed char)-118;
int var_16 = 390864666;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != (short)16206;
    value_mismatch |= var_15 != (signed char)40;
    value_mismatch |= var_16 != -8192;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_6, var_12, zero, &var_13, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
