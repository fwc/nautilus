/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3114
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3114
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
void test(val<bool> var_2, val<unsigned short> var_5, val<unsigned int> var_7, val<unsigned short> var_8, val<int> var_9, val<unsigned char> var_10, val<unsigned int> var_12, val<signed char> var_14, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned char*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) ((((((/* implicit */val<bool>) var_8)) ? (max((var_12), (var_12))) : (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_10))))))) == (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_14)))));
    *var_16 = ((/* implicit */val<unsigned long long int>) min((*var_16), (((/* implicit */val<unsigned long long int>) min((((/* implicit */val<int>) var_2)), (var_9))))));
    *var_17 = ((/* implicit */val<unsigned char>) min((((/* implicit */val<unsigned int>) var_9)), ((~(max((var_7), (((/* implicit */val<unsigned int>) var_5))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
unsigned short var_5 = (unsigned short)46009;
unsigned int var_7 = 1056490481U;
unsigned short var_8 = (unsigned short)2014;
int var_9 = 1885124276;
unsigned char var_10 = (unsigned char)21;
unsigned int var_12 = 1399052950U;
signed char var_14 = (signed char)-13;
int zero = 0;
long long int var_15 = -4801419134955544686LL;
unsigned long long int var_16 = 13759341249871120946ULL;
unsigned char var_17 = (unsigned char)119;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != (unsigned char)180;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_9, var_10, var_12, var_14, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
