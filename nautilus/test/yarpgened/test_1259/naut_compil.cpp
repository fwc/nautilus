/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1259
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1259
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
void test(val<unsigned char> var_0, val<unsigned char> var_1, val<unsigned char> var_7, val<unsigned char> var_9, val<int> zero, val<unsigned char*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned char>) min(((((!(((/* implicit */val<bool>) var_0)))) ? (((((/* implicit */val<int>) var_1)) ^ (((/* implicit */val<int>) var_7)))) : (((/* implicit */val<int>) ((((/* implicit */val<bool>) (val<unsigned char>)13)) || (((/* implicit */val<bool>) (val<unsigned char>)255))))))), (((/* implicit */val<int>) (val<unsigned char>)45))));
    *var_19 = ((/* implicit */val<unsigned char>) (((~((~(((/* implicit */val<int>) var_9)))))) >> (((((/* implicit */val<int>) (val<unsigned char>)211)) - (206)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned char var_1 = (unsigned char)12;
unsigned char var_7 = (unsigned char)182;
unsigned char var_9 = (unsigned char)100;
int zero = 0;
unsigned char var_18 = (unsigned char)74;
unsigned char var_19 = (unsigned char)147;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)1;
    value_mismatch |= var_19 != (unsigned char)3;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_7, var_9, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
