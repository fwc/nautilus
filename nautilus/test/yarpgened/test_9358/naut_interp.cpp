/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9358
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9358
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
void test(val<bool> var_5, val<signed char> var_10, val<int> var_11, val<unsigned short> var_14, val<int> zero, val<signed char*> var_15, val<signed char*> var_16) {
    *var_15 -= ((/* implicit */val<signed char>) -5491168362379323880LL);
    *var_16 = ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_14))))) ? (((/* implicit */val<int>) (!(((((/* implicit */val<int>) var_5)) > (((/* implicit */val<int>) var_10))))))) : (((((var_11) + (2147483647))) >> (((var_11) + (183895650)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_5 = (bool)1;
signed char var_10 = (signed char)76;
int var_11 = -183895645;
unsigned short var_14 = (unsigned short)57596;
int zero = 0;
signed char var_15 = (signed char)113;
signed char var_16 = (signed char)120;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (signed char)89;
    value_mismatch |= var_16 != (signed char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_10, var_11, var_14, zero, &var_15, &var_16);
  checksum();
}
