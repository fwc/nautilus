/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7694
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7694
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
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
void test(val<signed char> var_0, val<signed char> var_2, val<bool> var_3, val<long long int> var_4, val<unsigned char> var_6, val<bool> var_7, val<short> var_9, val<signed char> var_12, val<bool> var_17, val<int> zero, val<int*> var_18, val<signed char*> var_19) {
    *var_18 = min((((((/* implicit */val<int>) var_12)) + (((/* implicit */val<int>) var_2)))), (((/* implicit */val<int>) ((val<short>) ((((/* implicit */val<int>) var_3)) + (((/* implicit */val<int>) var_9)))))));
    *var_19 = ((/* implicit */val<signed char>) min(((+(((var_17) ? (11269361724606743423ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_0))))))), (((/* implicit */val<unsigned long long int>) ((val<short>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (var_4)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-109;
signed char var_2 = (signed char)-127;
bool var_3 = (bool)0;
long long int var_4 = 1388000772795929210LL;
unsigned char var_6 = (unsigned char)133;
bool var_7 = (bool)0;
short var_9 = (short)19293;
signed char var_12 = (signed char)40;
bool var_17 = (bool)1;
int zero = 0;
int var_18 = 1161383150;
signed char var_19 = (signed char)-34;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != -87;
    value_mismatch |= var_19 != (signed char)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_4, var_6, var_7, var_9, var_12, var_17, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
