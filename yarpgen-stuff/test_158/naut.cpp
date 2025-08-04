/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 158
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=158
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
void test(val<long long int> var_1, val<int> var_4, val<bool> var_8, val<unsigned int> var_12, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned int>) ((val<int>) ((val<unsigned short>) var_12)))) ^ (min((var_12), (((/* implicit */val<unsigned int>) var_4))))));
    *var_15 = ((/* implicit */val<unsigned char>) var_8);
    *var_16 ^= ((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned short>)65535))) - (var_1)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7610010004803717341LL;
int var_4 = -1429364790;
bool var_8 = (bool)0;
unsigned int var_12 = 3672340061U;
int zero = 0;
unsigned char var_14 = (unsigned char)90;
unsigned char var_15 = (unsigned char)252;
int var_16 = -2094977233;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)151;
    value_mismatch |= var_15 != (unsigned char)0;
    value_mismatch |= var_16 != -576497651;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_8, var_12, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
