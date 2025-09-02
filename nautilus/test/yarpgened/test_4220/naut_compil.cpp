/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4220
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4220
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
void test(val<unsigned long long int> var_2, val<unsigned short> var_6, val<signed char> var_10, val<int> zero, val<signed char*> var_19, val<short*> var_20, val<unsigned short*> var_21) {
    *var_19 = ((/* implicit */val<signed char>) (val<bool>)0);
    *var_20 = ((/* implicit */val<short>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<int>) var_10)) : (((/* implicit */val<int>) (val<bool>)0))))), ((+(3857233831U))))))));
    *var_21 = ((/* implicit */val<unsigned short>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17014814806193836096ULL;
unsigned short var_6 = (unsigned short)14433;
signed char var_10 = (signed char)54;
int zero = 0;
signed char var_19 = (signed char)-59;
short var_20 = (short)-29572;
unsigned short var_21 = (unsigned short)53996;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (signed char)0;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != (unsigned short)36928;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_10, zero, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
