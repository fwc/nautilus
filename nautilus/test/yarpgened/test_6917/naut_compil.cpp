/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6917
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=6917
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
void test(val<unsigned long long int> var_0, val<signed char> var_1, val<signed char> var_2, val<int> var_3, val<int> var_4, val<unsigned int> var_5, val<int> zero, val<unsigned short*> var_12, val<long long int*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) max((((/* implicit */val<unsigned int>) var_2)), ((~(((((/* implicit */val<bool>) var_5)) ? (var_5) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_2)))))))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<unsigned long long int>) ((val<int>) ((((/* implicit */val<bool>) var_0)) ? (((/* implicit */val<int>) var_1)) : (var_4))))) - (((var_0) - (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_2)) - (var_3))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5346739261011423472ULL;
signed char var_1 = (signed char)45;
signed char var_2 = (signed char)77;
int var_3 = -1277002199;
int var_4 = -346281466;
unsigned int var_5 = 4059231144U;
int zero = 0;
unsigned short var_12 = (unsigned short)7913;
long long int var_13 = -3619963569046389971LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)3159;
    value_mismatch |= var_13 != -5346739259734421151LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_4, var_5, zero, &var_12, &var_13);
  checksum();
}
