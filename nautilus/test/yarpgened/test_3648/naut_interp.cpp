/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3648
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3648
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
void test(val<unsigned long long int> var_2, val<unsigned long long int> var_6, val<unsigned long long int> var_12, val<unsigned char> var_16, val<int> zero, val<unsigned char*> var_17, val<unsigned char*> var_18) {
    *var_17 = ((/* implicit */val<unsigned char>) var_2);
    *var_18 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<bool>) var_16)) ? (((/* implicit */val<int>) ((((/* implicit */val<unsigned long long int>) 1182414797)) >= (var_12)))) : (((/* implicit */val<int>) (val<unsigned char>)63)))) <= (((/* implicit */val<int>) (!(((/* implicit */val<bool>) (+(var_6)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7490218647351337769ULL;
unsigned long long int var_6 = 5246295434572559014ULL;
unsigned long long int var_12 = 2578951960198404196ULL;
unsigned char var_16 = (unsigned char)124;
int zero = 0;
unsigned char var_17 = (unsigned char)228;
unsigned char var_18 = (unsigned char)92;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != (unsigned char)41;
    value_mismatch |= var_18 != (unsigned char)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_6, var_12, var_16, zero, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
