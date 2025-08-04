/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 124
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=124
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
void test(val<bool> var_1, val<bool> var_10, val<int> zero, val<unsigned char*> var_14, val<short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) ((4294967277U) < (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_10)))));
    *var_15 = ((/* implicit */val<short>) (~(((/* implicit */val<int>) ((val<unsigned char>) var_1)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
bool var_10 = (bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)111;
short var_15 = (short)-18119;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (short)-2;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_10, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
