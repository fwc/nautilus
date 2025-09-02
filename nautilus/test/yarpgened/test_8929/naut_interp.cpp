/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8929
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8929
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
void test(val<int> var_17, val<int> zero, val<long long int*> var_18, val<unsigned long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_18 = ((/* implicit */val<long long int>) (((-(4246736564933602402ULL))) > (((/* implicit */val<unsigned long long int>) 3786377014U))));
    *var_19 = (~(max((((/* implicit */val<unsigned long long int>) var_17)), ((~(14200007508775949213ULL))))));
    *var_20 = 4246736564933602402ULL;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_17 = -392734339;
int zero = 0;
long long int var_18 = -639661790714825196LL;
unsigned long long int var_19 = 1250072136360169018ULL;
unsigned long long int var_20 = 3860206386435562860ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1LL;
    value_mismatch |= var_19 != 392734338ULL;
    value_mismatch |= var_20 != 4246736564933602402ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_17, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
