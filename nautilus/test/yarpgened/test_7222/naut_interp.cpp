/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7222
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7222
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
void test(val<long long int> var_5, val<bool> var_6, val<long long int> var_15, val<int> zero, val<long long int*> var_18, val<long long int*> var_19) {
    *var_18 = ((((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (((val<bool>)0) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) var_6))))), (min((var_15), (3603652793822845535LL)))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!((val<bool>)1))))) : (var_5));
    *var_19 = ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) (val<bool>)1)), (3640291859U)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4732677630139152695LL;
bool var_6 = (bool)0;
long long int var_15 = -231638961922836721LL;
int zero = 0;
long long int var_18 = -1373403422046062430LL;
long long int var_19 = 7730791522811077260LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 4732677630139152695LL;
    value_mismatch |= var_19 != 3640291859LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
