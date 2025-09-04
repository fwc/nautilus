/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1892
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1892
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
void test(val<long long int> var_2, val<unsigned char> var_4, val<unsigned int> var_6, val<long long int> var_9, val<unsigned int> var_11, val<int> zero, val<unsigned int*> var_17, val<int*> var_18) {
    *var_17 = ((((/* implicit */val<bool>) min((((((/* implicit */val<bool>) (val<unsigned char>)254)) ? (var_2) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)194))))), (((/* implicit */val<long long int>) var_4))))) ? (var_6) : (max((((((/* implicit */val<bool>) var_9)) ? (1281825493U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_4))))), (((/* implicit */val<unsigned int>) (!(((/* implicit */val<bool>) var_6))))))));
    *var_18 = ((/* implicit */val<int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3085479527868669759LL;
unsigned char var_4 = (unsigned char)174;
unsigned int var_6 = 795814579U;
long long int var_9 = -8252223407952795283LL;
unsigned int var_11 = 2729424208U;
int zero = 0;
unsigned int var_17 = 3340766325U;
int var_18 = -1495122732;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 795814579U;
    value_mismatch |= var_18 != -1565543088;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_9, var_11, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
