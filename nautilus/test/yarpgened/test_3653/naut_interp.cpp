/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3653
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3653
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
void test(val<signed char> var_2, val<signed char> var_3, val<unsigned char> var_5, val<short> var_6, val<int> var_12, val<bool> var_16, val<int> zero, val<signed char*> var_18, val<short*> var_19, val<short*> var_20) {
    *var_18 = ((/* implicit */val<signed char>) ((((((/* implicit */val<bool>) ((((/* implicit */val<int>) var_2)) + (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<int>) ((val<signed char>) var_5))) : (var_12))) < (((/* implicit */val<int>) var_16))));
    *var_19 = var_6;
    *var_20 = ((/* implicit */val<short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
signed char var_3 = (signed char)9;
unsigned char var_5 = (unsigned char)177;
short var_6 = (short)-4208;
int var_12 = 143146824;
bool var_16 = (bool)1;
int zero = 0;
signed char var_18 = (signed char)-44;
short var_19 = (short)21310;
short var_20 = (short)32468;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (signed char)1;
    value_mismatch |= var_19 != (short)-4208;
    value_mismatch |= var_20 != (short)-112;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_6, var_12, var_16, zero, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
