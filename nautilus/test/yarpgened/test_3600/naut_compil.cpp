/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3600
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3600
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
void test(val<int> var_4, val<int> var_6, val<int> zero, val<unsigned char*> var_14, val<unsigned short*> var_15) {
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (val<unsigned char>)148)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) 11312432)))))) : (9161448415811188693ULL)));
    *var_15 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned int>) var_4)), ((~(((val<unsigned int>) var_6))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1451751369;
int var_6 = 748918457;
int zero = 0;
unsigned char var_14 = (unsigned char)117;
unsigned short var_15 = (unsigned short)42593;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)0;
    value_mismatch |= var_15 != (unsigned short)63433;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_4, var_6, zero, &var_14, &var_15);
  checksum();
  assert(!value_mismatch);
}
