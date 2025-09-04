/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1561
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1561
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
void test(val<signed char> var_2, val<signed char> var_4, val<bool> var_6, val<signed char> var_12, val<unsigned short> var_14, val<int> zero, val<unsigned int*> var_16, val<unsigned short*> var_17) {
    *var_16 = ((/* implicit */val<unsigned int>) var_4);
    *var_17 = ((/* implicit */val<unsigned short>) ((((/* implicit */val<long long int>) max(((-(((/* implicit */val<int>) (val<unsigned char>)115)))), (((/* implicit */val<int>) var_14))))) + (((((((((/* implicit */val<bool>) var_12)) ? (-6193276760913188452LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<unsigned char>)155))))) + (9223372036854775807LL))) << (((/* implicit */val<int>) min((var_2), (((/* implicit */val<signed char>) var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)17;
signed char var_4 = (signed char)57;
bool var_6 = (bool)0;
signed char var_12 = (signed char)-33;
unsigned short var_14 = (unsigned short)57201;
int zero = 0;
unsigned int var_16 = 4189136455U;
unsigned short var_17 = (unsigned short)7612;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 57U;
    value_mismatch |= var_17 != (unsigned short)18700;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_4, var_6, var_12, var_14, zero, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
