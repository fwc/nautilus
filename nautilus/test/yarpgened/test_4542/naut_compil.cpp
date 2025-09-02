/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4542
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4542
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
void test(val<bool> var_6, val<unsigned char> var_9, val<signed char> var_13, val<long long int> var_14, val<int> zero, val<long long int*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17, val<unsigned char*> var_18) {
    *var_15 = ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_6))) : (var_14));
    *var_16 *= ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (+(1761014216U))))));
    *var_17 = ((/* implicit */val<unsigned long long int>) var_9);
    *var_18 = ((/* implicit */val<unsigned char>) max((*var_18), (((/* implicit */val<unsigned char>) max((2533953097U), (2533953080U))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_6 = (bool)0;
unsigned char var_9 = (unsigned char)98;
signed char var_13 = (signed char)30;
long long int var_14 = -7561592530248559074LL;
int zero = 0;
long long int var_15 = -750807398176297700LL;
unsigned long long int var_16 = 7633226738551295171ULL;
unsigned long long int var_17 = 11342622804650153500ULL;
unsigned char var_18 = (unsigned char)235;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0LL;
    value_mismatch |= var_16 != 0ULL;
    value_mismatch |= var_17 != 98ULL;
    value_mismatch |= var_18 != (unsigned char)235;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_9, var_13, var_14, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
