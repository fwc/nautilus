/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1066
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1066
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
void test(val<signed char> var_0, val<signed char> var_7, val<unsigned char> var_14, val<unsigned int> var_15, val<bool> var_17, val<int> zero, val<unsigned long long int*> var_18, val<signed char*> var_19, val<bool*> var_20, val<short*> var_21) {
    *var_18 = ((/* implicit */val<unsigned long long int>) max((((((/* implicit */val<bool>) var_0)) || (((((/* implicit */val<bool>) var_15)) && (((/* implicit */val<bool>) var_7)))))), ((!(((/* implicit */val<bool>) ((val<unsigned short>) var_14)))))));
    *var_19 = ((/* implicit */val<signed char>) (val<bool>)1);
    *var_20 = var_17;
    *var_21 = ((val<short>) (val<bool>)1);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
signed char var_7 = (signed char)82;
unsigned char var_14 = (unsigned char)133;
unsigned int var_15 = 1103067121U;
bool var_17 = (bool)0;
int zero = 0;
unsigned long long int var_18 = 14680035435570154725ULL;
signed char var_19 = (signed char)-36;
bool var_20 = (bool)1;
short var_21 = (short)11820;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != 1ULL;
    value_mismatch |= var_19 != (signed char)1;
    value_mismatch |= var_20 != (bool)0;
    value_mismatch |= var_21 != (short)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_7, var_14, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
