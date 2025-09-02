/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7557
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7557
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
void test(val<short> var_3, val<unsigned int> var_4, val<unsigned int> var_9, val<unsigned long long int> var_12, val<unsigned long long int> var_15, val<long long int> var_18, val<int> zero, val<bool*> var_19, val<signed char*> var_20) {
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) var_18)) | (((((/* implicit */val<bool>) ((val<unsigned char>) var_3))) ? ((-(var_12))) : (((/* implicit */val<unsigned long long int>) min((var_4), (var_9))))))));
    *var_20 = ((/* implicit */val<signed char>) var_15);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8105;
unsigned int var_4 = 1767746889U;
unsigned int var_9 = 2561891034U;
unsigned long long int var_12 = 7563370294781416078ULL;
unsigned long long int var_15 = 8601435708333141162ULL;
long long int var_18 = -4667894116684830025LL;
int zero = 0;
bool var_19 = (bool)1;
signed char var_20 = (signed char)97;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (bool)1;
    value_mismatch |= var_20 != (signed char)-86;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_9, var_12, var_15, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
