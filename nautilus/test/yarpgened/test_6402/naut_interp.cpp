/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6402
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6402
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
void test(val<int> var_2, val<int> var_3, val<long long int> var_8, val<int> var_10, val<long long int> var_12, val<int> zero, val<short*> var_13, val<unsigned long long int*> var_14, val<unsigned short*> var_15) {
    *var_13 ^= ((/* implicit */val<short>) var_12);
    *var_14 = ((/* implicit */val<unsigned long long int>) var_2);
    *var_15 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) (+(((val<int>) var_10))))) * (((((/* implicit */val<bool>) ((val<long long int>) var_3))) ? (max((var_8), (((/* implicit */val<long long int>) var_10)))) : (((/* implicit */val<long long int>) var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1952271624;
int var_3 = -724696207;
long long int var_8 = -8642922236969816767LL;
int var_10 = 453848485;
long long int var_12 = -4109222071753901976LL;
int zero = 0;
short var_13 = (short)-9736;
unsigned long long int var_14 = 17862417813033003682ULL;
unsigned short var_15 = (unsigned short)45191;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)8592;
    value_mismatch |= var_14 != 18446744071757279992ULL;
    value_mismatch |= var_15 != (unsigned short)27737;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_10, var_12, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
