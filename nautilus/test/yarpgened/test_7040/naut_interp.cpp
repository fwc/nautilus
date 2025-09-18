/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7040
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7040
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
void test(val<signed char> var_3, val<long long int> var_5, val<long long int> var_7, val<unsigned short> var_9, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17, val<unsigned int*> var_18) {
    *var_15 = max((((/* implicit */val<long long int>) min(((+(((/* implicit */val<int>) (val<short>)-1)))), (((/* implicit */val<int>) (val<short>)-1))))), (var_5));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_17 &= ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 |= ((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_3))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-112;
long long int var_5 = 7198219075399329244LL;
long long int var_7 = 2143043724735939218LL;
unsigned short var_9 = (unsigned short)45799;
int zero = 0;
long long int var_15 = -8875362332613448951LL;
unsigned long long int var_16 = 3456619071217106756ULL;
unsigned long long int var_17 = 15529857082969965705ULL;
unsigned int var_18 = 2723581407U;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 7198219075399329244LL;
    value_mismatch |= var_16 != 2143043724735939218ULL;
    value_mismatch |= var_17 != 129ULL;
    value_mismatch |= var_18 != 4294967263U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_7, var_9, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
