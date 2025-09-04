/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2094
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2094
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
void test(val<long long int> var_0, val<signed char> var_3, val<signed char> var_5, val<unsigned int> var_7, val<unsigned int> var_9, val<unsigned long long int> var_10, val<unsigned int> var_12, val<long long int> var_14, val<int> zero, val<unsigned int*> var_17, val<unsigned int*> var_18, val<unsigned char*> var_19) {
    *var_17 |= ((/* implicit */val<unsigned int>) var_3);
    *var_18 = ((/* implicit */val<unsigned int>) var_10);
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) max((var_12), (((/* implicit */val<unsigned int>) 268419072))))) ? (((var_0) & (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_3))) == (((((/* implicit */val<bool>) var_7)) ? (var_14) : (((/* implicit */val<long long int>) var_9))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5886234734402307135LL;
signed char var_3 = (signed char)-51;
signed char var_5 = (signed char)-106;
unsigned int var_7 = 202304176U;
unsigned int var_9 = 2867095667U;
unsigned long long int var_10 = 8659424917018641317ULL;
unsigned int var_12 = 1856243480U;
long long int var_14 = 6787466450215696253LL;
int zero = 0;
unsigned int var_17 = 2438368051U;
unsigned int var_18 = 989456473U;
unsigned char var_19 = (unsigned char)180;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 4294967295U;
    value_mismatch |= var_18 != 437257125U;
    value_mismatch |= var_19 != (unsigned char)22;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_5, var_7, var_9, var_10, var_12, var_14, zero, &var_17, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
