/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9138
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9138
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
void test(val<unsigned int> var_0, val<unsigned char> var_4, val<unsigned int> var_5, val<long long int> var_7, val<unsigned short> var_9, val<signed char> var_13, val<unsigned short> var_15, val<signed char> var_17, val<int> var_18, val<int> zero, val<long long int*> var_19, val<unsigned long long int*> var_20, val<unsigned long long int*> var_21) {
    *var_19 -= ((/* implicit */val<long long int>) ((val<unsigned int>) ((var_7) | (((/* implicit */val<long long int>) min((((/* implicit */val<unsigned int>) var_4)), (var_0)))))));
    *var_20 = ((/* implicit */val<unsigned long long int>) max((var_5), (((/* implicit */val<unsigned int>) var_9))));
    *var_21 = ((/* implicit */val<unsigned long long int>) min((*var_21), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) max((((((/* implicit */val<bool>) 1390141102U)) ? ((-2147483647 - 1)) : (((/* implicit */val<int>) var_13)))), ((-(((/* implicit */val<int>) var_15))))))) ? (((/* implicit */val<int>) var_17)) : (var_18))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2468971912U;
unsigned char var_4 = (unsigned char)136;
unsigned int var_5 = 736760785U;
long long int var_7 = 6493031498243802242LL;
unsigned short var_9 = (unsigned short)5561;
signed char var_13 = (signed char)-22;
unsigned short var_15 = (unsigned short)21946;
signed char var_17 = (signed char)-97;
int var_18 = 469616460;
int zero = 0;
long long int var_19 = -1190628006929108668LL;
unsigned long long int var_20 = 18215342753509609578ULL;
unsigned long long int var_21 = 4970170048106205412ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -1190628006933205830LL;
    value_mismatch |= var_20 != 736760785ULL;
    value_mismatch |= var_21 != 4970170048106205412ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_5, var_7, var_9, var_13, var_15, var_17, var_18, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
