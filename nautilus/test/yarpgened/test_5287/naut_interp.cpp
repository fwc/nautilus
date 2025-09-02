/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5287
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5287
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
void test(val<unsigned long long int> var_0, val<signed char> var_4, val<unsigned char> var_8, val<unsigned int> var_11, val<int> zero, val<signed char*> var_14, val<signed char*> var_15, val<unsigned char*> var_16) {
    *var_14 -= ((/* implicit */val<signed char>) ((((/* implicit */val<bool>) ((((((/* implicit */val<int>) var_4)) * (((/* implicit */val<int>) (val<signed char>)31)))) / (((/* implicit */val<int>) max(((val<unsigned short>)13469), (((/* implicit */val<unsigned short>) (val<short>)-32767)))))))) || (((/* implicit */val<bool>) ((val<signed char>) ((val<unsigned char>) var_8))))));
    *var_15 *= ((/* implicit */val<signed char>) var_11);
    *var_16 = ((/* implicit */val<unsigned char>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11064457566419356037ULL;
signed char var_4 = (signed char)-73;
unsigned char var_8 = (unsigned char)175;
unsigned int var_11 = 1419156214U;
int zero = 0;
signed char var_14 = (signed char)82;
signed char var_15 = (signed char)71;
unsigned char var_16 = (unsigned char)209;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (signed char)81;
    value_mismatch |= var_15 != (signed char)58;
    value_mismatch |= var_16 != (unsigned char)133;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_8, var_11, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
