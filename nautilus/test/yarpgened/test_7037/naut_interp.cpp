/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7037
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7037
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
void test(val<signed char> var_14, val<int> zero, val<long long int*> var_19, val<unsigned char*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((val<long long int>) var_14))));
    *var_20 = ((/* implicit */val<unsigned char>) (~(-7432763816712094393LL)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)125;
int zero = 0;
long long int var_19 = -141334531797820605LL;
unsigned char var_20 = (unsigned char)241;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != -141334531797820605LL;
    value_mismatch |= var_20 != (unsigned char)184;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_14, zero, &var_19, &var_20);
  checksum();
}
