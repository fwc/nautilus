/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4975
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4975
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_5, val<unsigned long long int> var_6, val<unsigned int> var_12, val<unsigned short> var_13, val<int> var_15, val<int> zero, val<bool*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((((/* implicit */val<bool>) min((((var_6) / (((/* implicit */val<unsigned long long int>) var_15)))), (((/* implicit */val<unsigned long long int>) (val<signed char>)64))))) && (((/* implicit */val<bool>) var_15)));
    *var_19 = max((((((/* implicit */val<bool>) var_12)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned short>)3516))) : (((var_5) % (var_2))))), (max((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) var_13))))), (var_2))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2279133705220290205ULL;
unsigned long long int var_5 = 5662505140084819996ULL;
unsigned long long int var_6 = 4085723339031477937ULL;
unsigned int var_12 = 198757076U;
unsigned short var_13 = (unsigned short)62885;
int var_15 = -1447939645;
int zero = 0;
bool var_18 = (bool)0;
unsigned long long int var_19 = 7846111675536664677ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != 18446744073709488731ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_6, var_12, var_13, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
