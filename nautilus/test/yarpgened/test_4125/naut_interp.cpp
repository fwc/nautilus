/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4125
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4125
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
void test(val<long long int> var_5, val<signed char> var_12, val<unsigned char> var_14, val<int> zero, val<unsigned char*> var_18, val<long long int*> var_19) {
    *var_18 -= ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) var_12))) / (var_5)));
    *var_19 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) var_14))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4278718574953482044LL;
signed char var_12 = (signed char)-16;
unsigned char var_14 = (unsigned char)136;
int zero = 0;
unsigned char var_18 = (unsigned char)49;
long long int var_19 = -4408505331015708581LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)49;
    value_mismatch |= var_19 != 0LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, var_14, zero, &var_18, &var_19);
  checksum();
}
