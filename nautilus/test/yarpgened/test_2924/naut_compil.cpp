/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2924
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=2924
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
void test(val<unsigned int> var_0, val<unsigned char> var_1, val<long long int> var_2, val<signed char> var_7, val<int> var_10, val<signed char> var_12, val<int> zero, val<long long int*> var_14, val<bool*> var_15) {
    *var_14 += ((((/* implicit */val<long long int>) min((((((/* implicit */val<bool>) 2007475283)) ? (((/* implicit */val<unsigned int>) var_10)) : (564075105U))), (var_0)))) - (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) | (max((((/* implicit */val<long long int>) var_7)), (var_2))))));
    *var_15 += ((/* implicit */val<bool>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2787506393U;
unsigned char var_1 = (unsigned char)140;
long long int var_2 = -556739071112989950LL;
signed char var_7 = (signed char)-118;
int var_10 = -1613850187;
signed char var_12 = (signed char)125;
int zero = 0;
long long int var_14 = -1970647152828379703LL;
bool var_15 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -1970647150147262593LL;
    value_mismatch |= var_15 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_7, var_10, var_12, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
