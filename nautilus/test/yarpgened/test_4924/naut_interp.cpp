/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4924
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4924
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
void test(val<unsigned int> var_5, val<bool> var_6, val<unsigned long long int> var_8, val<int> var_11, val<unsigned char> var_12, val<signed char> var_13, val<int> zero, val<bool*> var_15, val<unsigned long long int*> var_16, val<unsigned long long int*> var_17) {
    *var_15 = ((/* implicit */val<bool>) (-(min((((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_12))) * (var_8))), (((/* implicit */val<unsigned long long int>) var_6))))));
    *var_16 = ((/* implicit */val<unsigned long long int>) var_11);
    *var_17 = ((/* implicit */val<unsigned long long int>) (+(((((((/* implicit */val<bool>) var_13)) || (((/* implicit */val<bool>) var_11)))) ? (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_12))))) : (((val<unsigned int>) var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 889887919U;
bool var_6 = (bool)1;
unsigned long long int var_8 = 7539336477544791821ULL;
int var_11 = -1761817072;
unsigned char var_12 = (unsigned char)8;
signed char var_13 = (signed char)-51;
int zero = 0;
bool var_15 = (bool)1;
unsigned long long int var_16 = 8452463359486489752ULL;
unsigned long long int var_17 = 17383531834063391706ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != (bool)1;
    value_mismatch |= var_16 != 18446744071947734544ULL;
    value_mismatch |= var_17 != 4294967287ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_8, var_11, var_12, var_13, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
