/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5313
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5313
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
void test(val<short> var_0, val<long long int> var_1, val<long long int> var_3, val<short> var_7, val<int> zero, val<unsigned char*> var_19, val<short*> var_20) {
    *var_19 = ((/* implicit */val<unsigned char>) ((-993129091) & (-740833596)));
    *var_20 = ((/* implicit */val<short>) min((((((-993129091) < (((/* implicit */val<int>) (val<short>)-14987)))) ? (min((((/* implicit */val<long long int>) var_7)), (var_3))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned short>) var_7)))))), (((/* implicit */val<long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-6081))) != (((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_0))) % (var_1))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9748;
long long int var_1 = -3055624512126440849LL;
long long int var_3 = 6563576049101975048LL;
short var_7 = (short)-20677;
int zero = 0;
unsigned char var_19 = (unsigned char)83;
short var_20 = (short)28165;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)68;
    value_mismatch |= var_20 != (short)-20677;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_3, var_7, zero, &var_19, &var_20);
  checksum();
}
