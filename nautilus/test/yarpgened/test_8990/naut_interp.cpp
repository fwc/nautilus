/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8990
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8990
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
void test(val<long long int> var_3, val<int> zero, val<long long int*> var_14, val<long long int*> var_15) {
    *var_14 = ((/* implicit */val<long long int>) (!(((/* implicit */val<bool>) max((982612884994792186LL), (((/* implicit */val<long long int>) 2564760439U)))))));
    *var_15 |= ((/* implicit */val<long long int>) ((max((-3648586971450663664LL), (var_3))) > (((((/* implicit */val<bool>) ((val<unsigned int>) 3648586971450663664LL))) ? (max((9223372036854775807LL), (-3648586971450663649LL))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((((/* implicit */val<bool>) (-9223372036854775807LL - 1LL))) && (((/* implicit */val<bool>) -1561453654130092447LL))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 8044862618920279967LL;
int zero = 0;
long long int var_14 = -3654030369321554372LL;
long long int var_15 = 5543720058819031561LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 0LL;
    value_mismatch |= var_15 != 5543720058819031561LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
