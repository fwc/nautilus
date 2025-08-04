/*
yarpgen version 2.0 (build df0ddec on 1980:01:01)
Seed: 573
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=573
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
void test(val<unsigned char> var_0, val<unsigned int> var_2, val<bool> var_4, val<bool> var_5, val<signed char> var_6, val<unsigned short> var_7, val<unsigned char> var_8, val<long long int> var_10, val<short> var_11, val<unsigned long long int> var_12, val<long long int> var_13, val<int> zero, val<bool*> var_15, val<short*> var_16) {
    *var_15 = ((/* implicit */val<bool>) min((min((((var_2) << (((var_10) + (7309318428051711894LL))))), (((/* implicit */val<unsigned int>) ((var_4) ? (((/* implicit */val<int>) var_0)) : (((/* implicit */val<int>) (val<short>)20391))))))), (((/* implicit */val<unsigned int>) ((val<bool>) var_8)))));
    *var_16 = ((/* implicit */val<short>) max((*var_16), (((/* implicit */val<short>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<int>) (val<short>)20403)) ^ (((/* implicit */val<int>) var_7))))) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_6)))))) : (((val<unsigned long long int>) var_11))))) ? (((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<short>)-20402))) / (var_13)))) + (min((((/* implicit */val<unsigned long long int>) var_5)), (var_12))))) : (((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((var_12) | (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)20391))))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned int var_2 = 1509553588U;
bool var_4 = (bool)1;
bool var_5 = (bool)0;
signed char var_6 = (signed char)-40;
unsigned short var_7 = (unsigned short)39357;
unsigned char var_8 = (unsigned char)72;
long long int var_10 = -7309318428051711884LL;
short var_11 = (short)292;
unsigned long long int var_12 = 8645139501863769986ULL;
long long int var_13 = 7991855475697725746LL;
int zero = 0;
bool var_15 = (bool)1;
short var_16 = (short)-5148;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != (short)-5148;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", false);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_7, var_8, var_10, var_11, var_12, var_13, zero, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
