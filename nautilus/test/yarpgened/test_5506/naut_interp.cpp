/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5506
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5506
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
void test(val<unsigned int> var_0, val<long long int> var_4, val<long long int> var_9, val<int> zero, val<short*> var_10, val<unsigned char*> var_11, val<short*> var_12, val<unsigned char*> var_13, val<long long int*> var_14) {
    if (((/* implicit */val<bool>) max((max((((/* implicit */val<unsigned long long int>) (-(((/* implicit */val<int>) (val<unsigned short>)65535))))), (max((((/* implicit */val<unsigned long long int>) var_0)), (6303928197163854417ULL))))), (((/* implicit */val<unsigned long long int>) var_9)))))
    {
        *var_10 = ((/* implicit */val<short>) min((*var_10), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) (-(((/* implicit */val<int>) (val<bool>)1))))))))));
        *var_11 *= ((/* implicit */val<unsigned char>) (-(((/* implicit */val<int>) (val<signed char>)-38))));
        *var_12 = ((/* implicit */val<short>) (-((-((~(((/* implicit */val<int>) (val<signed char>)-18))))))));
    }

    *var_13 = ((/* implicit */val<unsigned char>) (+((-(var_4)))));
    *var_14 = ((/* implicit */val<long long int>) max((*var_14), (((/* implicit */val<long long int>) max((((/* implicit */val<short>) (val<signed char>)-38)), ((val<short>)-32754))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 182177514U;
long long int var_4 = -6422627595368694296LL;
long long int var_9 = -1513892361750937324LL;
int zero = 0;
short var_10 = (short)21149;
unsigned char var_11 = (unsigned char)47;
short var_12 = (short)23377;
unsigned char var_13 = (unsigned char)100;
long long int var_14 = 8513023275691492202LL;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (short)0;
    value_mismatch |= var_11 != (unsigned char)250;
    value_mismatch |= var_12 != (short)17;
    value_mismatch |= var_13 != (unsigned char)24;
    value_mismatch |= var_14 != 8513023275691492202LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_4, var_9, zero, &var_10, &var_11, &var_12, &var_13, &var_14);
  checksum();
}
