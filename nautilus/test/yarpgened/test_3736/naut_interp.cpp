/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3736
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3736
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
void test(val<long long int> var_4, val<short> var_6, val<unsigned short> var_7, val<signed char> var_8, val<signed char> var_10, val<unsigned char> var_11, val<unsigned long long int> var_12, val<int> zero, val<unsigned char*> var_14, val<short*> var_15, val<signed char*> var_16, val<unsigned long long int*> var_17) {
    *var_14 = ((/* implicit */val<unsigned char>) max((((val<short>) ((val<short>) var_6))), (((/* implicit */val<short>) var_8))));
    *var_15 = ((/* implicit */val<short>) (~(((((/* implicit */val<int>) var_8)) ^ (((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) var_7))))))));
    *var_16 = ((/* implicit */val<signed char>) min((*var_16), (((/* implicit */val<signed char>) var_11))));
    *var_17 ^= (-(min((var_12), (min((((/* implicit */val<unsigned long long int>) var_4)), (var_12))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -881849905849719663LL;
short var_6 = (short)17727;
unsigned short var_7 = (unsigned short)3098;
signed char var_8 = (signed char)-58;
signed char var_10 = (signed char)9;
unsigned char var_11 = (unsigned char)245;
unsigned long long int var_12 = 14844719665304061663ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)130;
short var_15 = (short)-7424;
signed char var_16 = (signed char)-40;
unsigned long long int var_17 = 16002510774441288843ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)63;
    value_mismatch |= var_15 != (short)48;
    value_mismatch |= var_16 != (signed char)-40;
    value_mismatch |= var_17 != 17287244048354287018ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_7, var_8, var_10, var_11, var_12, zero, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
