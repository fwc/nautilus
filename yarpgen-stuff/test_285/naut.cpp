/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 285
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=285
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<unsigned int> var_5, val<unsigned long long int> var_11, val<int> zero, val<unsigned short*> var_16, val<unsigned int*> var_17) {
    *var_16 = ((/* implicit */val<unsigned short>) max((*var_16), (((/* implicit */val<unsigned short>) var_5))));
    *var_17 = ((/* implicit */val<unsigned int>) var_11);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2935405032U;
unsigned long long int var_11 = 5476327991933163974ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)26779;
unsigned int var_17 = 198381614U;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != (unsigned short)47592;
    value_mismatch |= var_17 != 951343558U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_11, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
