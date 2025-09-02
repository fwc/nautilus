/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8022
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8022
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
void test(val<unsigned short> var_0, val<bool> var_2, val<signed char> var_9, val<short> var_11, val<unsigned short> var_12, val<int> zero, val<int*> var_18, val<unsigned char*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<int>) max((((((/* implicit */val<bool>) min(((val<unsigned short>)27010), (((/* implicit */val<unsigned short>) (val<bool>)0))))) && (var_2))), ((!(((((/* implicit */val<bool>) var_11)) && (((/* implicit */val<bool>) var_12))))))));
    *var_19 = ((/* implicit */val<unsigned char>) var_11);
    *var_20 = ((/* implicit */val<unsigned long long int>) (((!(((/* implicit */val<bool>) ((val<short>) var_9))))) && (((/* implicit */val<bool>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)603;
bool var_2 = (bool)0;
signed char var_9 = (signed char)88;
short var_11 = (short)1845;
unsigned short var_12 = (unsigned short)104;
int zero = 0;
int var_18 = -1361434683;
unsigned char var_19 = (unsigned char)198;
unsigned long long int var_20 = 15112195031029254692ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 0;
    value_mismatch |= var_19 != (unsigned char)53;
    value_mismatch |= var_20 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_9, var_11, var_12, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
