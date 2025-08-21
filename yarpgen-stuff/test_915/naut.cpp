/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 915
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --seed=915
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
void test(val<bool> var_0, val<unsigned char> var_2, val<signed char> var_4, val<unsigned char> var_5, val<unsigned char> var_6, val<unsigned short> var_8, val<signed char> var_9, val<int> zero, val<signed char*> var_10, val<signed char*> var_11, val<bool*> var_12) {
    *var_10 = ((/* implicit */val<signed char>) min((*var_10), (((/* implicit */val<signed char>) ((max((((((/* implicit */val<int>) var_6)) > (((/* implicit */val<int>) var_2)))), (((((/* implicit */val<int>) var_5)) >= (((/* implicit */val<int>) var_0)))))) ? (((/* implicit */val<int>) var_8)) : (((/* implicit */val<int>) var_6)))))));
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<int>) var_0)) & (((((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) < (((/* implicit */val<int>) var_9))))) & (((((/* implicit */val<int>) var_2)) & (((/* implicit */val<int>) var_4))))))));
    *var_12 = ((val<bool>) max((var_2), (((/* implicit */val<unsigned char>) var_0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)1;
unsigned char var_2 = (unsigned char)177;
signed char var_4 = (signed char)-68;
unsigned char var_5 = (unsigned char)27;
unsigned char var_6 = (unsigned char)207;
unsigned short var_8 = (unsigned short)64634;
signed char var_9 = (signed char)79;
int zero = 0;
signed char var_10 = (signed char)-112;
signed char var_11 = (signed char)-57;
bool var_12 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (signed char)-112;
    value_mismatch |= var_11 != (signed char)0;
    value_mismatch |= var_12 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_4, var_5, var_6, var_8, var_9, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
