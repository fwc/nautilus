/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9038
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9038
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
void test(val<long long int> var_0, val<short> var_2, val<long long int> var_3, val<unsigned char> var_4, val<signed char> var_9, val<unsigned char> var_10, val<bool> var_13, val<unsigned long long int> var_14, val<int> zero, val<short*> var_15, val<unsigned char*> var_16, val<short*> var_17) {
    *var_15 = ((/* implicit */val<short>) (((~(var_14))) + (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) ((val<signed char>) var_9))))));
    *var_16 += ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) (val<unsigned short>)50221)) < ((-(((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_13)) : (((/* implicit */val<int>) (val<bool>)1))))))));
    *var_17 |= ((/* implicit */val<short>) ((((/* implicit */val<int>) min((max((((/* implicit */val<short>) (val<unsigned char>)0)), (var_2))), (((/* implicit */val<short>) ((((/* implicit */val<bool>) var_3)) || (((/* implicit */val<bool>) var_10)))))))) > (((((/* implicit */val<bool>) ((val<signed char>) var_13))) ? (((/* implicit */val<int>) var_4)) : (((/* implicit */val<int>) (val<bool>)0))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2706163854318631771LL;
short var_2 = (short)-13749;
long long int var_3 = 4090539750669900451LL;
unsigned char var_4 = (unsigned char)182;
signed char var_9 = (signed char)-60;
unsigned char var_10 = (unsigned char)120;
bool var_13 = (bool)0;
unsigned long long int var_14 = 3516953413209313708ULL;
int zero = 0;
short var_15 = (short)-24224;
unsigned char var_16 = (unsigned char)95;
short var_17 = (short)-19097;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (short)-20969;
    value_mismatch |= var_16 != (unsigned char)95;
    value_mismatch |= var_17 != (short)-19097;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_9, var_10, var_13, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
