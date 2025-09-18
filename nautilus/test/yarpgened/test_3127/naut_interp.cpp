/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3127
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=3127
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
void test(val<unsigned long long int> var_8, val<int> var_17, val<int> zero, val<unsigned char*> var_20, val<unsigned int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned char>) var_8);
    *var_21 |= ((/* implicit */val<unsigned int>) ((((/* implicit */val<bool>) 2054217493468308535ULL)) ? (var_17) : (((/* implicit */val<int>) ((val<unsigned short>) (!(((/* implicit */val<bool>) -9223372036854775801LL))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15102929552204798193ULL;
int var_17 = -1804066530;
int zero = 0;
unsigned char var_20 = (unsigned char)32;
unsigned int var_21 = 4287228897U;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned char)241;
    value_mismatch |= var_21 != 4294568959U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_8, var_17, zero, &var_20, &var_21);
  checksum();
}
