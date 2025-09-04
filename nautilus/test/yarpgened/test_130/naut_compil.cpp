/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 130
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=130
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
void test(val<int> var_0, val<unsigned long long int> var_3, val<bool> var_4, val<unsigned char> var_6, val<signed char> var_7, val<short> var_10, val<int> zero, val<long long int*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) max((((/* implicit */val<unsigned char>) var_4)), (var_6)))), (max((((/* implicit */val<unsigned long long int>) var_0)), (max((var_3), (((/* implicit */val<unsigned long long int>) var_7))))))));
    *var_15 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) var_10))))), (var_3)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -103717318;
unsigned long long int var_3 = 2207046436956936898ULL;
bool var_4 = (bool)1;
unsigned char var_6 = (unsigned char)108;
signed char var_7 = (signed char)85;
short var_10 = (short)-23467;
int zero = 0;
long long int var_14 = 1154151429505449759LL;
long long int var_15 = 2082374902787923069LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != -103717318LL;
    value_mismatch |= var_15 != 2207046436956936898LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_6, var_7, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
