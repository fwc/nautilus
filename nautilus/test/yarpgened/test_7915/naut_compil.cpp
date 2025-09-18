/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7915
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7915
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
void test(val<signed char> var_0, val<int> var_3, val<int> zero, val<bool*> var_18, val<long long int*> var_19) {
    *var_18 = ((/* implicit */val<bool>) min((((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) var_0))))), ((val<unsigned short>)384)));
    *var_19 = ((/* implicit */val<long long int>) max((((/* implicit */val<int>) (val<bool>)1)), (min((((/* implicit */val<int>) (val<short>)-6113)), (max((var_3), (-410790955)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
int var_3 = -559452399;
int zero = 0;
bool var_18 = (bool)0;
long long int var_19 = 3377699772207058074LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (bool)0;
    value_mismatch |= var_19 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, zero, &var_18, &var_19);
  checksum();
}
