/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9255
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9255
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
void test(val<unsigned long long int> var_6, val<long long int> var_8, val<int> var_15, val<unsigned int> var_16, val<int> zero, val<unsigned long long int*> var_18, val<unsigned long long int*> var_19) {
    *var_18 = ((/* implicit */val<unsigned long long int>) max((*var_18), (((/* implicit */val<unsigned long long int>) var_8))));
    *var_19 = ((((/* implicit */val<unsigned long long int>) var_15)) * (((((var_6) / (((/* implicit */val<unsigned long long int>) var_15)))) / (((/* implicit */val<unsigned long long int>) max((((/* implicit */val<long long int>) var_16)), (-7584090929106031600LL)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 5757070721998117452ULL;
long long int var_8 = 8287477974541304928LL;
int var_15 = 680581700;
unsigned int var_16 = 3377809325U;
int zero = 0;
unsigned long long int var_18 = 4023632394320119685ULL;
unsigned long long int var_19 = 3909899225882694025ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 8287477974541304928ULL;
    value_mismatch |= var_19 != 1361163400ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_8, var_15, var_16, zero, &var_18, &var_19);
  checksum();
}
