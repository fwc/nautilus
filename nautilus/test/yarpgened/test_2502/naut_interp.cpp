/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2502
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2502
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
void test(val<long long int> var_12, val<unsigned int> var_15, val<int> zero, val<unsigned int*> var_16, val<unsigned long long int*> var_17, val<unsigned short*> var_18) {
    *var_16 = ((/* implicit */val<unsigned int>) min((*var_16), (((/* implicit */val<unsigned int>) 9844703994796829445ULL))));
    *var_17 = max((((((val<unsigned long long int>) 9844703994796829445ULL)) * (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)4407))))), (((/* implicit */val<unsigned long long int>) ((var_15) / (((/* implicit */val<unsigned int>) (((val<bool>)1) ? (((/* implicit */val<int>) (val<bool>)1)) : (((/* implicit */val<int>) (val<short>)31699)))))))));
    *var_18 -= ((/* implicit */val<unsigned short>) var_12);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 5448429726031331102LL;
unsigned int var_15 = 349140904U;
int zero = 0;
unsigned int var_16 = 1745018605U;
unsigned long long int var_17 = 7980813073951460724ULL;
unsigned short var_18 = (unsigned short)32974;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 1745018605U;
    value_mismatch |= var_17 != 17315187778471514899ULL;
    value_mismatch |= var_18 != (unsigned short)49584;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_12, var_15, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
