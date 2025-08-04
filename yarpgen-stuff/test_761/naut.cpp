/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 761
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=761
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
void test(val<unsigned char> var_2, val<bool> var_5, val<unsigned char> var_7, val<bool> var_8, val<unsigned char> var_10, val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_13, val<unsigned char*> var_14, val<unsigned char*> var_15) {
    *var_13 = var_11;
    *var_14 -= ((/* implicit */val<unsigned char>) (~(((/* implicit */val<int>) var_11))));
    *var_15 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((((((/* implicit */val<bool>) var_10)) && (var_5))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_7)) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_2)))))))) != (((/* implicit */val<int>) (val<bool>)1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)245;
bool var_5 = (bool)0;
unsigned char var_7 = (unsigned char)37;
bool var_8 = (bool)1;
unsigned char var_10 = (unsigned char)159;
unsigned char var_11 = (unsigned char)188;
int zero = 0;
unsigned char var_13 = (unsigned char)149;
unsigned char var_14 = (unsigned char)111;
unsigned char var_15 = (unsigned char)158;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)188;
    value_mismatch |= var_14 != (unsigned char)44;
    value_mismatch |= var_15 != (unsigned char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_5, var_7, var_8, var_10, var_11, zero, &var_13, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
