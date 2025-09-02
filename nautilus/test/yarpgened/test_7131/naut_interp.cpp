/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7131
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7131
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
void test(val<int> var_5, val<long long int> var_14, val<int> zero, val<long long int*> var_19, val<unsigned long long int*> var_20) {
    *var_19 = ((/* implicit */val<long long int>) min((*var_19), (((/* implicit */val<long long int>) var_5))));
    *var_20 = ((/* implicit */val<unsigned long long int>) var_14);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 528276047;
long long int var_14 = -1353504113088439978LL;
int zero = 0;
long long int var_19 = 8532874005301582901LL;
unsigned long long int var_20 = 13135412796453039602ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 528276047LL;
    value_mismatch |= var_20 != 17093239960621111638ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_14, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
