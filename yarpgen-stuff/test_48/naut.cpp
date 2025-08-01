/*
yarpgen version 2.0 (build 887b8f1 on 1980:01:01)
Seed: 48
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=48
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
void test(val<bool> var_7, val<int> zero, val<unsigned short*> var_19, val<unsigned short*> var_20) {
    *var_19 ^= ((/* implicit */val<unsigned short>) ((var_7) ? (((/* implicit */val<unsigned int>) 2095104)) : (3U)));
    *var_20 = ((/* implicit */val<unsigned short>) (val<bool>)0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_7 = (bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)35702;
unsigned short var_20 = (unsigned short)56338;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned short)35701;
    value_mismatch |= var_20 != (unsigned short)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_7, zero, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
