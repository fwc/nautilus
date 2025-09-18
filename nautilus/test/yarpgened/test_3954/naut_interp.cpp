/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3954
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3954
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
void test(val<int> var_1, val<long long int> var_4, val<int> var_6, val<unsigned long long int> var_11, val<bool> var_16, val<int> zero, val<int*> var_18, val<bool*> var_19) {
    *var_18 -= ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)11534)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned short>)65535))))) : (((/* implicit */val<int>) (val<unsigned short>)35589))))) ? (var_1) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_16))) / (var_11))))))));
    *var_19 = ((/* implicit */val<bool>) max((((/* implicit */val<short>) ((var_4) >= (((/* implicit */val<long long int>) var_6))))), ((val<short>)19554)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1721423589;
long long int var_4 = 9109873036298577855LL;
int var_6 = -84089424;
unsigned long long int var_11 = 6408887913466140499ULL;
bool var_16 = (bool)1;
int zero = 0;
int var_18 = -1992698040;
bool var_19 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -1992698041;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_11, var_16, zero, &var_18, &var_19);
  checksum();
}
