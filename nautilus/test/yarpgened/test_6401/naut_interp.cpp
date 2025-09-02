/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6401
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6401
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
void test(val<unsigned char> var_0, val<unsigned int> var_1, val<signed char> var_5, val<unsigned char> var_6, val<long long int> var_7, val<int> var_8, val<long long int> var_10, val<int> zero, val<int*> var_13, val<unsigned int*> var_14) {
    *var_13 = ((/* implicit */val<int>) max((((((/* implicit */val<bool>) ((val<signed char>) var_8))) ? (((val<long long int>) var_7)) : (((var_7) / (((/* implicit */val<long long int>) var_1)))))), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_10)) ? ((~(((/* implicit */val<int>) var_5)))) : (((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) var_6)) : (((/* implicit */val<int>) var_0)))))))));
    *var_14 = ((/* implicit */val<unsigned int>) var_7);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
unsigned int var_1 = 3579405701U;
signed char var_5 = (signed char)4;
unsigned char var_6 = (unsigned char)60;
long long int var_7 = 3079165727300693854LL;
int var_8 = -1786623478;
long long int var_10 = 1764881210008418290LL;
int zero = 0;
int var_13 = -1284799078;
unsigned int var_14 = 2102912349U;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 877703006;
    value_mismatch |= var_14 != 877703006U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_5, var_6, var_7, var_8, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
