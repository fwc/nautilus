/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 148
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=148
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
void test(val<long long int> var_0, val<long long int> var_1, val<long long int> var_2, val<long long int> var_4, val<long long int> var_7, val<long long int> var_9, val<long long int> var_10, val<int> zero, val<long long int*> var_11, val<long long int*> var_12) {
    *var_11 -= ((((/* implicit */val<bool>) (((!(((/* implicit */val<bool>) var_10)))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_7) == (var_1))))) : (((((-1563463407982347969LL) + (9223372036854775807LL))) >> (((2692053275654332987LL) - (2692053275654332952LL)))))))) ? (((((/* implicit */val<bool>) 140728898420736LL)) ? (var_0) : (var_4))) : (((((/* implicit */val<bool>) (~(var_9)))) ? (var_10) : (var_0))));
    *var_12 = ((/* implicit */val<long long int>) min((*var_12), (var_2)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5732021920683190120LL;
long long int var_1 = -6425001808720877455LL;
long long int var_2 = 1559025947065346218LL;
long long int var_4 = -4419811779227941433LL;
long long int var_7 = 9140400386577559353LL;
long long int var_9 = -3274033123612508835LL;
long long int var_10 = -311399297434796905LL;
int zero = 0;
long long int var_11 = 7636575221694955178LL;
long long int var_12 = -8619988181524064695LL;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != 1904553301011765058LL;
    value_mismatch |= var_12 != -8619988181524064695LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_7, var_9, var_10, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
