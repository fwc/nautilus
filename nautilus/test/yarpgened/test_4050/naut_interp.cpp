/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4050
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4050
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
void test(val<unsigned short> var_1, val<bool> var_4, val<int> zero, val<unsigned long long int*> var_20, val<long long int*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) var_1);
    *var_21 = ((/* implicit */val<long long int>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<unsigned short>)65524)) ? (((/* implicit */val<unsigned long long int>) 2147483647)) : (35180077121536ULL)))) || (var_4)))) <= (((((((/* implicit */val<bool>) 14036178585934164044ULL)) && (((/* implicit */val<bool>) 1280099276)))) ? (((((/* implicit */val<bool>) 1317151166)) ? (((/* implicit */val<int>) (val<unsigned short>)22506)) : (((/* implicit */val<int>) (val<unsigned char>)242)))) : (((/* implicit */val<int>) (val<unsigned char>)14))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18952;
bool var_4 = (bool)1;
int zero = 0;
unsigned long long int var_20 = 4192369819856519640ULL;
long long int var_21 = -6665844649221351675LL;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 18952ULL;
    value_mismatch |= var_21 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
