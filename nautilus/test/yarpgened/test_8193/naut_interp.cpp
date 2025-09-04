/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8193
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8193
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
void test(val<long long int> var_1, val<signed char> var_2, val<unsigned char> var_10, val<int> zero, val<unsigned short*> var_13, val<long long int*> var_14) {
    *var_13 |= ((/* implicit */val<unsigned short>) (!(((/* implicit */val<bool>) ((var_1) * (((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) -956291231)))))))))));
    *var_14 = ((val<long long int>) ((((-6526094594900877244LL) ^ (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_2))))) > (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((val<unsigned char>) var_10))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7240035136327931685LL;
signed char var_2 = (signed char)-60;
unsigned char var_10 = (unsigned char)216;
int zero = 0;
unsigned short var_13 = (unsigned short)36770;
long long int var_14 = 1615757801033286752LL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned short)36771;
    value_mismatch |= var_14 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_10, zero, &var_13, &var_14);
  checksum();
  assert(!value_mismatch);
}
