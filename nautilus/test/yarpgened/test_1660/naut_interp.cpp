/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1660
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1660
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
void test(val<int> var_1, val<unsigned long long int> var_3, val<signed char> var_4, val<unsigned char> var_6, val<long long int> var_10, val<long long int> var_14, val<signed char> var_15, val<unsigned char> var_17, val<int> zero, val<unsigned char*> var_18, val<unsigned long long int*> var_19, val<signed char*> var_20, val<unsigned char*> var_21, val<long long int*> var_22) {
    *var_18 &= ((/* implicit */val<unsigned char>) (val<signed char>)-1);
    *var_19 &= ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_6)) ? (var_3) : (((/* implicit */val<unsigned long long int>) var_14))))) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) ((var_10) < (((/* implicit */val<long long int>) var_1)))))) : (((val<long long int>) var_17))))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_17))) : (min((min((32767U), (((/* implicit */val<unsigned int>) (val<signed char>)-1)))), (((/* implicit */val<unsigned int>) (~(((/* implicit */val<int>) var_17)))))))));
    *var_20 = ((/* implicit */val<signed char>) max((var_17), (((/* implicit */val<unsigned char>) (val<signed char>)-1))));
    *var_21 = ((/* implicit */val<unsigned char>) max((*var_21), (((/* implicit */val<unsigned char>) var_4))));
    *var_22 -= ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((((/* implicit */val<bool>) var_15)) || (((/* implicit */val<bool>) max((1452183958U), (((/* implicit */val<unsigned int>) (val<unsigned short>)15))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -308612847;
unsigned long long int var_3 = 8270192197016714850ULL;
signed char var_4 = (signed char)-64;
unsigned char var_6 = (unsigned char)217;
long long int var_10 = -5597142382509559722LL;
long long int var_14 = 6627390481928311314LL;
signed char var_15 = (signed char)-121;
unsigned char var_17 = (unsigned char)192;
int zero = 0;
unsigned char var_18 = (unsigned char)138;
unsigned long long int var_19 = 5261367529082246513ULL;
signed char var_20 = (signed char)-27;
unsigned char var_21 = (unsigned char)193;
long long int var_22 = -8362094929071709836LL;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)138;
    value_mismatch |= var_19 != 64ULL;
    value_mismatch |= var_20 != (signed char)-1;
    value_mismatch |= var_21 != (unsigned char)193;
    value_mismatch |= var_22 != -8362094929071709834LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_4, var_6, var_10, var_14, var_15, var_17, zero, &var_18, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
