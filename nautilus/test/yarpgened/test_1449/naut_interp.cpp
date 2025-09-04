/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1449
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1449
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
void test(val<unsigned long long int> var_5, val<int> var_12, val<unsigned char> var_16, val<unsigned int> var_17, val<int> zero, val<unsigned int*> var_18, val<long long int*> var_19) {
    *var_18 += ((/* implicit */val<unsigned int>) ((((4361033416042329321LL) + (((/* implicit */val<long long int>) ((((/* implicit */val<unsigned int>) var_12)) / (var_17)))))) <= (((/* implicit */val<long long int>) max((((/* implicit */val<int>) ((val<bool>) var_5))), ((+(((/* implicit */val<int>) var_16)))))))));
    *var_19 = ((/* implicit */val<long long int>) var_16);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17044843178757004266ULL;
int var_12 = -1807218344;
unsigned char var_16 = (unsigned char)139;
unsigned int var_17 = 3584514584U;
int zero = 0;
unsigned int var_18 = 2874888360U;
long long int var_19 = 2217790568918133410LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 2874888360U;
    value_mismatch |= var_19 != 139LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_12, var_16, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
