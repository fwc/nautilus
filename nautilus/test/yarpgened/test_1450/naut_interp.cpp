/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1450
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1450
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
void test(val<unsigned short> var_1, val<bool> var_6, val<signed char> var_10, val<int> zero, val<long long int*> var_20, val<int*> var_21) {
    *var_20 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) var_6)), (min((((/* implicit */val<int>) min(((val<unsigned short>)5326), (((/* implicit */val<unsigned short>) var_10))))), ((~(((/* implicit */val<int>) (val<unsigned short>)60222))))))));
    *var_21 ^= ((/* implicit */val<int>) var_1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36521;
bool var_6 = (bool)0;
signed char var_10 = (signed char)60;
int zero = 0;
long long int var_20 = -7882916531221555173LL;
int var_21 = 1793769219;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0LL;
    value_mismatch |= var_21 != 1793733034;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_6, var_10, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
