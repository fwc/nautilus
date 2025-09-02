/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8794
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8794
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
void test(val<unsigned short> var_0, val<bool> var_1, val<int> var_2, val<unsigned short> var_4, val<int> var_7, val<unsigned short> var_9, val<unsigned short> var_10, val<int> zero, val<long long int*> var_11, val<int*> var_12, val<long long int*> var_13) {
    *var_11 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) max(((+(((/* implicit */val<int>) var_0)))), (((var_2) / (((/* implicit */val<int>) var_10)))))))));
    *var_12 = ((((var_1) && (((/* implicit */val<bool>) (~(((/* implicit */val<int>) var_4))))))) ? (((/* implicit */val<int>) (!((!(((/* implicit */val<bool>) (val<unsigned char>)175))))))) : (((((/* implicit */val<bool>) (+(var_7)))) ? (max((((/* implicit */val<int>) var_9)), (1668032455))) : ((~(var_2))))));
    *var_13 = ((/* implicit */val<long long int>) 1668032455);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21547;
bool var_1 = (bool)1;
int var_2 = -1467280474;
unsigned short var_4 = (unsigned short)32329;
int var_7 = -1286500746;
unsigned short var_9 = (unsigned short)22031;
unsigned short var_10 = (unsigned short)10290;
int zero = 0;
long long int var_11 = -5320378128074708599LL;
int var_12 = 1332866179;
long long int var_13 = 2750191352510164626LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 0LL;
    value_mismatch |= var_12 != 1;
    value_mismatch |= var_13 != 1668032455LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_7, var_9, var_10, zero, &var_11, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
