/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2279
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2279
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
void test(val<signed char> var_0, val<unsigned int> var_1, val<long long int> var_3, val<unsigned short> var_10, val<signed char> var_12, val<unsigned long long int> var_18, val<int> zero, val<long long int*> var_19, val<bool*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) (+(((/* implicit */val<int>) max((((val<signed char>) var_18)), (max((var_0), (var_0))))))));
    *var_20 = ((/* implicit */val<bool>) ((((((/* implicit */val<bool>) max((var_1), (((/* implicit */val<unsigned int>) -1375875000))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_10))) : (((val<unsigned long long int>) (val<unsigned char>)127)))) >> (((((/* implicit */val<bool>) -1375875021)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) : (var_3)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)115;
unsigned int var_1 = 3853739304U;
long long int var_3 = 8725464907165904239LL;
unsigned short var_10 = (unsigned short)28993;
signed char var_12 = (signed char)59;
unsigned long long int var_18 = 14715354927229504579ULL;
int zero = 0;
long long int var_19 = -7329176061300304837LL;
bool var_20 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 115LL;
    value_mismatch |= var_20 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_10, var_12, var_18, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
