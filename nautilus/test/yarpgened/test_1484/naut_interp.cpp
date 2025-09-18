/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1484
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1484
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
void test(val<long long int> var_2, val<short> var_5, val<long long int> var_12, val<short> var_18, val<int> zero, val<short*> var_20, val<short*> var_21) {
    *var_20 = ((/* implicit */val<short>) ((((((/* implicit */val<int>) (val<unsigned char>)45)) | (((/* implicit */val<int>) ((((/* implicit */val<bool>) var_18)) && (((/* implicit */val<bool>) var_5))))))) | (((/* implicit */val<int>) ((((var_2) >= (var_12))) && (((/* implicit */val<bool>) max((((/* implicit */val<long long int>) (val<unsigned char>)45)), (-5715910479575907772LL)))))))));
    *var_21 = ((/* implicit */val<short>) max((*var_21), (((/* implicit */val<short>) max((1834983840U), (((/* implicit */val<unsigned int>) (val<unsigned char>)45)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5050267887048642121LL;
short var_5 = (short)-5727;
long long int var_12 = -1366037455678066287LL;
short var_18 = (short)-32710;
int zero = 0;
short var_20 = (short)10504;
short var_21 = (short)21328;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (short)45;
    value_mismatch |= var_21 != (short)21328;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_12, var_18, zero, &var_20, &var_21);
  checksum();
}
