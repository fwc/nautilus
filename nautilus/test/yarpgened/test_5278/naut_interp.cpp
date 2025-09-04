/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5278
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5278
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
void test(val<signed char> var_0, val<long long int> var_3, val<unsigned char> var_7, val<bool> var_11, val<long long int> var_12, val<int> zero, val<unsigned long long int*> var_13, val<int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned long long int>) var_11);
    *var_14 = ((/* implicit */val<int>) max((((/* implicit */val<long long int>) max((((val<unsigned int>) var_0)), (((/* implicit */val<unsigned int>) ((val<bool>) -264624833)))))), (max((((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_0))))), (((((/* implicit */val<bool>) var_12)) ? (var_3) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
long long int var_3 = 6749761788977271643LL;
unsigned char var_7 = (unsigned char)171;
bool var_11 = (bool)0;
long long int var_12 = -283362324827311001LL;
int zero = 0;
unsigned long long int var_13 = 209211066438421290ULL;
int var_14 = 695562968;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != 0ULL;
    value_mismatch |= var_14 != -696331429;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_11, var_12, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
