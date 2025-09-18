/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5861
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5861
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
void test(val<signed char> var_4, val<unsigned char> var_5, val<int> var_7, val<unsigned long long int> var_9, val<int> zero, val<short*> var_16, val<unsigned long long int*> var_17, val<signed char*> var_18) {
    *var_16 -= ((/* implicit */val<short>) max(((~(((/* implicit */val<int>) min((var_4), ((val<signed char>)101)))))), (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_4)))))));
    *var_17 += ((/* implicit */val<unsigned long long int>) ((val<signed char>) ((val<signed char>) max((var_9), (((/* implicit */val<unsigned long long int>) var_5))))));
    *var_18 = ((/* implicit */val<signed char>) max((*var_18), (((/* implicit */val<signed char>) min((5959681435900702871ULL), (((/* implicit */val<unsigned long long int>) var_7)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-67;
unsigned char var_5 = (unsigned char)18;
int var_7 = -754879859;
unsigned long long int var_9 = 4586765558725709593ULL;
int zero = 0;
short var_16 = (short)-19836;
unsigned long long int var_17 = 10465990922352836066ULL;
signed char var_18 = (signed char)-113;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (short)-19902;
    value_mismatch |= var_17 != 10465990922352836091ULL;
    value_mismatch |= var_18 != (signed char)-105;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_5, var_7, var_9, zero, &var_16, &var_17, &var_18);
  checksum();
}
