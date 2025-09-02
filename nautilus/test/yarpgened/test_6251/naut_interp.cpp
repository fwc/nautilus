/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6251
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6251
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
void test(val<unsigned long long int> var_1, val<long long int> var_2, val<short> var_3, val<bool> var_7, val<int> zero, val<long long int*> var_12, val<unsigned char*> var_13, val<long long int*> var_14, val<int*> var_15) {
    *var_12 = max((((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 14114534850555873507ULL)) ? (((/* implicit */val<int>) (val<signed char>)-111)) : (((/* implicit */val<int>) (val<signed char>)121))))), (max((3963651126U), (((/* implicit */val<unsigned int>) var_7))))))), (var_2));
    *var_13 = ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) var_7))));
    *var_14 = ((/* implicit */val<long long int>) var_1);
    *var_15 = ((/* implicit */val<int>) var_3);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16392090414084833848ULL;
long long int var_2 = 1869216291122254598LL;
short var_3 = (short)24627;
bool var_7 = (bool)0;
int zero = 0;
long long int var_12 = 3617704241704018914LL;
unsigned char var_13 = (unsigned char)193;
long long int var_14 = 1879733353661998873LL;
int var_15 = 1536336617;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != 1869216291122254598LL;
    value_mismatch |= var_13 != (unsigned char)0;
    value_mismatch |= var_14 != -2054653659624717768LL;
    value_mismatch |= var_15 != 24627;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_7, zero, &var_12, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
