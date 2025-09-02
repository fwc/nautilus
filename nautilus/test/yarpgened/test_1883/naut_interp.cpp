/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1883
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1883
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
void test(val<int> var_4, val<int> zero, val<long long int*> var_10, val<long long int*> var_11) {
    *var_10 = ((/* implicit */val<long long int>) (!(((max((792454272U), (792454272U))) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 3502513024U))))))))));
    *var_11 = ((/* implicit */val<long long int>) (-(min((((792454278U) & (((/* implicit */val<unsigned int>) var_4)))), ((~(3502513024U)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1338171206;
int zero = 0;
long long int var_10 = -6872241068494911788LL;
long long int var_11 = -364493308842562105LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != 1LL;
    value_mismatch |= var_11 != 4043127802LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
