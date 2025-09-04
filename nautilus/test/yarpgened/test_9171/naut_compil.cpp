/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9171
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=9171
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_1, val<unsigned int> var_9, val<long long int> var_10, val<unsigned char> var_15, val<int> zero, val<unsigned short*> var_18, val<unsigned char*> var_19) {
    *var_18 = ((/* implicit */val<unsigned short>) ((var_1) & (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) var_0)))))));
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) (+(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_9)) && (((/* implicit */val<bool>) var_10)))))))) ? ((-(((((/* implicit */val<bool>) (val<unsigned short>)45057)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)240))) : (3203134386220482825ULL))))) : (((/* implicit */val<unsigned long long int>) (((~(((/* implicit */val<int>) var_15)))) & ((+(((/* implicit */val<int>) (val<unsigned char>)112)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)251;
unsigned long long int var_1 = 4743048113598004808ULL;
unsigned int var_9 = 1162147927U;
long long int var_10 = -1668994881062456912LL;
unsigned char var_15 = (unsigned char)76;
int zero = 0;
unsigned short var_18 = (unsigned short)22597;
unsigned char var_19 = (unsigned char)115;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)32256;
    value_mismatch |= var_19 != (unsigned char)16;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_9, var_10, var_15, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
