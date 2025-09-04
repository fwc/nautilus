/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8679
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8679
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
void test(val<bool> var_0, val<unsigned int> var_2, val<long long int> var_8, val<int> var_9, val<unsigned int> var_11, val<int> zero, val<bool*> var_13, val<unsigned int*> var_14, val<long long int*> var_15, val<signed char*> var_16, val<int*> var_17) {
    *var_13 = ((/* implicit */val<bool>) var_9);
    *var_14 = ((/* implicit */val<unsigned int>) min((*var_14), ((((!(((/* implicit */val<bool>) var_8)))) ? (((/* implicit */val<unsigned int>) ((max(((val<bool>)1), (var_0))) ? ((~(0))) : (-672838046)))) : (var_2)))));
    *var_15 = var_8;
    *var_16 = ((/* implicit */val<signed char>) var_11);
    *var_17 = min((((/* implicit */val<int>) (val<short>)-6427)), (1));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned int var_2 = 3764209046U;
long long int var_8 = -4358005907559443839LL;
int var_9 = -36532069;
unsigned int var_11 = 3043396638U;
int zero = 0;
bool var_13 = (bool)1;
unsigned int var_14 = 299191649U;
long long int var_15 = -2038109565433405846LL;
signed char var_16 = (signed char)-98;
int var_17 = -245455553;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (bool)1;
    value_mismatch |= var_14 != 299191649U;
    value_mismatch |= var_15 != -4358005907559443839LL;
    value_mismatch |= var_16 != (signed char)30;
    value_mismatch |= var_17 != -6427;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_8, var_9, var_11, zero, &var_13, &var_14, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
