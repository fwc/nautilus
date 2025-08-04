/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 527
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=527
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
void test(val<bool> var_1, val<short> var_3, val<int> var_5, val<bool> var_8, val<int> var_9, val<int> zero, val<unsigned short*> var_12, val<bool*> var_13) {
    *var_12 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) (!((!(((/* implicit */val<bool>) var_3))))))), (((((((/* implicit */val<bool>) var_3)) || (var_8))) ? (min((((/* implicit */val<unsigned long long int>) var_9)), (1ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))));
    *var_13 += ((/* implicit */val<bool>) var_5);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)0;
short var_3 = (short)-6919;
int var_5 = -1496378252;
bool var_8 = (bool)0;
int var_9 = -1595463487;
int zero = 0;
unsigned short var_12 = (unsigned short)28486;
bool var_13 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned short)1;
    value_mismatch |= var_13 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_5, var_8, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
