/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9560
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9560
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
void test(val<int> var_0, val<unsigned short> var_1, val<unsigned int> var_4, val<signed char> var_5, val<long long int> var_8, val<signed char> var_9, val<int> zero, val<int*> var_10, val<bool*> var_11, val<signed char*> var_12) {
    *var_10 = ((/* implicit */val<int>) (~(((((/* implicit */val<bool>) ((val<int>) var_5))) ? (((/* implicit */val<unsigned int>) min((var_0), (((/* implicit */val<int>) var_5))))) : (min((((/* implicit */val<unsigned int>) var_9)), (var_4)))))));
    *var_11 = ((/* implicit */val<bool>) ((val<long long int>) ((((/* implicit */val<bool>) (~(var_4)))) ? (((/* implicit */val<unsigned int>) (-(((/* implicit */val<int>) var_1))))) : (var_4))));
    *var_12 = ((/* implicit */val<signed char>) min(((~(var_8))), (((/* implicit */val<long long int>) (-(((/* implicit */val<int>) var_5)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1874257107;
unsigned short var_1 = (unsigned short)3016;
unsigned int var_4 = 2418143034U;
signed char var_5 = (signed char)70;
long long int var_8 = -675407827328744188LL;
signed char var_9 = (signed char)58;
int zero = 0;
int var_10 = -1142271817;
bool var_11 = (bool)1;
signed char var_12 = (signed char)31;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != -71;
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (signed char)-70;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_4, var_5, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
