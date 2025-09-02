/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5464
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5464
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<signed char> var_1, val<bool> var_3, val<signed char> var_6, val<unsigned short> var_7, val<unsigned int> var_9, val<int> zero, val<unsigned char*> var_12, val<long long int*> var_13) {
    *var_12 ^= ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_1)) ? (-4113246673393998092LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<bool>)1)))))) ? (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)255))) < (7228607927349004779LL)))) : (((((/* implicit */val<int>) (val<bool>)1)) * (((/* implicit */val<int>) (val<bool>)1)))))) == (((/* implicit */val<int>) var_3))));
    *var_13 = ((/* implicit */val<long long int>) ((((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 9100907907686763481LL)) ? (3248712207U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_6)))))), (((((/* implicit */val<bool>) var_9)) ? (9373507108547031262ULL) : (((/* implicit */val<unsigned long long int>) 6U))))))) ? ((+((+(((/* implicit */val<int>) var_7)))))) : (((/* implicit */val<int>) max(((val<signed char>)20), (((/* implicit */val<signed char>) (val<bool>)1)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)41;
bool var_3 = (bool)0;
signed char var_6 = (signed char)-48;
unsigned short var_7 = (unsigned short)55248;
unsigned int var_9 = 2896172617U;
int zero = 0;
unsigned char var_12 = (unsigned char)10;
long long int var_13 = 6117671717448318172LL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)10;
    value_mismatch |= var_13 != 55248LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_7, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
