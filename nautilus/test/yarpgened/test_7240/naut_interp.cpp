/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7240
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7240
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
void test(val<int> var_2, val<unsigned int> var_4, val<unsigned long long int> var_6, val<unsigned long long int> var_7, val<unsigned long long int> var_10, val<long long int> var_12, val<int> zero, val<unsigned long long int*> var_16, val<int*> var_17, val<unsigned long long int*> var_18) {
    *var_16 = ((/* implicit */val<unsigned long long int>) min((((/* implicit */val<long long int>) (((((~(var_2))) + (2147483647))) >> (((((/* implicit */val<int>) ((val<unsigned char>) 439887505))) - (120)))))), (((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<bool>) var_10)))) : (var_12)))));
    *var_17 = ((((/* implicit */val<bool>) 1452414016)) ? (((/* implicit */val<int>) ((max((var_7), (((/* implicit */val<unsigned long long int>) (val<short>)-27144)))) <= (((/* implicit */val<unsigned long long int>) ((val<long long int>) var_12)))))) : (((val<int>) ((val<unsigned long long int>) var_6))));
    *var_18 = ((/* implicit */val<unsigned long long int>) var_4);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1056998781;
unsigned int var_4 = 721407546U;
unsigned long long int var_6 = 12065008740167826731ULL;
unsigned long long int var_7 = 16739433519294111288ULL;
unsigned long long int var_10 = 2321397048214219420ULL;
long long int var_12 = -8353856393830857424LL;
int zero = 0;
unsigned long long int var_16 = 18355169916268197492ULL;
int var_17 = 592117400;
unsigned long long int var_18 = 9004148490158596304ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1ULL;
    value_mismatch |= var_17 != 0;
    value_mismatch |= var_18 != 721407546ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_7, var_10, var_12, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
