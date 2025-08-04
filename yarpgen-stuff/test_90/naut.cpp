/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 90
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=90
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
void test(val<bool> var_4, val<short> var_6, val<int> var_8, val<int> var_9, val<int> var_12, val<int> var_14, val<int> zero, val<int*> var_15, val<bool*> var_16) {
    *var_15 = ((val<int>) var_9);
    *var_16 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) (~(min((1073737728), (var_12)))))) ? (((((/* implicit */val<bool>) (~(var_8)))) ? (min((var_12), (var_14))) : (((/* implicit */val<int>) var_4)))) : (((/* implicit */val<int>) var_6))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_4 = (bool)0;
short var_6 = (short)-9350;
int var_8 = 423386948;
int var_9 = -1989156008;
int var_12 = -104111611;
int var_14 = -168204766;
int zero = 0;
int var_15 = 553695211;
bool var_16 = (bool)0;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -1989156008;
    value_mismatch |= var_16 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, var_8, var_9, var_12, var_14, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
