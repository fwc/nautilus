/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 687
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=687
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
void test(val<unsigned long long int> var_8, val<int> var_9, val<int> zero, val<bool*> var_11, val<unsigned char*> var_12) {
    *var_11 = ((/* implicit */val<bool>) (~(var_8)));
    *var_12 = ((/* implicit */val<unsigned char>) var_9);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8201310615582268333ULL;
int var_9 = -950283935;
int zero = 0;
bool var_11 = (bool)0;
unsigned char var_12 = (unsigned char)83;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (bool)1;
    value_mismatch |= var_12 != (unsigned char)97;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_9, zero, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
