/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6350
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6350
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
void test(val<long long int> var_1, val<long long int> var_2, val<long long int> var_5, val<signed char> var_7, val<signed char> var_8, val<int> zero, val<unsigned long long int*> var_10, val<unsigned int*> var_11, val<unsigned long long int*> var_12) {
    *var_10 = ((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<bool>) ((val<unsigned long long int>) (val<unsigned short>)26922))) ? (((((/* implicit */val<bool>) (val<unsigned short>)24456)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)62))) : (var_2))) : (((((/* implicit */val<bool>) var_1)) ? (var_5) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))) == (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_2) < (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 1185536137U))))))))))));
    *var_11 = ((/* implicit */val<unsigned int>) (((!(((/* implicit */val<bool>) -15)))) ? (max((max((((/* implicit */val<int>) (val<signed char>)-115)), (-675793829))), (((((/* implicit */val<bool>) 4722688338671582952LL)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_8)))))) : (((/* implicit */val<int>) var_7))));
    *var_12 |= ((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<unsigned short>)51448)) : (((/* implicit */val<int>) (val<unsigned short>)30420)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4477950020435099180LL;
long long int var_2 = -4363796238566743681LL;
long long int var_5 = 945957419629026765LL;
signed char var_7 = (signed char)101;
signed char var_8 = (signed char)9;
int zero = 0;
unsigned long long int var_10 = 14695926696311107060ULL;
unsigned int var_11 = 3334970683U;
unsigned long long int var_12 = 17007294071593301653ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 0ULL;
    value_mismatch |= var_11 != 101U;
    value_mismatch |= var_12 != 17007294071593303805ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_7, var_8, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
