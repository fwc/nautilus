/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8025
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8025
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
void test(val<signed char> var_3, val<unsigned long long int> var_5, val<unsigned char> var_14, val<int> zero, val<signed char*> var_16, val<unsigned long long int*> var_17, val<long long int*> var_18, val<int*> var_19) {
    *var_16 = ((/* implicit */val<signed char>) var_5);
    *var_17 = ((/* implicit */val<unsigned long long int>) max((*var_17), (((/* implicit */val<unsigned long long int>) var_14))));
    *var_18 = ((/* implicit */val<long long int>) var_3);
    *var_19 = ((/* implicit */val<int>) min((12629003600980720267ULL), (((/* implicit */val<unsigned long long int>) (val<unsigned short>)14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-37;
unsigned long long int var_5 = 11971413693430961884ULL;
unsigned char var_14 = (unsigned char)217;
int zero = 0;
signed char var_16 = (signed char)-47;
unsigned long long int var_17 = 8769527667326014120ULL;
long long int var_18 = -2336204452564302939LL;
int var_19 = 822808346;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (signed char)-36;
    value_mismatch |= var_17 != 8769527667326014120ULL;
    value_mismatch |= var_18 != -37LL;
    value_mismatch |= var_19 != 14;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_14, zero, &var_16, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
