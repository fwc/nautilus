/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4320
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=4320
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
void test(val<unsigned long long int> var_1, val<long long int> var_2, val<unsigned long long int> var_9, val<int> zero, val<unsigned long long int*> var_16, val<unsigned short*> var_17, val<short*> var_18) {
    *var_16 = (+(max((min((var_9), (var_1))), (((/* implicit */val<unsigned long long int>) (+(5133796271952035011LL)))))));
    *var_17 = ((/* implicit */val<unsigned short>) min((((/* implicit */val<unsigned long long int>) (val<unsigned char>)198)), (0ULL)));
    *var_18 |= ((/* implicit */val<short>) ((((val<unsigned long long int>) -5133796271952035011LL)) << (((/* implicit */val<int>) ((((/* implicit */val<long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2)))))) <= (var_2))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7797704347092692025ULL;
long long int var_2 = 6990209837515831233LL;
unsigned long long int var_9 = 5655746437471366510ULL;
int zero = 0;
unsigned long long int var_16 = 13446262418506865911ULL;
unsigned short var_17 = (unsigned short)2687;
short var_18 = (short)29688;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != 5655746437471366510ULL;
    value_mismatch |= var_17 != (unsigned short)0;
    value_mismatch |= var_18 != (short)30714;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_9, zero, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
