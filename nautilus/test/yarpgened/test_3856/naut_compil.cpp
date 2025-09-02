/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3856
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3856
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
void test(val<long long int> var_6, val<long long int> var_7, val<short> var_9, val<long long int> var_10, val<unsigned long long int> var_12, val<unsigned long long int> var_16, val<int> zero, val<long long int*> var_17, val<short*> var_18) {
    *var_17 = ((/* implicit */val<long long int>) min((*var_17), (((/* implicit */val<long long int>) (((((!(((/* implicit */val<bool>) var_16)))) ? (min((((/* implicit */val<long long int>) (val<short>)-13958)), (var_7))) : (((/* implicit */val<long long int>) (~(((/* implicit */val<int>) var_9))))))) < (min((var_10), (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_12)) && (((/* implicit */val<bool>) 9223372036854775807LL))))))))))));
    *var_18 = ((/* implicit */val<short>) (-(var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4941373477221549280LL;
long long int var_7 = -3259051259837122485LL;
short var_9 = (short)-11473;
long long int var_10 = 8091644516402387743LL;
unsigned long long int var_12 = 3791297129380426752ULL;
unsigned long long int var_16 = 9530191588776422348ULL;
int zero = 0;
long long int var_17 = 8790227838267151106LL;
short var_18 = (short)-29712;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != 0LL;
    value_mismatch |= var_18 != (short)15136;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_6, var_7, var_9, var_10, var_12, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
