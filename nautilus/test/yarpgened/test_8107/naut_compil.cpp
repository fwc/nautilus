/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8107
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8107
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
void test(val<unsigned char> var_11, val<int> zero, val<unsigned char*> var_12, val<unsigned char*> var_13) {
    *var_12 = ((/* implicit */val<unsigned char>) ((((((/* implicit */val<int>) min(((val<unsigned char>)249), ((val<unsigned char>)159)))) & (((((/* implicit */val<int>) (val<unsigned char>)236)) * (((/* implicit */val<int>) (val<unsigned char>)10)))))) > (((((/* implicit */val<int>) var_11)) - (((/* implicit */val<int>) ((((/* implicit */val<int>) (val<unsigned char>)31)) < (((/* implicit */val<int>) (val<unsigned char>)225)))))))));
    *var_13 = (val<unsigned char>)255;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)82;
int zero = 0;
unsigned char var_12 = (unsigned char)155;
unsigned char var_13 = (unsigned char)140;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (unsigned char)0;
    value_mismatch |= var_13 != (unsigned char)255;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_11, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
