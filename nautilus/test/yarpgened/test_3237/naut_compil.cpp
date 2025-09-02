/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3237
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3237
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
void test(val<unsigned int> var_0, val<int> var_3, val<unsigned char> var_9, val<int> zero, val<long long int*> var_12, val<unsigned short*> var_13) {
    *var_12 ^= ((/* implicit */val<long long int>) max((((/* implicit */val<unsigned int>) var_9)), (min((((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) (val<unsigned char>)250))))), (((73401892U) * (var_0)))))));
    *var_13 = ((/* implicit */val<unsigned short>) (((-(((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_3))))))) + (((((((/* implicit */val<int>) var_9)) << (((8556054716825661171LL) - (8556054716825661154LL))))) ^ (((((/* implicit */val<bool>) 73401895U)) ? (var_3) : (((/* implicit */val<int>) var_9))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2532737301U;
int var_3 = -502391571;
unsigned char var_9 = (unsigned char)109;
int zero = 0;
long long int var_12 = -1832192221262300812LL;
unsigned short var_13 = (unsigned short)45559;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != -1832192221262300786LL;
    value_mismatch |= var_13 != (unsigned short)7405;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_9, zero, &var_12, &var_13);
  checksum();
  assert(!value_mismatch);
}
