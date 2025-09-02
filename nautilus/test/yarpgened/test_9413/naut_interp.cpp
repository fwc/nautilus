/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9413
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9413
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
void test(val<long long int> var_1, val<long long int> var_8, val<short> var_13, val<short> var_14, val<int> zero, val<long long int*> var_17, val<unsigned int*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) ((val<unsigned int>) var_1));
    *var_18 = ((/* implicit */val<unsigned int>) max((((/* implicit */val<long long int>) ((val<short>) (val<short>)31038))), (min((((/* implicit */val<long long int>) min(((val<short>)-31039), ((val<short>)31041)))), (((((/* implicit */val<bool>) var_14)) ? (var_8) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_13)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 945673911998869955LL;
long long int var_8 = 112892440257409804LL;
short var_13 = (short)17487;
short var_14 = (short)-102;
int zero = 0;
long long int var_17 = -2984155349832759661LL;
unsigned int var_18 = 3162704756U;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 2651582915LL;
    value_mismatch |= var_18 != 31038U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_8, var_13, var_14, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
