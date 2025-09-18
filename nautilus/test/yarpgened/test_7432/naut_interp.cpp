/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7432
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7432
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
void test(val<long long int> var_2, val<long long int> var_3, val<long long int> var_8, val<unsigned short> var_11, val<unsigned short> var_15, val<unsigned short> var_16, val<int> zero, val<unsigned short*> var_19, val<unsigned int*> var_20) {
    *var_19 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<bool>) var_2)) ? (((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_11))) : (var_8))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) ((((/* implicit */val<long long int>) -535529548)) & (var_3))))))));
    *var_20 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) (~(1033037304U)))) && (((/* implicit */val<bool>) var_15))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5272227242366962572LL;
long long int var_3 = 3117129439914798541LL;
long long int var_8 = 6549832295796178626LL;
unsigned short var_11 = (unsigned short)17953;
unsigned short var_15 = (unsigned short)65438;
unsigned short var_16 = (unsigned short)49909;
int zero = 0;
unsigned short var_19 = (unsigned short)57841;
unsigned int var_20 = 3004444634U;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)17953;
    value_mismatch |= var_20 != 3004444635U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_8, var_11, var_15, var_16, zero, &var_19, &var_20);
  checksum();
}
