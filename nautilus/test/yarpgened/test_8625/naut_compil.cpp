/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8625
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8625
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
void test(val<short> var_1, val<unsigned long long int> var_2, val<bool> var_5, val<unsigned short> var_8, val<long long int> var_10, val<unsigned int> var_11, val<int> zero, val<unsigned char*> var_19, val<long long int*> var_20, val<unsigned char*> var_21, val<int*> var_22) {
    *var_19 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) (val<short>)31066)) ? (((/* implicit */val<long long int>) 8191)) : (-1735874889649106635LL)))) == (var_2)));
    if (((/* implicit */val<bool>) var_1))
    {
        *var_20 = ((/* implicit */val<long long int>) max((*var_20), (min((((((/* implicit */val<bool>) (val<short>)1984)) ? (((var_10) / (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_5))))), (((/* implicit */val<long long int>) var_8))))));
        *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<unsigned long long int>) -1)) ^ (864691128455135232ULL)));
    }

    *var_22 |= ((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_11))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17406;
unsigned long long int var_2 = 15973678782884198333ULL;
bool var_5 = (bool)1;
unsigned short var_8 = (unsigned short)5994;
long long int var_10 = -124139268117349828LL;
unsigned int var_11 = 1679583340U;
int zero = 0;
unsigned char var_19 = (unsigned char)250;
long long int var_20 = 4209877436908464444LL;
unsigned char var_21 = (unsigned char)208;
int var_22 = 1611415995;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)0;
    value_mismatch |= var_20 != 4209877436908464444LL;
    value_mismatch |= var_21 != (unsigned char)255;
    value_mismatch |= var_22 != 1611415995;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_5, var_8, var_10, var_11, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
