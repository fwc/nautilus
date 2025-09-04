/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3936
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3936
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
void test(val<unsigned char> var_1, val<unsigned int> var_2, val<unsigned char> var_3, val<unsigned int> var_7, val<unsigned char> var_11, val<unsigned int> var_12, val<int> zero, val<unsigned int*> var_18, val<unsigned short*> var_19, val<long long int*> var_20) {
    *var_18 = min((((/* implicit */val<unsigned int>) ((((((/* implicit */val<int>) min((((/* implicit */val<short>) var_3)), ((val<short>)-12390)))) + (2147483647))) << ((((+(var_7))) - (3816925691U)))))), (var_2));
    *var_19 ^= ((/* implicit */val<unsigned short>) (((~(((var_12) + (925158232U))))) % (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_11)))));
    *var_20 = ((/* implicit */val<long long int>) min((*var_20), (((/* implicit */val<long long int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned int var_2 = 3680738824U;
unsigned char var_3 = (unsigned char)237;
unsigned int var_7 = 3816925691U;
unsigned char var_11 = (unsigned char)87;
unsigned int var_12 = 2962654236U;
int zero = 0;
unsigned int var_18 = 41939854U;
unsigned short var_19 = (unsigned short)3394;
long long int var_20 = 6350301615779469912LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2147471257U;
    value_mismatch |= var_19 != (unsigned short)3437;
    value_mismatch |= var_20 != 64LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_7, var_11, var_12, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
