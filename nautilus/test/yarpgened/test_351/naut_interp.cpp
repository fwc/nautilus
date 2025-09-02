/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 351
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=351
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
void test(val<unsigned short> var_13, val<unsigned long long int> var_14, val<int> zero, val<unsigned char*> var_18, val<unsigned int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<unsigned char>) ((val<int>) var_13));
    *var_19 = ((/* implicit */val<unsigned int>) (+(13730926331475613917ULL)));
    *var_20 = var_14;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_13 = (unsigned short)42133;
unsigned long long int var_14 = 17012536942141590475ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)102;
unsigned int var_19 = 214652252U;
unsigned long long int var_20 = 16214346048139841345ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)149;
    value_mismatch |= var_19 != 3098106077U;
    value_mismatch |= var_20 != 17012536942141590475ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_13, var_14, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
