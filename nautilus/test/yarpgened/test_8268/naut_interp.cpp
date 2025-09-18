/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8268
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8268
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
void test(val<long long int> var_1, val<short> var_2, val<unsigned char> var_6, val<unsigned char> var_8, val<unsigned int> var_9, val<unsigned short> var_13, val<int> zero, val<long long int*> var_14, val<long long int*> var_15, val<unsigned char*> var_16) {
    *var_14 = ((/* implicit */val<long long int>) var_9);
    if (((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_13))) & (var_9)))) ? (((/* implicit */val<int>) var_2)) : (((/* implicit */val<int>) ((val<unsigned char>) 665806788U)))))) ? (min((((/* implicit */val<unsigned long long int>) var_8)), (((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) % (17604537595683683023ULL))))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_13))))))
    {
        *var_15 = ((/* implicit */val<long long int>) (~(((((/* implicit */val<bool>) (val<unsigned char>)72)) ? (((/* implicit */val<unsigned long long int>) 442050938)) : (((((/* implicit */val<bool>) (val<short>)-64)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<short>)-21371))) : (4903872271717817855ULL)))))));
        *var_16 = ((/* implicit */val<unsigned char>) var_1);
    }

}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2320786203982245701LL;
short var_2 = (short)-8817;
unsigned char var_6 = (unsigned char)210;
unsigned char var_8 = (unsigned char)195;
unsigned int var_9 = 74931872U;
unsigned short var_13 = (unsigned short)48106;
int zero = 0;
long long int var_14 = -8601729038385359100LL;
long long int var_15 = -3089582994489930007LL;
unsigned char var_16 = (unsigned char)191;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != 74931872LL;
    value_mismatch |= var_15 != -442050939LL;
    value_mismatch |= var_16 != (unsigned char)69;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_6, var_8, var_9, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
