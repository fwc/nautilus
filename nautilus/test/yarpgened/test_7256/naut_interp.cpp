/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7256
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=7256
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
void test(val<unsigned long long int> var_5, val<bool> var_6, val<signed char> var_8, val<int> var_9, val<int> zero, val<unsigned char*> var_13, val<unsigned long long int*> var_14) {
    *var_13 = ((/* implicit */val<unsigned char>) min((*var_13), (((/* implicit */val<unsigned char>) max(((+(((/* implicit */val<int>) var_8)))), (((/* implicit */val<int>) (val<unsigned short>)24063)))))));
    *var_14 = max((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) var_6))), (min((((/* implicit */val<unsigned long long int>) var_9)), (max((var_5), (var_5))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12897444928583611889ULL;
bool var_6 = (bool)1;
signed char var_8 = (signed char)82;
int var_9 = -586864858;
int zero = 0;
unsigned char var_13 = (unsigned char)117;
unsigned long long int var_14 = 1540198634602953915ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_13 != (unsigned char)117;
    value_mismatch |= var_14 != 12897444928583611889ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_5, var_6, var_8, var_9, zero, &var_13, &var_14);
  checksum();
}
