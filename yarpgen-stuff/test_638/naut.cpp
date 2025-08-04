/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 638
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=638
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
void test(val<bool> var_2, val<unsigned char> var_4, val<bool> var_7, val<unsigned char> var_8, val<short> var_10, val<int> zero, val<short*> var_13, val<signed char*> var_14) {
    *var_13 *= ((/* implicit */val<short>) ((((/* implicit */val<bool>) ((val<long long int>) (+(((/* implicit */val<int>) var_7)))))) ? (((((/* implicit */val<bool>) var_4)) ? (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<signed char>)-31))))) : (((/* implicit */val<int>) max((((/* implicit */val<unsigned char>) var_7)), (var_4)))))) : (((((/* implicit */val<bool>) ((val<signed char>) 17355866625183588047ULL))) ? (((/* implicit */val<int>) ((((/* implicit */val<int>) var_8)) >= (((/* implicit */val<int>) var_7))))) : (((/* implicit */val<int>) var_10))))));
    *var_14 = ((/* implicit */val<signed char>) max((*var_14), (((/* implicit */val<signed char>) max((((((/* implicit */val<bool>) (val<signed char>)61)) ? (5406280074997082386ULL) : (13040463998712469209ULL))), (((/* implicit */val<unsigned long long int>) var_2)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_2 = (bool)0;
unsigned char var_4 = (unsigned char)252;
bool var_7 = (bool)0;
unsigned char var_8 = (unsigned char)216;
short var_10 = (short)27459;
int zero = 0;
short var_13 = (short)-1364;
signed char var_14 = (signed char)99;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (short)-1364;
    value_mismatch |= var_14 != (signed char)99;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_7, var_8, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
